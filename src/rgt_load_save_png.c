#include <setjmp.h>
#include <stdlib.h>
#include <string.h>

#include "png.h"
#include "zlib.h"

#include "ryouou_gakuen_toolkit.h"

#define SIG_LEN 8

rgt_result 
rgt_load_png(rgt_arena *arena, const char *path, rgt_image *create)
{
	rgt_result result = RGT_SUCCESS;
	FILE *file = NULL;
	png_structp png_ptr = 0;
	png_infop info_ptr = 0;
	rgt_image image = {0};
	u8 **row_ptrs = NULL;
	u8 *pixel_data = NULL;

	RGT_FOPEN(file, path, "rb");

	u8 header[SIG_LEN] = {0};
	RGT_FREAD(header, SIG_LEN, file);
	RGT_ASSERT(png_sig_cmp(header, 0, SIG_LEN) == 0, RGT_INVALID_PNG_ERROR);

	png_ptr = png_create_read_struct(PNG_LIBPNG_VER_STRING, 0, 0, 0);
	RGT_ASSERT(png_ptr, RGT_MEMORY_ALLOCATION_ERROR);

	info_ptr = png_create_info_struct(png_ptr);
	RGT_ASSERT(info_ptr, RGT_MEMORY_ALLOCATION_ERROR);

	if (setjmp(png_jmpbuf(png_ptr))) 
	{
		result = RGT_LOAD_PNG_ERROR;
		goto finish;
	}

	png_init_io(png_ptr, file);
	png_set_sig_bytes(png_ptr, SIG_LEN);
	png_read_info(png_ptr, info_ptr);

	int bit_depth = 0; 
	int color_type = 0;
	png_get_IHDR
	(
		png_ptr, info_ptr, &image.width, &image.height, 
		&bit_depth, &color_type, NULL, NULL, NULL
	);
	if (color_type == PNG_COLOR_TYPE_PALETTE) 
	{
		png_set_palette_to_rgb(png_ptr);
	}
	if (color_type == PNG_COLOR_TYPE_GRAY && bit_depth < 8) 
	{
		png_set_expand_gray_1_2_4_to_8(png_ptr);
	}
	if (png_get_valid(png_ptr, info_ptr, PNG_INFO_tRNS))
	{
		png_set_tRNS_to_alpha(png_ptr);
	}
	if (bit_depth == 16) 
	{
		png_set_strip_16(png_ptr);
	}
	if (bit_depth < 8) 
	{
		png_set_packing(png_ptr);
	}
	if (color_type == PNG_COLOR_TYPE_RGB || 
		color_type == PNG_COLOR_TYPE_GRAY) 
	{
		png_set_add_alpha(png_ptr, 0xFF, PNG_FILLER_AFTER);
	}
	if (color_type == PNG_COLOR_TYPE_GRAY || 
		color_type == PNG_COLOR_TYPE_GRAY_ALPHA) 
	{
		png_set_gray_to_rgb(png_ptr);
	}
	png_read_update_info(png_ptr, info_ptr);
	png_get_IHDR
	(
		png_ptr, info_ptr, &image.width, &image.height,
		&bit_depth, &color_type, NULL, NULL, NULL
	);
	RGT_ASSERT
	(
		color_type == PNG_COLOR_TYPE_RGBA && bit_depth == 8,
		RGT_UNSUPPORTED_PNG_ERROR
	);

	u32 bytes_per_row = image.width * sizeof(rgt_color);
	u32 bytes_in_image = bytes_per_row * image.height;
	RGT_CALL(rgt_arena_calloc(arena, bytes_in_image, &pixel_data));
	RGT_CALL(rgt_arena_calloc(arena, image.height * sizeof(u8*), (void**)&row_ptrs));

	for (u32 i = 0; i < image.height; ++i) 
	{
		row_ptrs[i] = &pixel_data[i * bytes_per_row];
	}
	png_read_image(png_ptr, row_ptrs);
	png_read_end(png_ptr, 0);

	image.pixels = (rgt_color*)pixel_data;

finish:

	png_destroy_read_struct(&png_ptr, &info_ptr, 0);
	RGT_FCLOSE(file);

	if (result == RGT_SUCCESS) 
	{
		*create = image;
	}

	return result;
}

rgt_result
rgt_save_png
(
	rgt_arena *arena, rgt_image image, int compression_level, const char *path
)
{
	rgt_result result = RGT_SUCCESS;
	FILE *file = 0;
	png_structp png_ptr = 0;
	png_infop info_ptr = 0;
	u8 **row_ptrs = 0;

	RGT_FOPEN(file, path, "wb");
	
	png_ptr = png_create_write_struct(PNG_LIBPNG_VER_STRING, 0, 0, 0);
	RGT_ASSERT(png_ptr, RGT_MEMORY_ALLOCATION_ERROR);

	info_ptr = png_create_info_struct(png_ptr);
	RGT_ASSERT(info_ptr, RGT_MEMORY_ALLOCATION_ERROR);

	if (setjmp(png_jmpbuf(png_ptr))) 
	{
		result = RGT_SAVE_PNG_ERROR;
		goto finish;
	}

	RGT_CALL(rgt_arena_calloc(arena, image.height * sizeof(u8*), (void**)&row_ptrs));
	for (u32 i = 0; i < image.height; ++i) 
	{
		row_ptrs[i] = (u8*)(&image.pixels[image.width * i]);
	}

	png_init_io(png_ptr, file);
	png_set_filter(png_ptr, 0, PNG_ALL_FILTERS);
	png_set_compression_level(png_ptr, compression_level);
	png_set_IHDR
	(
		png_ptr, info_ptr, image.width, image.height,
		8, PNG_COLOR_TYPE_RGBA, PNG_INTERLACE_NONE, 
		PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT
	);
	png_set_rows(png_ptr, info_ptr, row_ptrs);
	png_write_png(png_ptr, info_ptr, PNG_TRANSFORM_IDENTITY, 0);

finish:

	png_destroy_write_struct(&png_ptr, &info_ptr);
	RGT_FCLOSE(file);

	return result;
}
