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
	script.jumps.length = (script.jumps.length - 1) / 4;
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

	pos = JUMP_TABLE_OFFSET + (script.jumps.length * 4) + 4;
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
	RGT_CALL(rgt_write_u32(out, &pos, (script.jumps.length + 1) * 4));
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
