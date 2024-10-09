#ifndef RGT_RGO_IMAGE_H
#define RGT_RGO_IMAGE_H

#include "rgt_image.h"

typedef struct _rgt_rgo_color_palette
{
	u64 offset;
	rgt_color_array colors;
} rgt_rgo_color_palette;

typedef struct _rgt_rgo_map_data
{
	u64 offset;
	rgt_u8_array data;
} rgt_rgo_map_data;

typedef struct _rgt_rgo_subimage
{
	u32 uncompressed_size;
	rgt_u8_array data;
} rgt_rgo_subimage;

RGT_DECLARE_ARRAY_TYPE(rgt_rgo_subimage, rgt_subimage_array)

typedef struct _rgt_rgo_image_header
{
	u64 offset;
	rgt_u32_array subimage_offsets;
} rgt_rgo_image_header;

typedef struct _rgt_rgo_image
{
	rgt_rgo_color_palette palette;
	rgt_rgo_map_data map_data;
	rgt_rgo_image_header header;
	rgt_subimage_array subimages;
} rgt_rgo_image;

typedef struct _rgt_rgo_pr_image_info
{
	u64 palette_offset;
	u64 num_colors;
	u64 pixel_offset;
	u32 width;
	u32 height;
	bool is_compressed;
} rgt_rgo_pr_image_info;

RGT_DECLARE_ARRAY_TYPE(rgt_rgo_color_palette, rgt_rgo_color_palette_array)
RGT_DECLARE_ARRAY_TYPE(rgt_rgo_image, rgt_rgo_image_array)
RGT_DECLARE_ARRAY_TYPE(rgt_rgo_pr_image_info, rgt_rgo_pr_image_info_array)

rgt_result
rgt_parse_rgo_image_file
(
	rgt_arena *arena, rgt_u8_array in, rgt_rgo_image_array *create
);

rgt_result
rgt_parse_rgo_image_manual
(
	rgt_arena *arena, rgt_u8_array in, 
	u64 palette_offset, u64 num_palette_colors, u64 header_offset,
	rgt_rgo_image *create
);

rgt_result
rgt_parse_rgo_pr_file
(
	rgt_arena *arena, rgt_u8_array in,
	rgt_rgo_pr_image_info_array image_infos, rgt_rgo_image_array *create
);

rgt_result
rgt_rgo_image_to_image
(
	rgt_arena *arena, rgt_rgo_image rgo_image, u32 width,
	bool compressed, bool tiled, rgt_image *create
);

rgt_result
rgt_build_rgo_image_file
(
	rgt_arena *arena, rgt_rgo_image_array images, rgt_u8_array *out
);

rgt_result
rgt_replace_rgo_image
(
	rgt_arena *arena, rgt_rgo_image_array *rgo_images, u64 replace_index,
	bool preserve_palette, rgt_image image
);

#endif