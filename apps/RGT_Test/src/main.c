#define _CRT_SECURE_NO_WARNINGS
#include "ryouou_gakuen_toolkit.h"
#include "../assets/script/script_0_structure.h"
#include <stdio.h>

rgt_result
load_save_file_test(void)
{
	rgt_result result = RGT_SUCCESS;
	rgt_arena arena = {0};
	rgt_u8_array file = {0};

	RGT_CALL(rgt_create_arena(RGT_MEGABYTE(16), &arena));
	RGT_CALL
	(
		rgt_load_file(&arena, "assets\\load_save_file\\input.txt", &file)
	);
	RGT_CALL(rgt_save_file(file, "assets\\load_save_file\\output.txt"));

finish:

	rgt_destroy_arena(&arena);

	return result;
}

rgt_result
load_save_png_test(void)
{
	rgt_result result = RGT_SUCCESS;
	rgt_arena arena = {0};
	rgt_image image = {0};

	RGT_CALL(rgt_create_arena(RGT_MEGABYTE(16), &arena));
	RGT_CALL(rgt_load_png(&arena, "assets\\load_save_png\\input.png", &image));
	RGT_CALL
	(
		rgt_save_png(&arena, image, 6, "assets\\load_save_png\\output.png")
	);

finish:

	rgt_destroy_arena(&arena);
	
	return result;
}

rgt_result
rgo_font_to_composite_test(void)
{
	rgt_result result = RGT_SUCCESS;
	rgt_arena arena_font = {0};
	rgt_arena arena_glyphs = {0};
	rgt_u8_array font_data = {0};

	#define PATH_BASE "assets\\rgo_font\\to_composite\\"

	rgt_blank_glyph_policy policies[] =
	{
		RGT_KEEP_ALL_BLANK_GLYPHS,
		RGT_KEEP_FIRST_BLANK_GLYPH,
		RGT_KEEP_NO_BLANK_GLYPHS,
	};
	const char *out_paths[] =
	{
		PATH_BASE "output_composite_all_blanks.png",
		PATH_BASE "output_composite_first_blank.png",
		PATH_BASE "output_composite_no_blanks.png"
	};
	u32 glyphs_per_row[3] = { 30, 50, 0 };

	RGT_CALL(rgt_create_arena(RGT_MEGABYTE(1), &arena_font));
	RGT_CALL(rgt_create_arena(RGT_MEGABYTE(16), &arena_glyphs));

	RGT_CALL(rgt_load_file(&arena_font, PATH_BASE "input.bin", &font_data));
	for (u64 i = 0; i < 3; ++i)
	{
		rgt_image_array glyphs = {0};
		rgt_image composite = {0};
		RGT_CALL
		(
			rgt_font_to_glyph_images
			(
				&arena_glyphs, font_data, policies[i], &glyphs
			)
		);
		RGT_CALL
		(
			rgt_glyph_images_to_composite
			(
				&arena_glyphs, glyphs, glyphs_per_row[i], &composite
			);
		);
		RGT_CALL(rgt_save_png(&arena_glyphs, composite, 6, out_paths[i]));
		rgt_reset_arena(&arena_glyphs);
	}

finish:

	#undef PATH_BASE

	rgt_destroy_arena(&arena_font);
	rgt_destroy_arena(&arena_glyphs);

	return result;
}

rgt_result
rgo_font_from_composite_test(void)
{
	rgt_result result = RGT_SUCCESS;
	rgt_arena arena = {0};
	rgt_image composite = {0};
	rgt_image_array glyph_images = {0};
	rgt_u8_array font = {0};

	#define PATH_BASE "assets\\rgo_font\\from_composite\\"

	RGT_CALL(rgt_create_arena(RGT_MEGABYTE(16), &arena));
	RGT_CALL(rgt_load_png(&arena, PATH_BASE "input.png", &composite));
	RGT_CALL(rgt_composite_to_glyph_images(&arena, composite, &glyph_images));
	RGT_CALL(rgt_glyph_images_to_font(&arena, glyph_images, &font));
	RGT_CALL(rgt_save_file(font, PATH_BASE "output.bin"));

finish:

	#undef PATH_BASE

	rgt_destroy_arena(&arena);

	return result;
}

rgt_result
cpk_test(void)
{
	#define PATH_BASE "assets\\cpk\\"

	rgt_result result = RGT_SUCCESS;
	rgt_arena arena = {0};
	rgt_u8_array cpk_data = {0};
	rgt_cpk cpk = {0};
	rgt_u8_array added_file = {0};
	rgt_u8_array new_cpk_data = {0};

	RGT_CALL(rgt_create_arena(RGT_GIGABYTE(1), &arena));
	RGT_CALL(rgt_load_file(&arena, PATH_BASE "input.cpk", &cpk_data));
	RGT_CALL(rgt_parse_cpk(&arena, cpk_data, &cpk));

	RGT_CALL(rgt_get_cpk_file(cpk, 824, &added_file));
	RGT_CALL(rgt_remove_cpk_file(&arena, &cpk, 824));
	RGT_CALL(rgt_add_cpk_file(&arena, &cpk, 824, added_file));

	RGT_CALL(rgt_build_cpk(&arena, cpk, &new_cpk_data));
	RGT_CALL(rgt_save_file(new_cpk_data, PATH_BASE "output.cpk"));

finish:

	#undef PATH_BASE

	rgt_destroy_arena(&arena);

	return result;
}

rgt_result
rgo_image_extract_test(void)
{
	#define PATH_BASE "assets\\rgo_image\\extract\\"

	rgt_result result = RGT_SUCCESS;
	rgt_arena arena = {0};
	rgt_u8_array rgo_image_file = {0};
	rgt_rgo_image_array rgo_images = {0};
	rgt_image image = {0};
	char filename[1024] = {0};
	u32 image_widths[] = 
	{ 
		512, 256, 512, 512, 
		256, 512, 512, 512,
		512, 512, 512, 512,
		512, 512, 512, 512,
		512, 512
	};

	RGT_CALL(rgt_create_arena(RGT_MEGABYTE(16), &arena));
	RGT_CALL(rgt_load_file(&arena, PATH_BASE "input.bin", &rgo_image_file));
	RGT_CALL(rgt_parse_rgo_image_file(&arena, rgo_image_file, &rgo_images));

	for (u64 i = 0; i < rgo_images.length; ++i)
	{
		sprintf(filename, "%soutput_%llu.png", PATH_BASE, i);

		RGT_CALL
		(
			rgt_rgo_image_to_image
			(
				&arena, rgo_images.elems[i], image_widths[i], 
				true, true, &image
			)
		);
		RGT_CALL(rgt_save_png(&arena, image, 6, filename));
	}

finish:

	#undef PATH_BASE

	rgt_destroy_arena(&arena);

	return result;
}

rgt_result
rgo_image_build_test(void)
{
	#define PATH_BASE "assets\\rgo_image\\build\\"

	rgt_result result = RGT_SUCCESS;
	rgt_arena arena = {0};
	rgt_u8_array image_file = {0};
	rgt_rgo_image_array images = {0};
	rgt_u8_array new_file = {0};

	const char *in_filenames[] = 
	{ 
		PATH_BASE "824",
		PATH_BASE "1806",
		PATH_BASE "2533"
	};

	const char *out_filenames[] = 
	{ 
		PATH_BASE "824_out",
		PATH_BASE "1806_out",
		PATH_BASE "2533_out"
	};

	RGT_CALL(rgt_create_arena(RGT_MEGABYTE(16), &arena));

	for (u64 i = 0; i < 3; ++i)
	{
		RGT_CALL(rgt_load_file(&arena, in_filenames[i], &image_file));
		RGT_CALL(rgt_parse_rgo_image_file(&arena, image_file, &images));
		RGT_CALL(rgt_build_rgo_image_file(&arena, images, &new_file));
		RGT_CALL(rgt_save_file(new_file, out_filenames[i]));
		rgt_reset_arena(&arena);
	}

finish:

	#undef PATH_BASE

	rgt_destroy_arena(&arena);

	return result;
}

rgt_result
rgo_image_replace_test(void)
{
	rgt_result result = RGT_SUCCESS;
	rgt_arena arena = {0};

	rgt_u8_array rgo_image_file = {0};
	rgt_rgo_image_array rgo_images = {0};
	rgt_image image = {0};
	rgt_u8_array new_image_file = {0};

	#define PATH_BASE "assets\\rgo_image\\replace\\"

	const char *filenames[] =
	{
		PATH_BASE "824",
		PATH_BASE "1806",
		PATH_BASE "2533"
	};
	u32 image_widths[] =
	{ 
		512, 256, 512, 512, 
		256, 512, 512, 512,
		512, 512, 512, 512,
		512, 512, 512, 512,
		512, 512
	};

	RGT_CALL(rgt_create_arena(RGT_MEGABYTE(32), &arena));

	for (u64 i = 0; i < 3; ++i)
	{
		RGT_CALL(rgt_load_file(&arena, filenames[i], &rgo_image_file));
		RGT_CALL
		(
			rgt_parse_rgo_image_file(&arena, rgo_image_file, &rgo_images)
		);
		for (u64 j = 0; j < rgo_images.length; ++j)
		{
			char image_path[1024] = {0};
			sprintf(image_path, "%s_%llu.png", filenames[i], j);
			RGT_CALL(rgt_load_png(&arena, image_path, &image));
			RGT_CALL(rgt_replace_rgo_image(&arena, &rgo_images, j, false, image));
		}
		RGT_CALL(rgt_build_rgo_image_file(&arena, rgo_images, &new_image_file));

		char file_path[1024] = {0};
		sprintf(file_path, "%s_out", filenames[i]);
		RGT_CALL(rgt_save_file(new_image_file, file_path));

		rgt_reset_arena(&arena);

		RGT_CALL(rgt_load_file(&arena, file_path, &rgo_image_file));
		RGT_CALL
		(
			rgt_parse_rgo_image_file(&arena, rgo_image_file, &rgo_images)
		);
		for (u64 j = 0; j < rgo_images.length; ++j)
		{
			RGT_CALL
			(
				rgt_rgo_image_to_image
				(
					&arena, rgo_images.elems[j], 
					image_widths[j], true, true, &image
				)
			);
			char image_path[1024] = {0};
			sprintf(image_path, "%s_%llu_out.png", filenames[i], j);
			RGT_CALL(rgt_save_png(&arena, image, 6, image_path));
		}

		rgt_reset_arena(&arena);
	}

finish:

	#undef PATH_BASE

	rgt_destroy_arena(&arena);

	return result;
}

rgt_result
header_to_script_test(void)
{
	rgt_result result = RGT_SUCCESS;
	rgt_arena arena = {0};

	rgt_u8_array font_strings_file = {0};
	rgt_string_array font_strings = {0};
	rgt_utf8_string_array font_strings_utf8 = {0};
	rgt_rgo_script script = {0};
	rgt_u8_array script_file = {0};

	RGT_CALL(rgt_create_arena(RGT_MEGABYTE(128), &arena));

	RGT_CALL
	(
		rgt_load_file
		(
			&arena, "assets/script/rgoFontStrings.txt", &font_strings_file
		)
	);

	RGT_CALL(rgt_text_to_lines(&arena, font_strings_file, &font_strings));
	RGT_CREATE_ARRAY(&arena, font_strings.length, &font_strings_utf8);
	for (u64 i = 0; i < font_strings.length; ++i)
	{
		u64 pos = 0;
		RGT_CALL
		(
			rgt_read_utf8_string
			(
				&arena, font_strings.elems[i],
				&pos, &font_strings_utf8.elems[i]
			)
		);
	}

	RGT_CALL
	(
		rgt_rgo_script_elements_to_script
		(
			&arena, g_script_0_elements, font_strings_utf8, &script
		)
	);

	RGT_CALL(rgt_build_rgo_script(&arena, script, &script_file));
	RGT_CALL(rgt_save_file(script_file, "assets/script/script2.bin"));

finish:

	rgt_destroy_arena(&arena);

	return result;
}

int 
main(void)
{
	rgt_result result = RGT_SUCCESS;

	RGT_CALL(load_save_file_test());
	RGT_CALL(load_save_png_test());
	RGT_CALL(rgo_font_to_composite_test());
	RGT_CALL(rgo_font_from_composite_test());
	RGT_CALL(cpk_test());
	RGT_CALL(rgo_image_extract_test());
	RGT_CALL(rgo_image_build_test());
	RGT_CALL(rgo_image_replace_test());
	RGT_CALL(header_to_script_test());

finish:

	return result;
}
