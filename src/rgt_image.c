#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "ryouou_gakuen_toolkit.h"

rgt_result 
rgt_create_image(rgt_arena *arena, u32 width, u32 height, rgt_image *create)
{
	rgt_result result = RGT_SUCCESS;
	rgt_image img = {.width = width, .height = height};

	RGT_CALL
	(
		rgt_arena_calloc
		(
			arena, img.width * img.height * sizeof(rgt_color), &img.pixels
		)
	);

finish:

	if (result == RGT_SUCCESS) 
	{
		*create = img;
	}

	return result;
}

void 
rgt_copy_image_region
(
	const rgt_image src, rgt_image dst, 
	u32 src_x, u32 src_y, u32 dst_x, u32 dst_y, u32 extent_x, u32 extent_y
)
{	
	const rgt_color *src_ptr = &src.pixels[src_y * src.width + src_x];
	rgt_color *dst_ptr = &dst.pixels[dst_y * dst.width + dst_x];

	for (u32 y = 0; y < extent_y; ++y) 
	{
		memcpy(dst_ptr, src_ptr, extent_x * sizeof(rgt_color));
		src_ptr += src.width;
		dst_ptr += dst.width;
	}
}

void rgt_copy_image_region_2
(
	const rgt_image src, rgt_image dst,
	u32 src_x, u32 src_y, u32 dst_x, u32 dst_y, u32 extent_x, u32 extent_y,
	rgt_color ignore_color
)
{
	for (u32 y = 0; y < extent_y; ++y) 
	{
		for (u32 x = 0; x < extent_x; ++x)
		{
			rgt_color src_color = 
				src.pixels[(y + src_y) * src.width + (x + src_x)];
			if (src_color.rgba == ignore_color.rgba)
			{
				continue;
			}
			dst.pixels[(y + dst_y) * dst.width + (x + dst_x)] = src_color;
		}
	}
}

void 
rgt_fill_image_region
(
	rgt_image dst, u32 start_x, u32 start_y, u32 extent_x, u32 extent_y, 
	rgt_color fill_color
)
{	
	for (u32 y = 0; y < extent_y; ++y) 
	{
		for (u32 x = 0; x < extent_x; ++x) 
		{
			dst.pixels[(start_y + y) * dst.width + (start_x + x)] = fill_color;
		}
	}
}

void 
rgt_flip_image_vertically(rgt_image flip)
{
	for (u32 y = 0; y < flip.height / 2; ++y)
	{
		for (u32 x = 0; x < flip.width; ++x)
		{
			u32 flip_y = flip.height - 1 - y;
			rgt_color top = flip.pixels[y * flip.width + x];
			rgt_color bottom = flip.pixels[flip_y * flip.width + x];

			flip.pixels[y * flip.width + x] = bottom;
			flip.pixels[flip_y * flip.width + x] = top;
		}
	}
}

void
rgt_rgba_to_bgra(rgt_image convert)
{
	for (u32 y = 0; y < convert.height; ++y)
	{
		for (u32 x = 0; x < convert.width; ++x)
		{
			rgt_color rgba = convert.pixels[y * convert.width + x];
			rgt_color bgra = { rgba.b, rgba.g, rgba.r, rgba.a };
			convert.pixels[y * convert.width + x] = bgra;
		}
	}
}

rgt_result
rgt_get_image_color_palette
(
	rgt_arena *arena, rgt_image image, u64 min_colors, rgt_color_array *create
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_color_array colors = {0};

	RGT_CREATE_ARRAY(arena, min_colors, &colors);
	colors.length = 1;

	for (u64 i = 0; i < image.width * image.height; ++i)
	{
		bool found_color = false;
		for (u64 j = 0; j < colors.length; ++j)
		{
			if (image.pixels[i].rgba == colors.elems[j].rgba)
			{
				found_color = true;
				break;
			}
		}
		if (!found_color)
		{
			RGT_APPEND_ARRAY(arena, &image.pixels[i], &colors);
		}
	}

	while (colors.length < min_colors)
	{
		rgt_color padding_color = (rgt_color){ .rgba = 0xFFFFFFFF };
		RGT_APPEND_ARRAY(arena, &padding_color, &colors);
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*create = colors;
	}

	return result;
}

rgt_result
rgt_get_image_palette_indexes
(
	rgt_arena *arena, rgt_image image, rgt_color_array colors, 
	rgt_u8_array *create
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_u8_array indices = {0};

	if (colors.length == 16)
	{
		RGT_CREATE_ARRAY(arena, image.width * image.height / 2, &indices);
	}
	else if (colors.length == 256)
	{
		RGT_CREATE_ARRAY(arena, image.width * image.height, &indices);
	}
	else
	{
		RGT_THROW(RGT_IMAGE_UNSUPPORTED_COLOR_COUNT_ERROR);
	}

	for (u64 i = 0; i < image.width * image.height; ++i)
	{
		u64 index = 0;
		for (index = 0; index < colors.length; ++index)
		{
			if (image.pixels[i].rgba == colors.elems[index].rgba)
			{
				break;
			}
		}
		if (index == colors.length)
		{
			RGT_THROW(RGT_IMAGE_PALETTE_COLOR_NOT_FOUND_ERROR);
		}
		if (colors.length == 16)
		{
			indices.elems[i / 2] |= (i % 2 == 0)
				? (u8)index
				: ((u8)index) << 4;
		}
		else
		{
			indices.elems[i] = (u8)index;
		}
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*create = indices;
	}

	return result;
}

void
rgt_comform_to_palette(rgt_image image, rgt_color_array palette)
{
	rgt_result result = RGT_SUCCESS;

	for (u64 i = 0; i < image.width * image.height; ++i)
	{
		if (image.pixels[i].a == 0)
		{
			image.pixels[i].rgba = 0;
		}

		double shortest_distance = INFINITY;
		u64 best_index = 0;
		for (u64 j = 0; j < palette.length; ++j)
		{
			rgt_color img = image.pixels[i];
			rgt_color pal = palette.elems[j];

			double distance =
				pow(pal.r - img.r, 2)
				+ pow(pal.g - img.g, 2)
				+ pow(pal.b - img.b, 2)
				+ pow(pal.a - img.a, 2);
			if (distance < shortest_distance)
			{
				shortest_distance = distance;
				best_index = j;
				if (shortest_distance == 0)
				{
					break;
				}
			}
		}
		image.pixels[i] = palette.elems[best_index];
	}
}
