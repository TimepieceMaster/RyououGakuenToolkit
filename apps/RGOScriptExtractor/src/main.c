#define _CRT_SECURE_NO_WARNINGS
#include "ryouou_gakuen_toolkit.h"

#define JUMP_TABLE_OFFSET SCRIPT_JUMP_TABLE_OFFSET_NIM
#define CPK_PATH "assets/sc_nim.cpk"
#define FONT_STRINGS_PATH "resources/nim_font_strings.txt"
#define SCRIPT_FIRST 1
#define SCRIPT_LAST 594
#define OUT_PATH "results/nim"
#define NO_TEXT true

int 
main(void)
{
	rgt_result result = RGT_SUCCESS;
	rgt_arena arena = {0};

	rgt_u8_array font_strings_file = {0};
	rgt_string_array font_strings = {0};
	rgt_utf8_string_array font_strings_utf8 = {0};

	rgt_u8_array script_cpk_file = {0};
	rgt_cpk script_cpk = {0};
	rgt_u8_array script_file = {0};
	rgt_rgo_script script = {0};
	rgt_u8_array new_script = {0};

	RGT_CALL(rgt_create_arena(RGT_MEGABYTE(512), &arena));

	RGT_CALL(rgt_load_file(&arena, FONT_STRINGS_PATH, &font_strings_file));
	RGT_CALL(rgt_text_to_lines(&arena, font_strings_file, &font_strings));
	RGT_CREATE_ARRAY(&arena, font_strings.length, &font_strings_utf8);
	for (u64 i = 0; i < font_strings.length; ++i)
	{
		u64 pos = 0;
		RGT_CALL
		(
			rgt_read_utf8_string
			(
				&arena, font_strings.elems[i], &pos, 
				&font_strings_utf8.elems[i]
			)
		);
	}

	RGT_CALL(rgt_load_file(&arena, CPK_PATH, &script_cpk_file));
	RGT_CALL(rgt_parse_cpk(&arena, script_cpk_file, &script_cpk));

	for (u16 i = SCRIPT_FIRST; i <= SCRIPT_LAST; ++i)
	{
		RGT_CALL(rgt_get_cpk_file(script_cpk, i, &script_cpk_file));
		RGT_CALL(rgt_parse_rgo_script(&arena, script_cpk_file, JUMP_TABLE_OFFSET, &script));

		char structure_path[1024] = {0};
		char command_path[1024] = {0};
		char text_path[1024] = {0};

		sprintf(structure_path, "%s/script_%hu_structure.h", OUT_PATH, i);
		sprintf(command_path, "%s/script_%hu_commands.h", OUT_PATH, i);
		sprintf(text_path, "%s/script_%hu_text.h", OUT_PATH, i);

		RGT_CALL
		(
			rgt_rgo_script_to_headers
			(
				&arena, script, i, font_strings_utf8,
				structure_path, command_path, text_path, NO_TEXT
			)
		);
		printf("script_%hu\n", i);
	}

finish:

	rgt_destroy_arena(&arena);

	return result;
}