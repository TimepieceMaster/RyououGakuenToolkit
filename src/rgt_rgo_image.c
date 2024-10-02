#include "ryouou_gakuen_toolkit.h"

#define MAP_MAGIC 0x0050414D /* "MAP " */
#define DEFAULT_FIRST_HEADER_OFFSET 0x1800
#define TILE_WIDTH 16
#define TILE_HEIGHT 8
#define TILE_SIZE (TILE_WIDTH * TILE_HEIGHT)

static rgt_result
s_is_palette(rgt_u8_array in, u64 pos, bool *out)
{
	rgt_result result = RGT_SUCCESS;
	bool is_palette = false;

	u32 color = 0;
	RGT_CALL(rgt_read_bytes(in, &pos, 4, &color));

	if (color == MAP_MAGIC)
	{
		RGT_EARLY_RETURN;
	}

	if (color > 0 && color < 256)
	{
		RGT_EARLY_RETURN;
	}

	if (color == 0)
	{
		RGT_CALL(rgt_read_bytes(in, &pos, 4, &color));
		if (color == 0)
		{
			RGT_EARLY_RETURN;
		}
	}

	is_palette = true;

finish:

	if (result == RGT_SUCCESS)
	{
		*out = is_palette;
	}

	return result;
}

static rgt_result
s_get_palette_size(rgt_u8_array in, u64 pos, u64 *out)
{
	rgt_result result = RGT_SUCCESS;
	u64 num_colors = 256;
	u32 color  = 0;

	pos += 16 * 4;
	RGT_CALL(rgt_read_bytes(in, &pos, 4, &color));
	if (color >= 0 && color < 16)
	{
		num_colors = 16;
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*out = num_colors;
	}

	return result;
}

static rgt_result
s_read_palette
(
	rgt_arena *arena, rgt_u8_array in, u64 *pos, u64 num_colors, 
	rgt_rgo_color_palette *create
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_rgo_color_palette palette = {0};

	palette.offset = *pos;
	RGT_CREATE_ARRAY(arena, num_colors, &palette.colors);
	RGT_CALL(rgt_read_bytes(in, pos, num_colors * 4, palette.colors.elems));

finish:

	if (result == RGT_SUCCESS)
	{
		*create = palette;
	}

	return result;
}

static rgt_result
s_advance_to_next_palette
(
	rgt_u8_array in, u64 *pos, u64 prev_palette_num_colors
)
{
	rgt_result result = RGT_SUCCESS;

	if (prev_palette_num_colors == 256)
	{
		RGT_EARLY_RETURN;
	}

	u32 color = 0;
	RGT_CALL(rgt_read_bytes(in, pos, 4, &color));
	if (color != 0)
	{
		*pos -= 4;
		RGT_EARLY_RETURN;
	}

	RGT_CALL(rgt_read_bytes(in, pos, 4, &color));
	*pos -= 4;
	if (color == 0)
	{
		*pos = rgt_align(*pos, 256);
	}

finish:

	return result;
}

static rgt_result
s_read_all_palettes
(
	rgt_arena *arena, rgt_u8_array in, u64 *pos, 
	rgt_rgo_color_palette_array *create
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_rgo_color_palette_array palettes = {0};
	
	bool is_palette = false;
	RGT_CALL(s_is_palette(in, *pos, &is_palette));
	while (is_palette)
	{
		u64 cols = 0;
		rgt_rgo_color_palette pal = {0};
		RGT_CALL(s_get_palette_size(in, *pos, &cols));
		RGT_CALL(s_read_palette(arena, in, pos, cols, &pal));
		RGT_APPEND_ARRAY(arena, &pal, &palettes);
		RGT_CALL(s_advance_to_next_palette(in, pos, cols));

		RGT_CALL(s_is_palette(in, *pos, &is_palette));
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*create = palettes;
	}

	return result;
}

static rgt_result
s_is_map_data(rgt_u8_array in, u64 pos, bool *out)
{
	rgt_result result = RGT_SUCCESS;
	bool is_map_data = false;

	u32 magic = 0;
	RGT_CALL(rgt_read_bytes(in, &pos, 4, &magic));
	if (magic == MAP_MAGIC)
	{
		is_map_data = true;
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*out = is_map_data;
	}

	return result;
}

static rgt_result
s_read_map_data
(
	rgt_arena *arena, rgt_u8_array in, u64 *pos, rgt_rgo_map_data *create
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_rgo_map_data map_data = {0};

	map_data.offset = *pos;
	*pos += 4;

	u16 map_size = 0;
	RGT_CALL(rgt_read_bytes(in, pos, 2, &map_size));
	*pos -= 6;

	RGT_CREATE_ARRAY(arena, map_size, &map_data.data);
	RGT_CALL(rgt_read_bytes(in, pos, map_size, map_data.data.elems));

finish:

	if (result == RGT_SUCCESS)
	{
		*create = map_data;
	}

	return result;
}

static rgt_result
s_advance_to_first_image_header(rgt_u8_array in, u64 *pos)
{
	rgt_result result = RGT_SUCCESS;

	u32 val = 0;
	RGT_CALL(rgt_read_bytes(in, pos, 4, &val));
	*pos -= 4;

	if (val == 0 && *pos <= DEFAULT_FIRST_HEADER_OFFSET)
	{
		*pos = DEFAULT_FIRST_HEADER_OFFSET;
	}
	else if (val > 256)
	{
		RGT_THROW(RGT_INVALID_RGO_IMAGE_ERROR);
	}

finish:

	return result;
}

static rgt_result
s_read_image_header
(
	rgt_arena *arena, rgt_u8_array in, u64 pos, rgt_rgo_image_header *create
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_rgo_image_header header = {0};
	
	header.offset = pos;

	u32 num_subimages = 0;
	RGT_CALL(rgt_read_bytes(in, &pos, 4, &num_subimages));

	RGT_CREATE_ARRAY(arena, num_subimages + 1, &header.subimage_offsets);
	for (u64 i = 0; i < header.subimage_offsets.length; ++i)
	{
		RGT_CALL
		(
			rgt_read_bytes(in, &pos, 4, &header.subimage_offsets.elems[i])
		);
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*create = header;
	}

	return result;
}

static rgt_result
s_read_subimages
(
	rgt_arena *arena, rgt_u8_array in, u64 pos, 
	rgt_u32_array subimage_offsets, rgt_subimage_array *create
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_subimage_array subimages = {0};

	RGT_CREATE_ARRAY(arena, subimage_offsets.length - 1, &subimages);

	u64 base_pos = pos;
	for (u64 i = 0; i < subimage_offsets.length - 1; ++i)
	{
		pos = base_pos + subimage_offsets.elems[i];
		RGT_CALL
		(
			rgt_read_bytes(in, &pos, 4, &subimages.elems[i].uncompressed_size)
		);
		pos += 12;
		
		u32 compressed_size = 
			subimage_offsets.elems[i + 1] - subimage_offsets.elems[i] - 0x10;
		
		RGT_CREATE_ARRAY(arena, compressed_size, &subimages.elems[i].data);
		RGT_CALL
		(
			rgt_read_bytes
			(
				in, &pos, compressed_size, subimages.elems[i].data.elems
			)
		);
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*create = subimages;
	}

	return result;
}

static void
s_advance_to_next_header(rgt_u8_array in, u32 prev_image_size, u64 *pos)
{
	*pos += rgt_align(prev_image_size, RGT_KILOBYTE(2));
}

static rgt_result
s_read_all_headers
(
	rgt_arena *arena, rgt_u8_array in, u64 pos, rgt_rgo_image_array *populate
)
{
	rgt_result result = RGT_SUCCESS;

	RGT_CALL(s_advance_to_first_image_header(in, &pos));
	for (u64 i = 0; i < populate->length; ++i)
	{
		rgt_rgo_image *image = &populate->elems[i];
		rgt_rgo_image_header *header = &image->header;
		rgt_subimage_array *subimgs = &image->subimages;
		rgt_u32_array *subimg_offs = &header->subimage_offsets;

		RGT_CALL(s_read_image_header(arena, in, pos, header));
		RGT_CALL(s_read_subimages(arena, in, pos, *subimg_offs, subimgs));
		if (i < populate->length - 1)
		{
			u32 prev_image_size = subimg_offs->elems[subimg_offs->length - 1];
			s_advance_to_next_header(in, prev_image_size, &pos);
		}
	}

finish:

	return result;
}

rgt_result
rgt_parse_rgo_image_file
(
	rgt_arena *arena, rgt_u8_array in, rgt_rgo_image_array *create
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_rgo_image_array images = {0};
	rgt_rgo_color_palette_array palettes = {0};
	u64 pos = 0;
	bool has_map_data = false;

	RGT_CALL(s_read_all_palettes(arena, in, &pos, &palettes));
	RGT_CREATE_ARRAY(arena, palettes.length, &images);
	for (u64 i = 0; i < palettes.length; ++i)
	{
		images.elems[i].palette = palettes.elems[i];
	}

	RGT_CALL(s_is_map_data(in, pos, &has_map_data));
	if (has_map_data)
	{
		RGT_CALL(s_read_map_data(arena, in, &pos, &images.elems[0].map_data));
	}

	RGT_CALL(s_read_all_headers(arena, in, pos, &images));

finish:

	if (result == RGT_SUCCESS)
	{
		*create = images;
	}

	return result;
}

rgt_result
rgt_parse_rgo_image_manual
(
	rgt_arena *arena, rgt_u8_array in, 
	u64 palette_offset, u64 num_palette_colors, u64 header_offset,
	rgt_rgo_image *create
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_rgo_image rgo_image = {0};

	RGT_CALL
	(
		s_read_palette
		(
			arena, in, &palette_offset, num_palette_colors, &rgo_image.palette
		)
	);
	RGT_CALL(s_read_image_header(arena, in, header_offset, &rgo_image.header));
	RGT_CALL
	(
		s_read_subimages
		(
			arena, in, header_offset, rgo_image.header.subimage_offsets, 
			&rgo_image.subimages
		)
	);

finish:

	if (result == RGT_SUCCESS)
	{
		*create = rgo_image;
	}

	return result;
}

RGT_DECLARE_ARRAY_TYPE(rgt_u8_array, decompressed_subimages)

static rgt_result
s_decompress_subimages
(
	rgt_arena *arena, rgt_subimage_array subimages,
	decompressed_subimages *create
)
{
	rgt_result result = RGT_SUCCESS;
	decompressed_subimages decompressed = {0};
	
	RGT_CREATE_ARRAY(arena, subimages.length, &decompressed);
	for (u64 i = 0; i < subimages.length; ++i)
	{
		rgt_rgo_subimage *subimage = &subimages.elems[i];
		RGT_CREATE_ARRAY
		(
			arena, subimage->uncompressed_size, &decompressed.elems[i]
		);
		RGT_CALL(rgt_decompress_gzip(subimage->data, decompressed.elems[i]));
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*create = decompressed;
	}

	return result;
}

static rgt_result
s_combine_subimages
(
	rgt_arena *arena, decompressed_subimages subimages, rgt_u8_array *create
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_u8_array combined = {0};

	for (u64 i = 0; i < subimages.length; ++i)
	{
		combined.length += subimages.elems[i].length;
	}
	RGT_CREATE_ARRAY(arena, combined.length, &combined);

	u64 pos = 0;
	for (u64 i = 0; i < subimages.length; ++i)
	{
		RGT_CALL(rgt_copy_u8_array(combined, pos, subimages.elems[i]));
		pos += subimages.elems[i].length;
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*create = combined;
	}

	return result;
}

static rgt_result
s_untile_image
(
	rgt_arena *arena, rgt_u8_array tiled, u32 image_width, rgt_u8_array *create
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_u8_array untiled = {0};

	RGT_CREATE_ARRAY(arena, tiled.length, &untiled);

	u64 pos = 0;
	u32 tiles_wide = image_width / TILE_WIDTH;
	u32 tiles_high = ((u32)tiled.length / (TILE_SIZE)) / tiles_wide;

	for (u32 yt = 0; yt < tiles_high; ++yt)
	{
		for (u32 xt = 0; xt < tiles_wide; ++xt)
		{
			for (u32 y = 0; y < TILE_HEIGHT; ++y)
			{
				u64 off = 
					(yt * TILE_HEIGHT + y) * (tiles_wide * TILE_WIDTH)
					+ (xt * TILE_WIDTH);

				RGT_CALL
				(
					rgt_read_bytes
					(
						tiled, &pos, TILE_WIDTH, &untiled.elems[off]
					)
				);
			}
		}
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*create = untiled;
	}

	return result;
}

static rgt_result
s_split_pixels(rgt_arena *arena, rgt_u8_array pixels, rgt_u8_array *create)
{
	rgt_result result = RGT_SUCCESS;
	rgt_u8_array split = {0};

	RGT_CREATE_ARRAY(arena, pixels.length * 2, &split);
	for (u64 i = 0; i < pixels.length; ++i)
	{
		split.elems[i*2] = pixels.elems[i] & 0x0F;
		split.elems[i*2 + 1] = (pixels.elems[i] & 0xF0) >> 4;
	}

finish:	

	if (result == RGT_SUCCESS)
	{
		*create = split;
	}

	return result;
}

static rgt_result
s_apply_palette
(
	rgt_arena *arena, rgt_u8_array pixels, rgt_rgo_color_palette palette, 
	u32 width, rgt_image *create 
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_image image = {0};

	u32 height = (u32)(pixels.length / width);
	RGT_CALL(rgt_create_image(arena, width, height, &image));

	for (u64 y = 0; y < height; ++y)
	{
		for (u64 x = 0; x < width; ++x)
		{
			u64 idx = y * width + x;
			image.pixels[idx] = palette.colors.elems[pixels.elems[idx]];
		}
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*create = image;
	}

	return result;
}

rgt_result
rgt_rgo_image_to_image
(
	rgt_arena *arena, rgt_rgo_image rgo_image, u32 width,
	bool compressed, bool tiled, rgt_image *create
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_image image = {0};
	
	decompressed_subimages decompressed = {0};
	if (compressed)
	{
		RGT_CALL
		(
			s_decompress_subimages(arena, rgo_image.subimages, &decompressed)
		);
	}
	else
	{
		RGT_CREATE_ARRAY(arena, rgo_image.subimages.length, &decompressed);
		for (u64 i = 0; i < rgo_image.subimages.length; ++i)
		{
			decompressed.elems[i] = rgo_image.subimages.elems[i].data;
		}
	}

	rgt_u8_array combined = {0};
	if (decompressed.length > 1)
	{
		RGT_CALL(s_combine_subimages(arena, decompressed, &combined));
	}
	else
	{
		combined = decompressed.elems[0];
	}

	rgt_u8_array untiled = {0};
	if (rgo_image.palette.colors.length == 16)
	{
		rgt_u8_array temp = {0};
		if (tiled)
		{
			RGT_CALL(s_untile_image(arena, combined, width / 2, &temp));
			RGT_CALL(s_split_pixels(arena, temp, &untiled));
		}
		else
		{
			RGT_CALL(s_split_pixels(arena, combined, &untiled));
		}
	}
	else
	{
		if (tiled)
		{
			RGT_CALL(s_untile_image(arena, combined, width, &untiled));
		}
		else
		{
			untiled = combined;
		}
	}

	RGT_CALL
	(
		s_apply_palette(arena, untiled, rgo_image.palette, width, &image)
	);

finish:

	if (result == RGT_SUCCESS)
	{
		*create = image;
	}

	return result;
}

static u64
s_new_rgo_image_file_size(rgt_rgo_image_array images)
{
	rgt_rgo_image_header last_hdr = images.elems[images.length - 1].header;
	rgt_u32_array last_subs = last_hdr.subimage_offsets;
	u32 last_image_size = last_subs.elems[last_subs.length - 1];

	last_image_size = (u32)rgt_align(last_image_size, RGT_KILOBYTE(2));

	return rgt_align(last_image_size + last_hdr.offset, RGT_KILOBYTE(2));
}

static void
s_write_palettes(rgt_rgo_image_array images, rgt_u8_array file)
{
	for (u64 i = 0; i < images.length; ++i)
	{
		rgt_rgo_color_palette palette = images.elems[i].palette;
		memcpy
		(
			&file.elems[palette.offset], 
			palette.colors.elems, 
			RGT_ARRAY_SIZE(palette.colors)
		);
	}
}

static rgt_result
s_write_image_header_and_subimages(rgt_rgo_image image, rgt_u8_array file)
{
	rgt_result result = RGT_SUCCESS;

	u64 pos = image.header.offset;
	u32 num_subs = (u32)image.header.subimage_offsets.length - 1;
	RGT_CALL(rgt_write_u32(file, &pos, num_subs));
	memcpy
	(
		&file.elems[pos],
		image.header.subimage_offsets.elems,
		RGT_ARRAY_SIZE(image.header.subimage_offsets)
	);
	for (u64 i = 0; i < num_subs; ++i)
	{
		pos = image.header.offset + image.header.subimage_offsets.elems[i];
		RGT_CALL
		(
			rgt_write_u32
			(
				file, &pos, image.subimages.elems[i].uncompressed_size
			)
		);
		pos = rgt_align(pos, 16);
		memcpy
		(
			&file.elems[pos],
			image.subimages.elems[i].data.elems,
			image.subimages.elems[i].data.length
		);
	}

finish:

	return result;
}

static void
s_write_image_checksum(rgt_rgo_image image, rgt_u8_array file)
{
	rgt_u32_array offsets = image.header.subimage_offsets;
	u64 range_size = rgt_align
	(
		offsets.elems[offsets.length - 1], RGT_KILOBYTE(2)
	);
	u64 pos_start = image.header.offset;

	rgt_u8_array file_range = {0};
	file_range.elems = &file.elems[pos_start];
	file_range.length = range_size;
	file_range.capacity = range_size;

	if (file_range.length > 0)
	{
		rgt_add_checksum_whole_file(file_range);
	}
}

rgt_result
rgt_build_rgo_image_file
(
	rgt_arena *arena, rgt_rgo_image_array images, rgt_u8_array *out
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_u8_array file = {0};

	RGT_CREATE_ARRAY(arena, s_new_rgo_image_file_size(images), &file);
	
	s_write_palettes(images, file);
	if (images.elems[0].map_data.data.elems)
	{
		memcpy
		(
			&file.elems[images.elems[0].map_data.offset], 
			images.elems[0].map_data.data.elems, 
			RGT_ARRAY_SIZE(images.elems[0].map_data.data)
		);
	}

	for (u64 i = 0; i < images.length; ++i)
	{
		if (images.elems[i].header.subimage_offsets.elems)
		{
			s_write_image_header_and_subimages(images.elems[i], file);
		}
	}

	if (images.length > 1)
	{
		for (u64 i = 0; i < images.length; ++i)
		{
			s_write_image_checksum(images.elems[i], file);
		}
	}

	rgt_add_checksum_whole_file(file);

finish:

	if (result == RGT_SUCCESS)
	{
		*out = file;
	}

	return result;
}

static rgt_result
s_tile_image
(
	rgt_arena *arena, rgt_u8_array indices, 
	u32 pitch, rgt_u8_array *create
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_u8_array tiled = {0};

	RGT_CREATE_ARRAY(arena, indices.length, &tiled);
	
	u64 pos = 0;
	u32 tiles_wide = pitch / TILE_WIDTH;
	u32 tiles_high = ((u32)indices.length / (TILE_SIZE)) / tiles_wide;

	for (u32 yt = 0; yt < tiles_high; ++yt)
	{
		for (u32 xt = 0; xt < tiles_wide; ++xt)
		{
			for (u32 y = 0; y < TILE_HEIGHT; ++y)
			{
				u64 off = 
					(yt * TILE_HEIGHT + y) * (tiles_wide * TILE_WIDTH)
					+ (xt * TILE_WIDTH);

				memcpy(&tiled.elems[pos], &indices.elems[off], TILE_WIDTH);
				pos += TILE_WIDTH;
			}
		}
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*create = tiled;
	}

	return result;
}

static rgt_result
s_generate_subimages
(
	rgt_arena *arena, rgt_u8_array indices, 
	rgt_subimage_array prev, rgt_subimage_array *create
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_subimage_array subimages = {0};

	u64 subimage_start = 0;
	for (u64 i = 0; i < prev.length; ++i)
	{
		rgt_rgo_subimage sub = {0};
		sub.uncompressed_size = prev.elems[i].uncompressed_size;
		RGT_CREATE_ARRAY(arena, sub.uncompressed_size, &sub.data);

		rgt_u8_array uncompressed = {0};
		uncompressed.elems = &indices.elems[subimage_start];
		uncompressed.length = sub.uncompressed_size;
		subimage_start += uncompressed.length;

		RGT_CALL(rgt_compress_gzip(uncompressed, 1, &sub.data));
		RGT_APPEND_ARRAY(arena, &sub, &subimages);
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*create = subimages;
	}

	return result;
}

static void
s_update_subimage_offsets
(
	rgt_subimage_array subimages, rgt_rgo_image_header *update
)
{
	for (u64 i = 1; i < update->subimage_offsets.length; ++i)
	{
		u32 prev_offset = update->subimage_offsets.elems[i - 1];
		u32 subimage_length = (u32)subimages.elems[i - 1].data.length;
		u32 offset = prev_offset + (u32)rgt_align(subimage_length + 16, 16);
		update->subimage_offsets.elems[i] = offset;
	}
}

static void
s_update_header_offsets
(
	u64 replace_index, rgt_rgo_image_array *update
)
{
	for (u64 i = replace_index + 1; i < update->length; ++i)
	{
		rgt_rgo_image_header prev_header = update->elems[i - 1].header;
		u64 prev_offset = prev_header.offset;
		rgt_u32_array sub_offsets = prev_header.subimage_offsets;
		u64 prev_image_size = sub_offsets.elems[sub_offsets.length - 1];
		prev_image_size = rgt_align(prev_image_size, RGT_KILOBYTE(2));

		update->elems[i].header.offset = prev_offset + prev_image_size;
	}
}

rgt_result
rgt_replace_rgo_image
(
	rgt_arena *arena, rgt_rgo_image_array *rgo_images, u64 replace_index,
	bool preserve_palette, rgt_image image
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_u8_array image_indices = {0};
	rgt_u8_array image_tiled = {0};

	rgt_rgo_color_palette *palette = &rgo_images->elems[replace_index].palette;
	if (!preserve_palette)
	{
		RGT_CALL
		(
			rgt_get_image_color_palette
			(
				arena, image,
				palette->colors.length,
				&palette->colors
			)
		);
	}
	RGT_CALL
	(
		rgt_get_image_palette_indexes
		(
			arena, image, palette->colors, &image_indices
		)
	);

	u32 pitch = image.width;
	if (palette->colors.length == 16)
	{
		pitch /= 2;
	}
	RGT_CALL(s_tile_image(arena, image_indices, pitch, &image_tiled));
	RGT_CALL
	(
		s_generate_subimages
		(
			arena, image_tiled, 
			rgo_images->elems[replace_index].subimages, 
			&rgo_images->elems[replace_index].subimages
		)
	);
	s_update_subimage_offsets
	(
		rgo_images->elems[replace_index].subimages, 
		&rgo_images->elems[replace_index].header
	);
	s_update_header_offsets(replace_index, rgo_images);

finish:

	return result;
}
