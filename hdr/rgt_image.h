#ifndef RGT_IMAGE_H
#define RGT_IMAGE_H

#include "rgt_sized_int.h"
#include "rgt_result.h"
#include "rgt_array.h"

typedef struct _rgt_color 
{
	union 
	{
		struct 
		{
			u8 r;
			u8 g;
			u8 b;
			u8 a;
		};
		u32 rgba; 
	};
} rgt_color;

typedef struct _rgt_image {
	rgt_color *pixels;
	u32 width;
	u32 height;
} rgt_image;

RGT_DECLARE_ARRAY_TYPE(rgt_image, rgt_image_array)
RGT_DECLARE_ARRAY_TYPE(rgt_color, rgt_color_array)

rgt_result 
rgt_create_image(rgt_arena *arena, u32 width, u32 height, rgt_image *create);

void 
rgt_copy_image_region
(
	const rgt_image src, rgt_image dst, 
	u32 src_x, u32 src_y, u32 dst_x, u32 dst_y, u32 extent_x, u32 extent_y
);

void rgt_copy_image_region_2
(
	const rgt_image src, rgt_image dst,
	u32 src_x, u32 src_y, u32 dst_x, u32 dst_y, u32 extent_x, u32 extent_y,
	rgt_color ignore_color
);

void 
rgt_fill_image_region
(
	rgt_image dst, u32 start_x, u32 start_y, u32 extent_x, u32 extent_y,
	rgt_color fill_color
);

void
rgt_flip_image_vertically(rgt_image flip);

void
rgt_rgba_to_bgra(rgt_image convert);

rgt_result
rgt_get_image_color_palette
(
	rgt_arena *arena, rgt_image image, u64 min_colors, rgt_color_array *create
);

rgt_result
rgt_get_image_palette_indexes
(
	rgt_arena *arena, rgt_image image, rgt_color_array colors, 
	rgt_u8_array *create
);

void
rgt_comform_to_palette
(
	rgt_image image, rgt_color_array palette
);

#endif
