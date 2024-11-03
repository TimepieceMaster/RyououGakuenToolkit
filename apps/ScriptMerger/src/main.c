#include "ryouou_gakuen_toolkit.h"

#define CPK_FROM "assets/sc_epilogue_miyuki.cpk"
#define CPK_TO "assets/sc_reboot.cpk"
#define GLYPH_STRINGS_FROM "assets/font_strings_video_series.txt"
#define GLYPH_STRINGS_TO "assets/english_font_strings.txt"
#define STRUCTURE_OUT "results/script_1_structure.h"
#define COMMANDS_OUT "results/script_1_commands.h"
#define TEXT_OUT "results/script_1_text.h"
#define CPK_OUT "results/sc.cpk"
#define SCRIPT_ID 1

int
main(void)
{
	rgt_result result = RGT_SUCCESS;
	rgt_arena arena = {0};
	
	rgt_u8_array cpk_from_file = {0};
	rgt_u8_array cpk_to_file = {0};
	rgt_cpk cpk_from = {0};
	rgt_cpk cpk_to = {0};
	rgt_u8_array script_from_file = {0};
	rgt_u8_array script_to_file = {0};
	rgt_rgo_script script_from = {0};
	rgt_rgo_script script_to = {0};
	rgt_u8_array from_strings_file = {0};
	rgt_u8_array to_strings_file = {0};
	rgt_string_array from_strings = {0};
	rgt_string_array to_strings = {0};
	rgt_utf8_string_array from_strings_utf8 = {0};
	rgt_utf8_string_array to_strings_utf8 = {0};
	rgt_utf8_string null_string_utf8 = {0};

	RGT_CALL(rgt_create_arena(RGT_MEGABYTE(256), &arena));

	RGT_CALL(rgt_load_file(&arena, CPK_FROM, &cpk_from_file));
	RGT_CALL(rgt_load_file(&arena, CPK_TO, &cpk_to_file));
	RGT_CALL(rgt_parse_cpk(&arena, cpk_from_file, &cpk_from));
	RGT_CALL(rgt_parse_cpk(&arena, cpk_to_file, &cpk_to));
	RGT_CALL(rgt_get_cpk_file(cpk_from, SCRIPT_ID, &script_from_file));
	RGT_CALL(rgt_get_cpk_file(cpk_to, SCRIPT_ID, &script_to_file));
	RGT_CALL(rgt_parse_rgo_script(&arena, script_from_file, &script_from));
	RGT_CALL(rgt_parse_rgo_script(&arena, script_to_file, &script_to));
	RGT_CALL(rgt_load_file(&arena, GLYPH_STRINGS_FROM, &from_strings_file));
	RGT_CALL(rgt_load_file(&arena, GLYPH_STRINGS_TO, &to_strings_file));
	RGT_CALL(rgt_text_to_lines(&arena, from_strings_file, &from_strings));
	RGT_CALL(rgt_text_to_lines(&arena, to_strings_file, &to_strings));
	RGT_CREATE_ARRAY(&arena, from_strings.length, &from_strings_utf8);
	RGT_CREATE_ARRAY(&arena, to_strings.length, &to_strings_utf8);
	for (u64 i = 0; i < from_strings.length; ++i)
	{
		u64 pos = 0;
		RGT_CALL
		(
			rgt_read_utf8_string
			(
				&arena, from_strings.elems[i], &pos, &from_strings_utf8.elems[i]
			)
		);
	}
	for (u64 i = 0; i < to_strings.length; ++i)
	{
		u64 pos = 0;
		RGT_CALL
		(
			rgt_read_utf8_string
			(
				&arena, to_strings.elems[i], &pos, &to_strings_utf8.elems[i]
			)
		);
	}
	{
		rgt_u8_array null_string = 
			{.elems = u8"NULL", .length = 4, .capacity = 4 };
		u64 pos = 0;
		RGT_CALL
		(
			rgt_read_utf8_string(&arena, null_string, &pos, &null_string_utf8)
		);
	}
	
	if (script_from.dialogs.length != script_to.dialogs.length)
	{
		printf("Scripts do not have matching numbers of dialogs!\n");
		RGT_THROW(RGT_OUT_OF_BOUNDS_ERROR);
	}

	for (u64 i = 0; i < script_from.dialogs.length; ++i)
	{
		rgt_utf8_string from_message = {0};
		rgt_utf8_string to_message = {0};
		RGT_CALL
		(
			rgt_glyph_indices_to_utf8
			(
				&arena, script_from.dialogs.elems[i].message_glyph_indices,
				from_strings_utf8, &from_message
			)
		);
		RGT_CALL
		(
			rgt_glyph_indices_to_utf8
			(
				&arena, script_to.dialogs.elems[i].message_glyph_indices,
				to_strings_utf8, &to_message
			)
		);
		if (rgt_utf8_string_equals(to_message, null_string_utf8)
			&& from_message.length != 0)
		{
			script_to.dialogs.elems[i].message_glyph_indices =
				script_from.dialogs.elems[i].message_glyph_indices;
		}
	}
	for (u64 i = 0; i < script_from.choice_groups.length; ++i)
	{
		for (u64 j = 0; j < RGT_RGO_SCRIPT_MAX_CHOICES; ++j)
		{
			if (!script_from.choice_groups.elems[i].choices[j].offset)
			{
				break;
			}
			rgt_utf8_string from_message = {0};
			rgt_utf8_string to_message = {0};
			rgt_rgo_script_choice choice_from = 
				script_from.choice_groups.elems[i].choices[j];
			rgt_rgo_script_choice choice_to =
				script_to.choice_groups.elems[i].choices[j];
			RGT_CALL
			(
				rgt_glyph_indices_to_utf8
				(
					&arena, choice_from.glyph_indices,
					from_strings_utf8, &from_message
				)
			);
			RGT_CALL
			(
				rgt_glyph_indices_to_utf8
				(
					&arena, choice_to.glyph_indices,
					to_strings_utf8, &to_message
				)
			);
			if (rgt_utf8_string_equals(to_message, null_string_utf8)
				&& from_message.length != 0)
			{
				script_to.choice_groups.elems[i].choices[j] =
					script_from.choice_groups.elems[i].choices[j];
			}
		}
	}

	RGT_CALL
	(
		rgt_rgo_script_to_headers
		(
			&arena, script_to, SCRIPT_ID, to_strings_utf8,
			STRUCTURE_OUT, COMMANDS_OUT, TEXT_OUT, false
		)
	);

finish:

	rgt_destroy_arena(&arena);

	return result;
}