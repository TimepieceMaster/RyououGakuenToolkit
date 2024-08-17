#ifndef RGT_RGO_FONT_H
#define RGT_RGO_FONT_H

#include "rgt_result.h"
#include "rgt_array.h"
#include "rgt_image.h"
#include "rgt_sized_int.h"
#include "rgt_string.h"
#include "rgt_utf8.h"

typedef enum _rgt_blank_glyph_policy
{
	RGT_KEEP_ALL_BLANK_GLYPHS,
	RGT_KEEP_FIRST_BLANK_GLYPH,
	RGT_KEEP_NO_BLANK_GLYPHS,
	RGT_MAX_BLANK_GLYPH_POLICY
} rgt_blank_glyph_policy;

rgt_result 
rgt_font_to_glyph_images
(
	rgt_arena *arena, rgt_u8_array font_data, 
	rgt_blank_glyph_policy blank_policy, rgt_image_array *create
);

rgt_result 
rgt_composite_to_glyph_images
(
	rgt_arena *arena, rgt_image composite, rgt_image_array *create
);

rgt_result
rgt_glyph_images_to_composite
(
	rgt_arena *arena, rgt_image_array glyph_images, 
	u32 glyphs_per_row, rgt_image *create
);

rgt_result 
rgt_glyph_images_to_font
(
	rgt_arena *arena, rgt_image_array glyph_images, rgt_u8_array *create
);

rgt_result
rgt_utf8_to_glyph_indices
(
	rgt_arena *arena, rgt_utf8_string utf8, 
	rgt_utf8_string_array glyph_strings, rgt_u16_array *out
);

u32
rgt_get_glyph_width(rgt_image glyph_image);

#endif