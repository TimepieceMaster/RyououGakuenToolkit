#include "ryouou_gakuen_toolkit.h"

#define BASE_GLYPHS_STRINGS_PATH "resources/english_base_glyphs_strings.txt"
#define BASE_GLYPHS_IMAGE_PATH "resources/english_base_glyphs.png"
#define MULTI_GLYPHS_STRINGS_PATH "resources/english_multi_glyph_strings.txt"
#define OUT_PATH_FONT "results/english_lt.bin"
#define OUT_PATH_COMPOSITE "results/english_lt.png"

#define GLYPH_SIZE 92
#define GLYPH_WIDTH_OFFSET 90

rgt_result
glyphs_file_to_utf8_strings
(
	rgt_arena* arena, const char *path, rgt_utf8_string_array *create
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_utf8_string_array utf8 = {0};
	rgt_u8_array file = {0};
	rgt_string_array strings = {0};

	RGT_CALL(rgt_load_file(arena, path, &file));
	RGT_CALL(rgt_text_to_lines(arena, file, &strings));
	RGT_CREATE_ARRAY(arena, strings.length, &utf8);
	for (u64 i = 0; i < strings.length; ++i)
	{
		u64 pos = 0;
		rgt_u8_array str = strings.elems[i];
		RGT_CALL(rgt_read_utf8_string(arena, str, &pos, &utf8.elems[i]));
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*create = utf8;
	}

	return result;
}

int
main(void)
{
	rgt_result result = RGT_SUCCESS;
	rgt_arena arena = {0};

	rgt_image base_glyph_composite = {0};
	rgt_image_array base_glyphs = {0};
	rgt_u32_array base_glyph_widths = {0};
	rgt_utf8_string_array base_glyph_strings = {0};
	rgt_utf8_string_array multi_glyph_strings = {0};
	rgt_image_array multi_glyphs = {0};
	rgt_u32_array multi_glyph_widths = {0};
	rgt_image_array all_glyphs = {0};
	rgt_image all_glyphs_composite = {0};
	rgt_u8_array all_glyphs_font = {0};

	RGT_CALL(rgt_create_arena(RGT_MEGABYTE(128), &arena));

	RGT_CALL
	(
		rgt_load_png(&arena, BASE_GLYPHS_IMAGE_PATH, &base_glyph_composite)
	);
	RGT_CALL
	(
		rgt_composite_to_glyph_images
		(
			&arena, base_glyph_composite, &base_glyphs
		)
	);
	RGT_CREATE_ARRAY(&arena, base_glyphs.length, &base_glyph_widths);
	for (u64 i = 0; i < base_glyphs.length; ++i)
	{
		base_glyph_widths.elems[i] = 
			rgt_get_glyph_width(base_glyphs.elems[i]) + 1;
		if (base_glyph_widths.elems[i] == 1)
		{
			++base_glyph_widths.elems[i];
		}
	}

	RGT_CALL
	(
		glyphs_file_to_utf8_strings
		(
			&arena, BASE_GLYPHS_STRINGS_PATH, &base_glyph_strings
		)
	);
	RGT_CALL
	(
		glyphs_file_to_utf8_strings
		(
			&arena, MULTI_GLYPHS_STRINGS_PATH, &multi_glyph_strings
		)
	);

	RGT_CREATE_ARRAY(&arena, multi_glyph_strings.length, &multi_glyphs);
	RGT_CREATE_ARRAY(&arena, multi_glyphs.length, &multi_glyph_widths);
	for (u64 i = 0; i < multi_glyphs.length; ++i)
	{
		RGT_CALL
		(
			rgt_create_multi_glyph_image
			(
				&arena, base_glyphs, base_glyph_strings, base_glyph_widths, 
				multi_glyph_strings.elems[i], &multi_glyph_widths.elems[i],
				&multi_glyphs.elems[i]
			)
		);
	}

	RGT_CREATE_ARRAY
	(
		&arena, base_glyphs.length + multi_glyphs.length, &all_glyphs
	);
	for (u64 i = 0; i < base_glyphs.length; ++i)
	{
		all_glyphs.elems[i] = base_glyphs.elems[i];
	}
	for (u64 i = 0; i < multi_glyphs.length; ++i)
	{
		all_glyphs.elems[base_glyphs.length + i] = multi_glyphs.elems[i];
	}
	RGT_CALL
	(
		rgt_glyph_images_to_composite
		(
			&arena, all_glyphs, 0, &all_glyphs_composite
		)
	);
	RGT_CALL(rgt_glyph_images_to_font(&arena, all_glyphs, &all_glyphs_font));
	for (u64 i = 0; i < base_glyph_widths.length; ++i)
	{
		u16 width = (u16)base_glyph_widths.elems[i];
		u64 off = i * GLYPH_SIZE + GLYPH_WIDTH_OFFSET;
		memcpy(&all_glyphs_font.elems[off], &width, 2);
	}
	for (u64 i = 0; i < multi_glyph_widths.length; ++i)
	{
		u16 width = (u16)multi_glyph_widths.elems[i];
		u64 off = (base_glyphs.length + i) * GLYPH_SIZE + GLYPH_WIDTH_OFFSET;
		memcpy(&all_glyphs_font.elems[off], &width, 2);
	}

	RGT_CALL(rgt_save_file(all_glyphs_font, OUT_PATH_FONT));
	RGT_CALL(rgt_save_png(&arena, all_glyphs_composite, 6, OUT_PATH_COMPOSITE));

finish:

	rgt_destroy_arena(&arena);

	return result;
}