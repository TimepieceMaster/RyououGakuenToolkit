#define _CRT_SECURE_NO_WARNINGS
#include "ryouou_gakuen_toolkit.h"
#include "rgo_pr_image_info.h"

rgt_result
extract_nonstandard_image_uncompressed
(
	rgt_arena *arena, rgt_u8_array in,
	u64 palette_offset, u64 num_colors,
	u64 pixel_offset, u32 width, u32 height,
	const char *out_path
)
{
	rgt_result result = RGT_SUCCESS;

	u64 pos = palette_offset;

	rgt_rgo_color_palette palette = {0};
	palette.offset = pos;
	RGT_CREATE_ARRAY(arena, num_colors, &palette.colors);
	RGT_CALL(rgt_read_bytes(in, &pos, num_colors * 4, palette.colors.elems));

	pos = pixel_offset;

	rgt_rgo_subimage subimage = {0};

	if (num_colors == 16)
	{
		RGT_CREATE_ARRAY(arena, width/2 * height, &subimage.data);
	}
	else
	{
		RGT_CREATE_ARRAY(arena, width * height, &subimage.data);
	}
	RGT_CALL
	(
		rgt_read_bytes(in, &pos, subimage.data.length, subimage.data.elems)
	);

	rgt_rgo_image rgo_image = {0};
	rgo_image.palette = palette;
	RGT_APPEND_ARRAY(arena, &subimage, &rgo_image.subimages);

	rgt_image image = {0};
	RGT_CALL
	(
		rgt_rgo_image_to_image(arena, rgo_image, width, false, true, &image)
	);

	RGT_CALL(rgt_save_png(arena, image, 6, out_path));

finish:

	return result;
}

rgt_result
extract_pr_bin(rgt_arena *arena)
{
	rgt_result result = RGT_SUCCESS;

	rgt_u8_array pr_file = {0};
	rgt_rgo_image_array rgo_images = {0};

	RGT_CALL(rgt_load_file(arena, "assets\\pr.bin", &pr_file));
	RGT_CALL(rgt_parse_rgo_pr_file(arena, pr_file, g_rgo_pr_image_infos, &rgo_images));

	for (u64 i = 0; i < rgo_images.length; ++i)
	{
		rgt_image image = {0};
		RGT_CALL
		(
			rgt_rgo_image_to_image
			(
				arena, rgo_images.elems[i], 
				g_rgo_pr_image_infos.elems[i].width, 
				g_rgo_pr_image_infos.elems[i].is_compressed, 
				true, &image
			)
		);

		char out_path[1024] = {0};
		sprintf(out_path, "results\\pr_%llu.png", i);
		RGT_CALL(rgt_save_png(arena, image, 6, out_path));
	}

finish:

	return result;
}

rgt_result
extract_2540(rgt_arena *arena)
{
	rgt_result result = RGT_SUCCESS;
	char filename[1024] = {0};

	rgt_u8_array file = {0};
	RGT_CALL(rgt_load_file(arena, "assets\\2540", &file));

	for (u64 i = 0; i < 16; ++i)
	{
		sprintf(filename, "results\\2540_%llu.png", i);
		RGT_CALL
		(
			extract_nonstandard_image_uncompressed
			(
				arena, file,
				0x80130 + i*0x400, 256,
				0xb0 + i*0x8000, 256, 128, 
				filename
			)
		);
	}

finish:

	return result;
}

u32 get_image_width(u64 file, u64 image)
{
	u32 width = 512;

#if 0
	switch(file)
	{
	case 2529:
		width = (u32[]){ 512, 128 }[image];
		break;
	case 2530:
		width = (u32[]){ 512, 256 }[image];
		break;
	case 2531:
		width = (u32[]){ 512, 256, 512 }[image];
		break;
	case 2532:
		width = (u32[]){ 512, 256, 512 }[image];
		break;
	case 2533:
		width = (u32[])
		{ 
			512, 256, 512, 512, 
			256, 512, 512, 512,
			512, 512, 512, 512,
			512, 512, 512, 512,
			512, 512
		}
		[image];
		break;
	case 2538:
		width = (u32[]){ 256, 512 }[image];
		break;
	}
#endif
	return width;
}

rgt_result 
extract_image(rgt_arena *arena, u64 index)
{
	rgt_result result = RGT_SUCCESS;

	char in_path[1024] = {0};
	rgt_u8_array file = {0};
	sprintf(in_path, "assets\\NIM\\%llu.bin", index);
	RGT_CALL(rgt_load_file(arena, in_path, &file));

	rgt_rgo_image_array rgo_images = {0};
	RGT_CALL(rgt_parse_rgo_image_file(arena, file, &rgo_images));

	/* 2530's last image is empty and has 0 subimages (invalid) */
//	if (index == 2530)
//	{
//		--rgo_images.length;
//	}

	for (u64 i = 0; i < rgo_images.length; ++i)
	{
		rgt_image image = {0};
		u32 width = get_image_width(index, i);
		RGT_CALL
		(
			rgt_rgo_image_to_image
			(
				arena, rgo_images.elems[i], width, true, true, &image
			)
		);

		char out_path[1024] = {0};
		sprintf(out_path, "results\\NIM\\%llu_%llu.png", index, i);
		RGT_CALL(rgt_save_png(arena, image, 6, out_path));
		printf("%s\n", out_path);
	}

finish:

	return result;
}

int
main(void)
{
	rgt_result result = RGT_SUCCESS;
	rgt_arena arena = {0};

	rgt_create_arena(RGT_MEGABYTE(64), &arena);

	for (u64 i = 912; i < 3248; ++i)
	{
//		if (i == 2535 || i == 2537)
//		{
//			continue;
//		}
		RGT_CALL(extract_image(&arena, i));
		rgt_reset_arena(&arena);
	}

//	RGT_CALL(extract_2540(&arena));
	rgt_reset_arena(&arena);

//	RGT_CALL(extract_pr_bin(&arena));

finish:

	rgt_destroy_arena(&arena);

	return result;
}
