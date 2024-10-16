#include "ryouou_gakuen_toolkit.h"

#define DIALOG_CHOICE_GROUP_OFFSET_TABLE_HEADER_BEGIN 0x80
#define JUMP_TABLE_OFFSET 0x1E080
#define SPEAKER_END 0xFFFF
#define MESSAGE_END_CLEAR 0xFFFB
#define MESSAGE_END_KEEP 0xFFFD
#define CHOICE_END 0xFFFF
#define DIALOG_START 0xFFF0

rgt_result
rgt_parse_rgo_script
(
	rgt_arena *arena, rgt_u8_array in, rgt_rgo_script *create
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_rgo_script script = {0};
	u64 pos = 0;

	RGT_CALL(rgt_read_bytes(in, &pos, 2, &script.magic));
	
	pos = DIALOG_CHOICE_GROUP_OFFSET_TABLE_HEADER_BEGIN;
	RGT_CALL(rgt_read_bytes(in, &pos, 4, &script.dialog_offset_table_offset));
	RGT_CALL(rgt_read_bytes(in, &pos, 4, &script.dialogs.length));
	RGT_CALL
	(
		rgt_read_bytes(in, &pos, 4, &script.choice_group_offset_table_offset)
	);
	RGT_CALL(rgt_read_bytes(in, &pos, 4, &script.choice_groups.length));

	pos = script.dialog_offset_table_offset 
		+ DIALOG_CHOICE_GROUP_OFFSET_TABLE_HEADER_BEGIN;
	RGT_CREATE_ARRAY
	(
		arena, script.dialogs.length, &script.dialogs
	);
	for (u64 i = 0; i < script.dialogs.length; ++i)
	{
		RGT_CALL
		(
			rgt_read_bytes(in, &pos, 4, &script.dialogs.elems[i].offset)
		);
	}

	pos = script.choice_group_offset_table_offset
		+ DIALOG_CHOICE_GROUP_OFFSET_TABLE_HEADER_BEGIN;
	RGT_CREATE_ARRAY
	(
		arena, script.choice_groups.length, &script.choice_groups
	);
	for (u64 i = 0; i < script.choice_groups.length; ++i)
	{
		RGT_CALL
		(
			rgt_read_bytes
			(
				in, &pos, 4, &script.choice_groups.elems[i].jump_id
			);
		);

		for (u64 j = 0; j < RGT_RGO_SCRIPT_MAX_CHOICES; ++j)
		{
			RGT_CALL
			(
				rgt_read_bytes
				(
					in, &pos, 4, 
					&script.choice_groups.elems[i].choices[j].offset
				)
			);
		}
	}

	pos = JUMP_TABLE_OFFSET;
	RGT_CALL(rgt_read_bytes(in, &pos, 4, &script.jumps.length));
	pos -= 4;

	script.jumps.length = script.jumps.length / 4;
	RGT_CREATE_ARRAY(arena, script.jumps.length, &script.jumps);
	for (u64 i = 0; i < script.jumps.length; ++i)
	{
		RGT_CALL(rgt_read_bytes(in, &pos, 4, &script.jumps.elems[i]));
	}

	for (u64 i = 0; i < script.dialogs.length; ++i)
	{
		u16 cur = 0;

		pos = script.dialogs.elems[i].offset + JUMP_TABLE_OFFSET + 2;
		RGT_CALL(rgt_read_bytes(in, &pos, 2, &script.dialogs.elems[i].id));

		RGT_CALL(rgt_read_bytes(in, &pos, 2, &cur));
		while (cur != SPEAKER_END)
		{
			RGT_APPEND_ARRAY
			(
				arena, &cur, &script.dialogs.elems[i].speaker_font_indices
			);
			RGT_CALL(rgt_read_bytes(in, &pos, 2, &cur));
		}

		RGT_CALL(rgt_read_bytes(in, &pos, 2, &cur));
		while (cur != MESSAGE_END_CLEAR && cur != MESSAGE_END_KEEP)
		{
			RGT_APPEND_ARRAY
			(
				arena, &cur, &script.dialogs.elems[i].message_font_indices
			);
			RGT_CALL(rgt_read_bytes(in, &pos, 2, &cur));
		}
	}

	for (u64 i = 0; i < script.choice_groups.length; ++i)
	{
		for (u64 j = 0; j < RGT_RGO_SCRIPT_MAX_CHOICES; ++j)
		{
			if (!script.choice_groups.elems[i].choices[j].offset)
			{
				break;
			}

			pos = script.choice_groups.elems[i].choices[j].offset 
				+ JUMP_TABLE_OFFSET;

			u16 cur = 0;
			RGT_CALL(rgt_read_bytes(in, &pos, 2, &cur));
			while (cur != CHOICE_END)
			{
				RGT_APPEND_ARRAY
				(
					arena, &cur, 
					&script.choice_groups.elems[i].choices[j].font_indices
				);
				RGT_CALL(rgt_read_bytes(in, &pos, 2, &cur));
			}
		}
	}

	pos = JUMP_TABLE_OFFSET + (script.jumps.length * 4);
	for (u64 i = 0; i < script.dialogs.length; ++i)
	{
		rgt_rgo_script_command_section cur = {0};
		cur.offset = (u32)pos - JUMP_TABLE_OFFSET;
		cur.commands.length =
			((script.dialogs.elems[i].offset - cur.offset) / 2);
		RGT_CREATE_ARRAY(arena, cur.commands.length, &cur.commands);

		for (u64 j = 0; j < cur.commands.length; ++j)
		{
			RGT_CALL(rgt_read_bytes(in, &pos, 2, &cur.commands.elems[j]));
		}
		RGT_APPEND_ARRAY(arena, &cur, &script.command_sections);

		pos += 6;
		pos += script.dialogs.elems[i].speaker_font_indices.length * 2;
		pos += script.dialogs.elems[i].message_font_indices.length * 2;
	}

	for (u64 i = 0; i < script.choice_groups.length; ++i)
	{
		for (u64 j = 0; j < RGT_RGO_SCRIPT_MAX_CHOICES; ++j)
		{
			if (!script.choice_groups.elems[i].choices[j].offset)
			{
				break;
			}

			rgt_rgo_script_command_section cur = {0};
			cur.offset = (u32)pos - JUMP_TABLE_OFFSET;
			cur.commands.length =
			(
				script.choice_groups.elems[i].choices[j].offset
				- cur.offset
			) / 2;
			RGT_CREATE_ARRAY(arena, cur.commands.length, &cur.commands);

			for (u64 k = 0; k < cur.commands.length; ++k)
			{
				RGT_CALL(rgt_read_bytes(in, &pos, 2, &cur.commands.elems[k]));
			}
			RGT_APPEND_ARRAY(arena, &cur, &script.command_sections);

			pos += 
				script.choice_groups.elems[i].choices[j].font_indices.length
				* 2;
		}
	}

	rgt_rgo_script_command_section last_commands = {0};
	last_commands.offset = (u32)pos - JUMP_TABLE_OFFSET;

	while (pos < in.length - RGT_CHECKSUM_SIZE)
	{
		u16 cur = 0;
		RGT_CALL(rgt_read_bytes(in, &pos, 2, &cur));
		if (cur == 0)
		{
			bool end = true;
			for (u64 i = 0; i < RGT_CHECKSUM_SIZE - 2; ++i)
			{
				if (in.elems[pos + i] != 0)
				{
					end = false;
					break;
				}
			}
			if (end)
			{
				break;
			}
		}
		RGT_APPEND_ARRAY(arena, &cur, &last_commands.commands);
	}
	RGT_APPEND_ARRAY(arena, &last_commands, &script.command_sections);

finish:

	if (result == RGT_SUCCESS)
	{
		*create = script;
	}

	return result;
}

rgt_result
rgt_build_rgo_script
(
	rgt_arena *arena, rgt_rgo_script script, rgt_u8_array *create
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_u8_array out = {0};

	{
		rgt_rgo_script_command_section last =
			script.command_sections.elems[script.command_sections.length - 1];
		u64 size = last.offset + (last.commands.length * 2);
		out.length = rgt_align(size + JUMP_TABLE_OFFSET, RGT_KILOBYTE(4));
	}
	RGT_CREATE_ARRAY(arena, out.length, &out);

	u64 pos = 0;
	RGT_CALL(rgt_write_u16(out, &pos, script.magic));

	pos = DIALOG_CHOICE_GROUP_OFFSET_TABLE_HEADER_BEGIN;
	RGT_CALL(rgt_write_u32(out, &pos, script.dialog_offset_table_offset));
	RGT_CALL(rgt_write_u32(out, &pos, (u32)script.dialogs.length));
	RGT_CALL
	(
		rgt_write_u32(out, &pos, script.choice_group_offset_table_offset)
	);
	RGT_CALL(rgt_write_u32(out, &pos, (u32)script.choice_groups.length));

	for (u64 i = 0; i < script.dialogs.length; ++i)
	{
		RGT_CALL(rgt_write_u32(out, &pos, script.dialogs.elems[i].offset));
	}
	pos = rgt_align(pos, 0x10);
	for (u64 i = 0; i < script.choice_groups.length; ++i)
	{
		RGT_CALL
		(
			rgt_write_u32(out, &pos, script.choice_groups.elems[i].jump_id)
		);
		for (u64 j = 0; j < RGT_RGO_SCRIPT_MAX_CHOICES; ++j)
		{
			RGT_CALL
			(
				rgt_write_u32
				(
					out, &pos, script.choice_groups.elems[i].choices[j].offset
				)
			);
		}
	}

	pos = JUMP_TABLE_OFFSET;
	RGT_CALL(rgt_write_u32(out, &pos, ((u32)script.jumps.length + 1) * 4));
	for (u64 i = 0; i < script.jumps.length; ++i)
	{
		RGT_CALL(rgt_write_u32(out, &pos, script.jumps.elems[i]));
	}

	for (u64 i = 0; i < script.dialogs.length; ++i)
	{
		rgt_rgo_script_dialog cur = script.dialogs.elems[i];

		pos = cur.offset + JUMP_TABLE_OFFSET;
		RGT_CALL(rgt_write_u16(out, &pos, DIALOG_START));
		RGT_CALL(rgt_write_u16(out, &pos, cur.id));
		for (u64 j = 0; j < cur.speaker_font_indices.length; ++j)
		{
			RGT_CALL
			(
				rgt_write_u16(out, &pos, cur.speaker_font_indices.elems[j])
			);
		}
		RGT_CALL(rgt_write_u16(out, &pos, SPEAKER_END));
		for (u64 j = 0; j < cur.message_font_indices.length; ++j)
		{
			RGT_CALL
			(
				rgt_write_u16(out, &pos, cur.message_font_indices.elems[j])
			);
		}
	}
	for (u64 i = 0; i < script.choice_groups.length; ++i)
	{
		rgt_rgo_script_choice_group cur = script.choice_groups.elems[i];
		for (u64 j = 0; j < RGT_RGO_SCRIPT_MAX_CHOICES; ++j)
		{
			if (!cur.choices[j].offset)
			{
				break;
			}
			pos = cur.choices[j].offset + JUMP_TABLE_OFFSET;
			for (u64 k = 0; k < cur.choices[j].font_indices.length; ++k)
			{
				RGT_CALL
				(
					rgt_write_u16
					(
						out, &pos, cur.choices[j].font_indices.elems[k]
					)
				);
			}
		}
	}
	for (u64 i = 0; i < script.command_sections.length; ++i)
	{
		rgt_rgo_script_command_section cur = script.command_sections.elems[i];

		pos = cur.offset + JUMP_TABLE_OFFSET;
		for (u64 j = 0; j < cur.commands.length; ++j)
		{
			RGT_CALL(rgt_write_u16(out, &pos, cur.commands.elems[j]));
		}
	}
	rgt_add_checksum_whole_file(out);

finish:

	if (result == RGT_SUCCESS)
	{
		*create = out;
	}

	return result;
}

static int
s_compare_jumps(const void *a, const void *b)
{
	rgt_rgo_script_element_jump arg1 = 
		*(const rgt_rgo_script_element_jump*)a;

	rgt_rgo_script_element_jump arg2 =
		*(const rgt_rgo_script_element_jump*)b;

	if (arg1.offset < arg2.offset)
	{
		return -1;
	}
	if (arg1.offset > arg2.offset)
	{
		return 1;
	}
	return 0;
}

static rgt_result
s_write_sub_command_section
(
	FILE *out_structure, FILE *out_commands, u64 section, u64 sub_section,
	rgt_u16_array commands, u32 start_offset, u32 length
)
{
	rgt_result result = RGT_SUCCESS;

	RGT_FPRINTF
	(
		out_structure, 
		"\t{\n"
		"\t\t.type = RGT_RGO_SCRIPT_COMMAND_SECTION,\n"
		"\t\t.content =\n"
		"\t\t{\n"
		"\t\t\t.command_section =\n"
		"\t\t\t{\n"
		"\t\t\t\t.commands =\n"
		"\t\t\t\t{\n"
		"\t\t\t\t\t.elems = s_commands_%llu_%llu_data,\n"
		"\t\t\t\t\t.length = RGT_C_ARRAY_SIZE(s_commands_%llu_%llu_data)\n"
		"\t\t\t\t}\n"
		"\t\t\t}\n"
		"\t\t}\n"
		"\t},\n",
		section, sub_section,
		section, sub_section
	);

	RGT_FPRINTF
	(
		out_commands,
		"static u16 s_commands_%llu_%llu_data[] =\n"
		"{\n"
		"\t",
		section, sub_section
	);

	for (u64 i = 0; i < length; ++i)
	{
		RGT_FPRINTF
		(
			out_commands, "0x%04hX, ",
			commands.elems[start_offset + i]
		);
		if ((i % 8 == 7) && i != length - 1)
		{
			RGT_FPRINTF
			(
				out_commands, "\n\t"
			);
		}
	}
	RGT_FPRINTF(out_commands, "\n};\n");

finish:

	return result;
}

static rgt_result
s_write_jump(FILE *out_structure, rgt_rgo_script_element_jump jump)
{
	rgt_result result = RGT_SUCCESS;

	RGT_FPRINTF
	(
		out_structure,
		"\t{\n"
		"\t\t.type = RGT_RGO_SCRIPT_JUMP,\n"
		"\t\t.content =\n"
		"\t\t{\n"
		"\t\t\t.jump =\n"
		"\t\t\t{\n"
		"\t\t\t\t.id = %u\n"
		"\t\t\t}\n"
		"\t\t}\n"
		"\t},\n",
		jump.id
	);

finish:

	return result;
}

static rgt_result
s_write_command_section
(
	rgt_arena *arena, rgt_rgo_script script, u64 index, 
	FILE *out_structure, FILE *out_commands
)
{
	RGT_DECLARE_ARRAY_TYPE
	(
		rgt_rgo_script_element_jump, rgt_rgo_script_element_jump_array
	);

	rgt_result result = RGT_SUCCESS;

	rgt_rgo_script_element_jump_array jumps = {0};
	u32 start_offset = script.command_sections.elems[index].offset;
	u32 end_offset = 
		start_offset 
		+ (u32)script.command_sections.elems[index].commands.length * 2;

	for (u64 i = 0; i < script.jumps.length; ++i)
	{
		if 
		(
			script.jumps.elems[i] >= start_offset &&
			script.jumps.elems[i] <= end_offset
		)
		{
			rgt_rgo_script_element_jump jmp = 
			{ 
				.id = (u32)i, .offset = script.jumps.elems[i] 
			};
			RGT_APPEND_ARRAY(arena, &jmp, &jumps);
		}
	}
	qsort(jumps.elems, jumps.length, sizeof(jumps.elems[0]), s_compare_jumps);

	u32 sub_start_offset = start_offset;
	u32 subsection = 0;
	for (u64 i = 0; i < jumps.length; ++i)
	{
		u32 sub_end_offset = jumps.elems[i].offset;
		u32 sub_size = sub_end_offset - sub_start_offset;
		if (sub_size)
		{
			RGT_CALL
			(
				s_write_sub_command_section
				(
					out_structure, out_commands, index, subsection,
					script.command_sections.elems[index].commands, 
					(sub_start_offset - start_offset) / 2,
					sub_size / 2
				)
			);
			++subsection;
		}
		RGT_CALL(s_write_jump(out_structure, jumps.elems[i]));
		sub_start_offset = sub_end_offset;
	}
	if (sub_start_offset != end_offset)
	{
		RGT_CALL
		(
			s_write_sub_command_section
			(
				out_structure, out_commands, index, subsection,
				script.command_sections.elems[index].commands,
				(sub_start_offset - start_offset) / 2,
				(end_offset - sub_start_offset) / 2
			)
		);
	}

finish:

	return result;
}

static rgt_result
s_write_utf8_string(rgt_utf8_string utf8, FILE *out_text)
{
	rgt_result result = RGT_SUCCESS;

	RGT_FPRINTF(out_text, "\t\"");
	for (u64 i = 0; i < utf8.length; ++i)
	{
		RGT_FPRINTF
		(
			out_text, "%.*s", (int)utf8.elems[i].length, utf8.elems[i].elems
		);
		if 
		(
			i != 0 && 
			i != utf8.length - 1 &&
			utf8.elems[i].elems[0] == 'n' && 
			utf8.elems[i-1].elems[0] == '/'
		)
		{
			RGT_FPRINTF
			(
				out_text, 
				"\"\n"
				"\t\""
			);
		}
	}
	RGT_FPRINTF(out_text, "\"");

finish:

	return result;
}

static rgt_result
s_write_dialog
(
	rgt_arena *arena, rgt_rgo_script script, u64 index,
	rgt_utf8_string_array glyph_strings,
	FILE *out_structure, FILE *out_text
)
{
	rgt_result result = RGT_SUCCESS;

	RGT_FPRINTF
	(
		out_structure, 
		"\t{\n"
		"\t\t.type = RGT_RGO_SCRIPT_DIALOG,\n"
		"\t\t.content =\n"
		"\t\t{\n"
		"\t\t\t.dialog =\n"
		"\t\t\t{\n"
		"\t\t\t\t.speaker = s_dialogs_%llu_speaker_data,\n"
		"\t\t\t\t.message = s_dialogs_%llu_message_data\n"
		"\t\t\t}\n"
		"\t\t}\n"
		"\t},\n",
		index, index
	);

	rgt_utf8_string speaker = {0};
	rgt_utf8_string message = {0};
	RGT_CALL
	(
		rgt_glyph_indices_to_utf8
		(
			arena, script.dialogs.elems[index].speaker_font_indices,
			glyph_strings, &speaker
		)
	);
	RGT_CALL
	(
		rgt_glyph_indices_to_utf8
		(
			arena, script.dialogs.elems[index].message_font_indices,
			glyph_strings, &message
		)
	);

	RGT_FPRINTF
	(
		out_text,
		"static char s_dialogs_%llu_speaker_data[] = \n",
		index
	);
	RGT_CALL(s_write_utf8_string(speaker, out_text));

	RGT_FPRINTF
	(
		out_text,
		";\n"
		"static char s_dialogs_%llu_message_data[] = \n",
		index
	);
	RGT_CALL(s_write_utf8_string(message, out_text));

	RGT_FPRINTF(out_text, ";\n\n");
	

finish:

	return result;
}

static rgt_result
s_write_choice
(
	rgt_arena *arena, rgt_rgo_script script, 
	u64 group, u64 choice,
	rgt_utf8_string_array glyph_strings,
	FILE *out_structure, FILE *out_text
)
{
	rgt_result result = RGT_SUCCESS;

	RGT_FPRINTF
	(
		out_structure, 
		"\t{\n"
		"\t\t.type = RGT_RGO_SCRIPT_CHOICE,\n"
		"\t\t.content =\n"
		"\t\t{\n"
		"\t\t\t.choice =\n"
		"\t\t\t{\n"
		"\t\t\t\t.text = s_choices_%llu_%llu_data\n"
		"\t\t\t}\n"
		"\t\t}\n"
		"\t},\n",
		group, choice
	);

	rgt_utf8_string text = {0};
	RGT_CALL
	(
		rgt_glyph_indices_to_utf8
		(
			arena, 
			script.choice_groups.elems[group].choices[choice].font_indices,
			glyph_strings, &text
		)
	);

	RGT_FPRINTF
	(
		out_text,
		"static char s_choices_%llu_%llu_data[] = \n",
		group, choice
	);
	RGT_CALL(s_write_utf8_string(text, out_text));
	RGT_FPRINTF(out_text, ";\n");

finish:

	return result;
}

rgt_result
s_write_choice_group
(
	rgt_arena *arena, rgt_rgo_script script, u64 id,
	rgt_utf8_string_array glyph_strings,
	u64 *command_section,
	FILE *out_structure, FILE* out_commands, FILE *out_text
)
{
	rgt_result result = RGT_SUCCESS;

	RGT_FPRINTF
	(
		out_structure,
		"\t{\n"
		"\t\t.type = RGT_RGO_SCRIPT_CHOICE_GROUP_BEGIN\n"
		"\t},\n"
	);

	for (u64 i = 0; i < RGT_RGO_SCRIPT_MAX_CHOICES; ++i)
	{
		if (!script.choice_groups.elems[id].choices[i].offset)
		{
			break;
		}
		RGT_CALL
		(
			s_write_choice
			(
				arena, script, id, i, glyph_strings, out_structure, out_text
			)
		);
		RGT_CALL
		(
			s_write_command_section
			(
				arena, script, *command_section, out_structure, out_commands
			)
		);
		++(*command_section);
	}

	RGT_FPRINTF(out_text, "\n");
	RGT_FPRINTF
	(
		out_structure,
		"\t{\n"
		"\t\t.type = RGT_RGO_SCRIPT_CHOICE_GROUP_END\n"
		"\t},\n"
	);

finish:

	return result;
}

rgt_result
rgt_rgo_script_to_headers
(
	rgt_arena *arena, rgt_rgo_script script, u64 id,
	rgt_utf8_string_array glyph_strings,
	const char *out_path_structure, const char *out_path_commands, 
	const char *out_path_text
)
{
	rgt_result result = RGT_SUCCESS;
	FILE *out_structure = 0;
	FILE *out_commands = 0;
	FILE *out_text = 0;

	u64 command_section = 0;

	RGT_FOPEN(out_structure, out_path_structure, "wb");
	RGT_FOPEN(out_commands, out_path_commands, "wb");
	RGT_FOPEN(out_text, out_path_text, "wb");

	RGT_FPRINTF
	(
		out_structure, 
		"#ifndef RGT_RGO_SCRIPT_%llu_STRUCTURE_H\n"
		"#define RGT_RGO_SCRIPT_%llu_STRUCTURE_H\n"
		"\n"
		"#include \"%s\"\n"
		"#include \"%s\"\n"
		"#include \"ryouou_gakuen_toolkit.h\"\n"
		"\n"
		"static rgt_rgo_script_element s_script_%llu_elements_data[] =\n"
		"{\n",
		id, id,
		out_path_commands, out_path_text, id
	);

	RGT_FPRINTF
	(
		out_commands, 
		"#ifndef RGT_RGO_SCRIPT_%llu_COMMANDS_H\n"
		"#define RGT_RGO_SCRIPT_%llu_COMMANDS_H\n"
		"\n"
		"#include \"ryouou_gakuen_toolkit.h\"\n"
		"\n",
		id, id
	);

	RGT_FPRINTF
	(
		out_text, 
		"#ifndef RGT_RGO_SCRIPT_%llu_TEXT_H\n"
		"#define RGT_RGO_SCRIPT_%llu_TEXT_H\n"
		"\n"
		"#include \"ryouou_gakuen_toolkit.h\"\n"
		"\n",
		id, id
	);

	for (u64 i = 0; i < script.dialogs.length; ++i)
	{
		RGT_CALL
		(
			s_write_command_section
			(
				arena, script, command_section, out_structure, out_commands
			)
		);
		++command_section;

		RGT_CALL
		(
			s_write_dialog
			(
				arena, script, i, glyph_strings, out_structure, out_text
			)
		);
	}

	RGT_CALL
	(
		s_write_command_section
		(
			arena, script, command_section, out_structure, out_commands
		)
	);
	++command_section;

	for (u64 i = 0; i < script.choice_groups.length; ++i)
	{
		RGT_CALL
		(
			s_write_choice_group
			(
				arena, script, i, glyph_strings, &command_section,
				out_structure, out_commands, out_text
			)
		);
	}

	RGT_FPRINTF
	(
		out_structure,
		"};\n"
		"\n"
		"rgt_rgo_script_element_array g_script_%llu_elements =\n"
		"{\n"
		"\t.elems = s_script_%llu_elements_data,\n"
		"\t.length = RGT_C_ARRAY_SIZE(s_script_%llu_elements_data)\n"
		"};\n",
		id, id, id
	);

	RGT_FPRINTF(out_structure, "#endif");
	RGT_FPRINTF(out_commands, "#endif");
	RGT_FPRINTF(out_text, "#endif");

finish:

	return result;
}
