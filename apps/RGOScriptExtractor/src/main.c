#include "ryouou_gakuen_toolkit.h"

#define CPK_PATH "assets/sc.cpk"
#define FONT_STRINGS_PATH "resources/rgo_font_strings.txt"
#define SCRIPT_ID 0
#define OUT_PATH_STRUCTURE "results/script_0_structure.h"
#define OUT_PATH_COMMANDS "results/script_0_commands.h"
#define OUT_PATH_TEXT "results/script_0_text.h"

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

	RGT_CALL(rgt_create_arena(RGT_MEGABYTE(64), &arena));

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
	RGT_CALL(rgt_get_cpk_file(script_cpk, SCRIPT_ID, &script_cpk_file));
	RGT_CALL(rgt_parse_rgo_script(&arena, script_cpk_file, &script));

	RGT_CALL
	(
		rgt_rgo_script_to_headers
		(
			&arena, script, SCRIPT_ID, font_strings_utf8,
			OUT_PATH_STRUCTURE, OUT_PATH_COMMANDS, OUT_PATH_TEXT
		)
	);

finish:

	rgt_destroy_arena(&arena);

	return result;
}