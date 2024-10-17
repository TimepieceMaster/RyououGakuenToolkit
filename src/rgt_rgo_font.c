#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

#include "ryouou_gakuen_toolkit.h"

#define GLYPH_WIDTH 18
#define GLYPH_HEIGHT 18
#define GLYPH_BYTES_PER_ROW 5
#define GLYPH_BITS_PER_PIXEL 2
#define GLYPH_PIXELS_PER_BYTE 4
#define BYTES_PER_GLYPH 92
#define PADDING_BYTES_PER_GLYPH 2
#define COMPOSITE_FILL ((rgt_color){ .rgba = 0xFFFF00FF})
#define FILE_ALIGNMENT 2048

#define GLYPH_NEWLINE 0xFFFE
#define GLYPH_PROTAGONIST_FIRST_NAME 0xFFE7
#define GLYPH_PROTAGONIST_LAST_NAME 0xFFE6

static void 
s_glyph_to_image(const uint8_t *glyph_data, rgt_image *populate)
{
	const u32 COLOR_TABLE[] =
	{ 0xFF000000, 0xFF555555, 0xFFAAAAAA, 0xFFFFFFFF };

	for (u32 y = 0; y < GLYPH_HEIGHT; ++y) 
	{
		for (u32 x = 0; x < GLYPH_WIDTH; ++x) 
		{
			u32 byte = (y * GLYPH_BYTES_PER_ROW) + (x / GLYPH_PIXELS_PER_BYTE);
			u32 bit = (x % 4) * GLYPH_BITS_PER_PIXEL;
			u32 val = COLOR_TABLE[(glyph_data[byte] >> bit) & 0x3];
			populate->pixels[y * GLYPH_WIDTH + x].rgba = val;
		}
	}
}

static rgt_result
s_add_glyph_image(rgt_arena *arena, u8 *glyph_data, rgt_image_array *add)
{
	rgt_result result = RGT_SUCCESS;
	rgt_image glyph_image = {0};

	RGT_CALL(rgt_create_image(arena, GLYPH_WIDTH, GLYPH_HEIGHT, &glyph_image));
	s_glyph_to_image(glyph_data, &glyph_image);
	RGT_APPEND_ARRAY(arena, &glyph_image, add);

finish:
	return result;
}

static bool 
s_is_glyph_blank(const u8 *glyph_data)
{
	for (u32 i = 0; i < BYTES_PER_GLYPH - PADDING_BYTES_PER_GLYPH; ++i)
	{
		if (glyph_data[i] != 0)
		{
			return false;
		}
	}
	return true;
}

rgt_result 
rgt_font_to_glyph_images
(
	rgt_arena *arena, rgt_u8_array font_data, 
	rgt_blank_glyph_policy blank_policy, rgt_image_array *create
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_image_array images = {0};

	u64 font_size_no_checksum = font_data.length - RGT_CHECKSUM_SIZE;

	const u64 bpg = BYTES_PER_GLYPH;
	switch(blank_policy) {
	case RGT_KEEP_ALL_BLANK_GLYPHS:
		for (u64 i = 0; i + bpg - 1 < font_size_no_checksum; i += bpg)
		{
			u8 *glyph_data = &font_data.elems[i];
			RGT_CALL(s_add_glyph_image(arena, glyph_data, &images));
		}
		break;
	case RGT_KEEP_FIRST_BLANK_GLYPH:
	{
		bool glyph_is_blank = false, blank_found = false;
		for (u64 i = 0; i + bpg - 1 < font_size_no_checksum; i += bpg) 
		{
			glyph_is_blank = s_is_glyph_blank(&font_data.elems[i]);
			if (!glyph_is_blank || !blank_found) 
			{
				blank_found = blank_found || glyph_is_blank;
				u8 *glyph_data = &font_data.elems[i];
				RGT_CALL(s_add_glyph_image(arena, glyph_data, &images));
			}
		}
		break;
	}
	case RGT_KEEP_NO_BLANK_GLYPHS:
		for (u64 i = 0; i + bpg - 1 < font_size_no_checksum; i += bpg) 
		{
			if (!s_is_glyph_blank(&font_data.elems[i])) 
			{
				u8 *glyph_data = &font_data.elems[i];
				RGT_CALL(s_add_glyph_image(arena, glyph_data, &images));
			}
		}
		break;
	}

finish:

	if (result == RGT_SUCCESS) 
	{
		*create = images;
	}

	return result;
}

static bool 
s_is_composite_region_used(rgt_image composite, u32 start_x, u32 start_y)
{
	for (u32 y = start_y; y < start_y + GLYPH_HEIGHT; ++y) 
	{
		for (u32 x = start_x; x < start_x + GLYPH_WIDTH; ++x) 
		{
			u32 pixel_color = composite.pixels[y * composite.width + x].rgba;
			if (pixel_color != COMPOSITE_FILL.rgba)
			{
				return true;
			}
		}
	}
	return false;
}

rgt_result 
rgt_composite_to_glyph_images
(
	rgt_arena *arena, rgt_image composite, rgt_image_array *create
)
{
	const u32 gh = GLYPH_HEIGHT;
	const u32 gw = GLYPH_WIDTH;

	rgt_image_array glyphs = {0};
	rgt_result result = RGT_SUCCESS;

	for (u32 y = 0; y + gh - 1 < composite.height; y += gh)
	{
		for (u32 x = 0; x + gw - 1 < composite.width; x += gw) 
		{
			if (!s_is_composite_region_used(composite, x, y))
			{
				continue;
			}

			rgt_image next_image = {0};
			RGT_CALL(rgt_create_image(arena, gw, gh, &next_image));
			rgt_copy_image_region(composite, next_image, x, y, 0, 0, gw, gh);
			RGT_APPEND_ARRAY(arena, &next_image, &glyphs);
		}
	}

finish:

	if (result == RGT_SUCCESS) 
	{
		*create = glyphs;
	}

	return result;
}

rgt_result
rgt_glyph_images_to_composite
(
	rgt_arena *arena, rgt_image_array glyph_images, 
	u32 glyphs_per_row, rgt_image *create
)
{
	rgt_image img = {0};
	rgt_result result = RGT_SUCCESS;

	if (glyphs_per_row == 0)
	{
		glyphs_per_row = (u32)sqrt((double)glyph_images.length);
	}
	
	u32 rows = ((u32)glyph_images.length + glyphs_per_row - 1) / glyphs_per_row;
	RGT_CALL
	(
		rgt_create_image
		(
			arena, GLYPH_WIDTH * glyphs_per_row, GLYPH_HEIGHT * rows, &img
		)
	);

	u32 x = 0;
	u32 y = 0;
	u32 gw = GLYPH_WIDTH;
	u32 gh = GLYPH_HEIGHT;
	for (u64 i = 0; i < glyph_images.length; ++i) 
	{
		rgt_copy_image_region(glyph_images.elems[i], img, 0, 0, x, y, gw, gh);
		x += gw;
		if (x >= img.width) 
		{
			x = 0;
			y += gh;
		}
	}
	if (x != 0) 
	{
		rgt_fill_image_region(img, x, y, img.width - x, gh, COMPOSITE_FILL);
	}

finish:

	if (result == RGT_SUCCESS) 
	{
		*create = img;
	}

	return result;
}

static void
s_image_to_font_data(rgt_image glyph, u8 *out)
{
	memset(out, 0, BYTES_PER_GLYPH);

	for (u32 y = 0; y < GLYPH_HEIGHT; ++y) 
	{
		for (u32 x = 0; x < GLYPH_WIDTH; ++x) 
		{
			u32 color = glyph.pixels[y * GLYPH_WIDTH + x].rgba;
			u32 val = (color == COMPOSITE_FILL.rgba)
				? 0
				: ((color & 0xFFFFFF) / 0x555555);
			u32 byte = (y * GLYPH_BYTES_PER_ROW) + (x / GLYPH_PIXELS_PER_BYTE);
			u32 bit = (x % GLYPH_PIXELS_PER_BYTE) * GLYPH_BITS_PER_PIXEL;
			out[byte] |= val << bit;
		}
	}
}

rgt_result 
rgt_glyph_images_to_font
(
	rgt_arena *arena, rgt_image_array glyph_images, rgt_u8_array *create
)
{
	rgt_u8_array font_data = {0};
	rgt_result result = RGT_SUCCESS;
	u64 bpg = BYTES_PER_GLYPH;

	font_data.length = (glyph_images.length * bpg) + RGT_CHECKSUM_SIZE;
	font_data.length = rgt_align(font_data.length, FILE_ALIGNMENT);
    RGT_CREATE_ARRAY(arena, font_data.length, &font_data);

	for (u64 i = 0; i < glyph_images.length; ++i)
	{
		s_image_to_font_data(glyph_images.elems[i], &font_data.elems[i * bpg]);
	}

	rgt_add_checksum_whole_file(font_data);

finish:

	if (result == RGT_SUCCESS) 
	{
		*create = font_data;
	}

	return result;
}

rgt_result
rgt_utf8_to_glyph_indices
(
	rgt_arena *arena, rgt_utf8_string utf8, 
	rgt_utf8_string_array glyph_strings, rgt_u16_array *out
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_u16_array indices = {0};

	for (u64 i = 0; i < utf8.length; ++i)
	{
		if (i != utf8.length - 1 && utf8.elems[i].elems[0] == '/')
		{
			bool escape_code_found = true;

			switch(utf8.elems[i + 1].elems[0])
			{
			case 'n':
			{
				++i;
				u16 newline = GLYPH_NEWLINE;
				RGT_APPEND_ARRAY(arena, &newline, &indices);
				break;
			}
			case 'f':
			{
				++i;
				u16 first_name = GLYPH_PROTAGONIST_FIRST_NAME;
				RGT_APPEND_ARRAY(arena, &first_name, &indices);
				break;
			}
			case 'l':
			{
				++i;
				u16 last_name = GLYPH_PROTAGONIST_LAST_NAME;
				RGT_APPEND_ARRAY(arena, &last_name, &indices);
				break;
			}
			case '/':
			{
				/* ignore first / and treat second / as a normal character */
				++i;
				escape_code_found = false;
				break;
			}
			default:
				escape_code_found = false;
				break;
			}

			if (escape_code_found)
			{
				continue;
			}
		}

		for (u64 j = 0; j < glyph_strings.length; ++j)
		{
			if 
			(
				rgt_utf8_char_equals
				(
					utf8.elems[i], glyph_strings.elems[j].elems[0]
				)
			)
			{
				RGT_APPEND_ARRAY(arena, &j, &indices);
				break;
			}
		}
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*out = indices;
	}

	return result;
}

rgt_result
rgt_glyph_indices_to_utf8
(
	rgt_arena *arena, rgt_u16_array glyph_indices,
	rgt_utf8_string_array glyph_strings, rgt_utf8_string *out
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_utf8_string utf8 = {0};

	for (u64 i = 0; i < glyph_indices.length; ++i)
	{
		rgt_utf8_char character = {0};
		character.length = 1;

		switch(glyph_indices.elems[i])
		{
		case GLYPH_NEWLINE:
			character.elems[0] = '/';
			RGT_APPEND_ARRAY(arena, &character, &utf8);
			character.elems[0] = 'n';
			RGT_APPEND_ARRAY(arena, &character, &utf8);
			break;
		case GLYPH_PROTAGONIST_FIRST_NAME:
			character.elems[0] = '/';
			RGT_APPEND_ARRAY(arena, &character, &utf8);
			character.elems[0] = 'f';
			RGT_APPEND_ARRAY(arena, &character, &utf8);
			break;
		case GLYPH_PROTAGONIST_LAST_NAME:
			character.elems[0] = '/';
			RGT_APPEND_ARRAY(arena, &character, &utf8);
			character.elems[0] = 'l';
			RGT_APPEND_ARRAY(arena, &character, &utf8);
			break;
		default:
		{
			RGT_ASSERT
			(
				glyph_indices.elems[i] < glyph_strings.length, RGT_OUT_OF_BOUNDS_ERROR
			);
			rgt_utf8_string string = glyph_strings.elems[glyph_indices.elems[i]];

			for (u64 j = 0; j < string.length; ++j)
			{
				RGT_APPEND_ARRAY(arena, &string.elems[j], &utf8);
			}
		}
		break;
		}
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*out = utf8;
	}

	return result;
}

u32
rgt_get_glyph_width(rgt_image glyph_image)
{
	u32 width = 0;
	for (u32 y = 0; y < glyph_image.height; ++y)
	{
		for (u32 x = width; x < glyph_image.width; ++x)
		{
			rgt_color col = glyph_image.pixels[y * glyph_image.width + x];
			if ((col.rgba & 0xFFFFFF) != 0x0)
			{
				width = x + 1;
			}
		}
	}
	return width;
}
