#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "ryouou_gakuen_toolkit.h"

#define CPK_HEADER_MAGIC 0x204B5043 /* "CPK " */
#define UTF_MAGIC 0x46545540 /* "@UTF" */
#define ITOC_MAGIC 0x434F5449 /* "ITOC" */
#define FLAGS_STORAGE_MASK 0xF0
#define FLAGS_TYPE_MASK 0x0F
#define DATA_L_FILE_MAX_SIZE 0x10000 

static void
s_encrypt_decrypt_utf_packet(rgt_u8_array in)
{
	u32 key = 0x0000655F;
	u32 multiplier = 0x00004115;
	for (u64 i = 0; i < in.length; ++i) 
	{
		u8 byte = in.elems[i];
		byte = (byte ^ (u8)(key & 0xFF));
		in.elems[i] = byte;
		key *= multiplier;
	}
}

static rgt_result
s_read_utf_packet
(
	rgt_arena *arena, rgt_u8_array in, u64 *pos, rgt_utf_packet *create
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_utf_packet packet = {0};

	RGT_CALL(rgt_read_bytes(in, pos, 4, &packet.unk));

	u64 utf_size = 0;
	RGT_CALL(rgt_read_bytes(in, pos, 8, &utf_size));
	RGT_ASSERT(utf_size <= 0xFFFFFFFF, RGT_OVERFLOW_ERROR);
	RGT_CREATE_ARRAY(arena, (u32)utf_size, &packet.data);
	RGT_CALL
	(
		rgt_read_bytes(in, pos, packet.data.length, packet.data.elems)
	);

	u64 packet_pos = 0;
	u32 magic = 0;
	RGT_CALL(rgt_read_bytes(packet.data, &packet_pos, 4, &magic));

	packet.is_ecrypted = (magic != UTF_MAGIC);
	if (packet.is_ecrypted)
	{
		s_encrypt_decrypt_utf_packet(packet.data);
		packet_pos = 0;
		RGT_CALL
		(
			rgt_read_bytes(packet.data, &packet_pos, 4, &magic)
		);
		RGT_ASSERT(magic == UTF_MAGIC, RGT_INVALID_CPK_ERROR);
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*create = packet;
	}

	return result;
}

static rgt_result
s_utf_column_flags_to_type(u32 flag, rgt_utf_column_type *out)
{
	rgt_result result = RGT_SUCCESS;
	rgt_utf_column_type col_type = 0;

	u64 storage_type = flag & FLAGS_STORAGE_MASK;
	if (storage_type == 0x00 || storage_type == 0x10 || storage_type == 0x30)
	{
		col_type = RGT_UTF_COLUMN_EMPTY;
		goto finish;
	}
	RGT_ASSERT(storage_type == 0x50, RGT_INVALID_CPK_ERROR);

	u64 data_type = flag & FLAGS_TYPE_MASK;
	switch (data_type)
	{
	case 0x0:
	case 0x1:
		col_type = RGT_UTF_COLUMN_U8;
		break;
	case 0x2:
	case 0x3:
		col_type = RGT_UTF_COLUMN_U16;
		break;
	case 0x4:
	case 0x5:
		col_type = RGT_UTF_COLUMN_U32;
		break;
	case 0x6:
	case 0x7:
		col_type = RGT_UTF_COLUMN_U64;
		break;
	case 0x8:
		col_type = RGT_UTF_COLUMN_F32;
		break;
	case 0xA:
		col_type = RGT_UTF_COLUMN_STRING;
		break;
	case 0xB:
		col_type = RGT_UTF_COLUMN_DATA;
		break;
	default:
		RGT_THROW(RGT_INVALID_CPK_ERROR);
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*out = col_type;
	}

	return result;
}

static rgt_result
s_read_utf_column
(
	rgt_arena *arena, rgt_u8_array in, u64 *pos, u32 strings_offset,
	rgt_utf_column *create
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_utf_column col = {0};

	RGT_CALL(rgt_read_bytes(in, pos, 1, &col.flags));
	RGT_CALL(s_utf_column_flags_to_type(col.flags, &col.type));
	RGT_CALL(rgt_read_be_32(in, pos, &col.name_offset));
	u64 offset = col.name_offset + strings_offset;
	RGT_CALL(rgt_read_c_string(arena, in, &offset, &col.name));

finish:

	if (result == RGT_SUCCESS)
	{
		*create = col;
	}

	return result;
}

static rgt_result
s_read_utf_entry
(
	rgt_arena *arena, rgt_u8_array in, u64 *pos, 
	rgt_utf_column_type column_type, u32 strings_offset, u32 data_offset,
	rgt_utf_entry *create
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_utf_entry entry = {0};

	switch(column_type)
	{
	case RGT_UTF_COLUMN_EMPTY:
		break;
	case RGT_UTF_COLUMN_U8:
		RGT_CALL(rgt_read_bytes(in, pos, 1, &entry.value.uint8));
		break;
	case RGT_UTF_COLUMN_U16:
		RGT_CALL(rgt_read_be_16(in, pos, &entry.value.uint16));
		break;
	case RGT_UTF_COLUMN_U32:
		RGT_CALL(rgt_read_be_32(in, pos, &entry.value.uint32));
		break;
	case RGT_UTF_COLUMN_U64:
		RGT_CALL(rgt_read_be_64(in, pos, &entry.value.uint64));
		break;
	case RGT_UTF_COLUMN_F32:
	{
		u32 temp = 0;
		RGT_CALL(rgt_read_be_32(in, pos, &temp));
		memcpy(&entry.value.float32, &temp, 4);
		break;
	}
	case RGT_UTF_COLUMN_STRING:
	{
		RGT_CALL(rgt_read_be_32(in, pos, &entry.offset));
		u64 offset = entry.offset + strings_offset;
		RGT_CALL(rgt_read_c_string(arena, in, &offset, &entry.value.string));
		break;
	}
	case RGT_UTF_COLUMN_DATA:
	{
		RGT_CALL(rgt_read_be_32(in, pos, &entry.offset));
		u64 offset = entry.offset + data_offset;
		RGT_CALL(rgt_read_be_32(in, pos, (u32*)&entry.value.data.length));
		RGT_CREATE_ARRAY(arena, entry.value.data.length, &entry.value.data);
		RGT_CALL
		(
			rgt_read_bytes
			(
				in, &offset, entry.value.data.length, entry.value.data.elems
			)
		);
		break;
	}
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*create = entry;
	}

	return result;
}

static rgt_result
s_read_utf(rgt_arena *arena, rgt_u8_array in, rgt_utf *create)
{
	rgt_result result = RGT_SUCCESS;
	rgt_utf utf = {0};
	u64 pos = 4; /* skip magic */

	RGT_CALL(rgt_read_be_32(in, &pos, &utf.table_size));
	RGT_CALL(rgt_read_be_32(in, &pos, &utf.rows_offset));
	RGT_CALL(rgt_read_be_32(in, &pos, &utf.strings_offset));
	RGT_CALL(rgt_read_be_32(in, &pos, &utf.data_offset));
	utf.rows_offset += 8;
	utf.strings_offset += 8;
	utf.data_offset += 8;

	RGT_CALL(rgt_read_be_32(in, &pos, &utf.table_name_offset));

	u64 offset = utf.strings_offset;
	RGT_CALL
	(
		rgt_read_c_string(arena, in, &offset, &utf.pre_table_name_string)
	);

	offset = utf.strings_offset + utf.table_name_offset;
	RGT_CALL(rgt_read_c_string(arena, in, &offset, &utf.table_name));

	u16 columns_len = 0;
	RGT_CALL(rgt_read_be_16(in, &pos, &columns_len));
	RGT_CREATE_ARRAY(arena, columns_len, &utf.columns);

	RGT_CALL(rgt_read_be_16(in, &pos, &utf.row_length));
	RGT_CALL(rgt_read_be_32(in, &pos, (u32*)&utf.rows.length));
	RGT_CREATE_ARRAY(arena, utf.rows.length, &utf.rows);
	for  (u64 i = 0; i < utf.rows.length; ++i)
	{
		RGT_CREATE_ARRAY(arena, utf.columns.length, &utf.rows.elems[i]);
	}

	for (u64 i = 0; i < utf.columns.length; ++i)
	{
		s_read_utf_column(arena, in, &pos, utf.strings_offset, &utf.columns.elems[i]);
	}
	

	for (u64 i = 0; i < utf.rows.length; ++i)
	{
		pos = utf.rows_offset + (i * utf.row_length);
		for (u64 j = 0; j < utf.columns.length; ++j)
		{
			RGT_CALL
			(
				s_read_utf_entry
				(
					arena, in, &pos,
					utf.columns.elems[j].type,
					utf.strings_offset, utf.data_offset,
					&utf.rows.elems[i].elems[j]
				)
			);
		}
	}

finish:
	
	if (result == RGT_SUCCESS)
	{
		*create = utf;
	}

	return result;
}

static rgt_result
s_read_cpk_header
(
	rgt_arena *arena, rgt_u8_array in, u64 pos, 
	rgt_utf_packet *create_1, rgt_utf *create_2
)
{
	rgt_result result = RGT_SUCCESS;
	u32 magic = 0;
	rgt_utf_packet utf_packet = {0};
	rgt_utf utf = {0};

	RGT_CALL(rgt_read_bytes(in, &pos, 4, &magic));
	RGT_ASSERT(magic == CPK_HEADER_MAGIC, RGT_INVALID_CPK_ERROR);
	RGT_CALL(s_read_utf_packet(arena, in, &pos, &utf_packet));
	RGT_CALL(s_read_utf(arena, utf_packet.data, &utf));

finish:

	if (result == RGT_SUCCESS)
	{
		*create_1 = utf_packet;
		*create_2 = utf;
	}

	return result;
}

static bool
s_get_utf_column_index(rgt_utf utf, const char *column_name, u64 *out)
{
	for (u64 i = 0; i < utf.columns.length; ++i)
	{
		if (strcmp(column_name, utf.columns.elems[i].name.elems) == 0)
		{
			*out = i;
			return true;
		}
	}
	return false;
}
#define GET_UTF_COL_IDX(utf, col_name, out) \
RGT_ASSERT(s_get_utf_column_index(utf, col_name, out), RGT_INVALID_CPK_ERROR)

static rgt_result
s_read_itoc
(
	rgt_arena *arena, rgt_u8_array in, u64 pos, 
	rgt_utf_packet *create_1, rgt_utf *create_2
)
{
	rgt_result result = RGT_SUCCESS;
	u32 magic = 0;
	rgt_utf_packet packet = {0};
	rgt_utf utf = {0};

	RGT_CALL(rgt_read_bytes(in, &pos, 4, &magic));
	RGT_ASSERT(magic == ITOC_MAGIC, RGT_INVALID_CPK_ERROR);
	RGT_CALL(s_read_utf_packet(arena, in, &pos, &packet));
	RGT_CALL(s_read_utf(arena, packet.data, &utf));

finish:

	if (result == RGT_SUCCESS)
	{
		*create_1 = packet;
		*create_2 = utf;
	}

	return result;
}

static rgt_result
s_get_files_from_data_utfs
(
	rgt_arena *arena, rgt_u8_array in, u64 pos, u16 align,
	rgt_utf utf_l, rgt_utf utf_h,
	rgt_cpk_file_array *create_l, rgt_cpk_file_array *create_h
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_cpk_file_array files_l = {0};
	rgt_cpk_file_array files_h = {0};

	u64 id_col_l = 0;
	u64 size_col_l = 0;
	u64 id_col_h = 0;
	u64 size_col_h = 0;
	GET_UTF_COL_IDX(utf_l, "ID", &id_col_l);
	GET_UTF_COL_IDX(utf_l, "FileSize", &size_col_l);
	GET_UTF_COL_IDX(utf_h, "ID", &id_col_h);
	GET_UTF_COL_IDX(utf_h, "FileSize", &size_col_h);

	if (utf_l.rows.length > 0)
	{
		RGT_CREATE_ARRAY(arena, utf_l.rows.length, &files_l);
	}
	if (utf_h.rows.length > 0)
	{
		RGT_CREATE_ARRAY(arena, utf_h.rows.length, &files_h);
	}

	for (u64 i = 0; i < files_l.length; ++i)
	{
		rgt_utf_entry *row = utf_l.rows.elems[i].elems;
		files_l.elems[i].id = row[id_col_l].value.uint16;
		files_l.elems[i].data.length = row[size_col_l].value.uint32;
		RGT_CREATE_ARRAY
		(
			arena, files_l.elems[i].data.length, &files_l.elems[i].data
		);
	}
	for (u64 i = 0; i < files_h.length; ++i)
	{
		rgt_utf_entry *row = utf_h.rows.elems[i].elems;
		files_h.elems[i].id = row[id_col_h].value.uint16;
		files_h.elems[i].data.length = row[size_col_h].value.uint32;
		RGT_CREATE_ARRAY
		(
			arena, files_h.elems[i].data.length, &files_h.elems[i].data
		);
	}

	u64 l_idx = 0;
	u64 h_idx = 0;
	for (u64 i = 0; i < files_l.length + files_h.length; ++i)
	{
		if (files_l.elems && files_l.elems[l_idx].id == i)
		{
			RGT_CALL
			(
				rgt_read_bytes
				(
					in, &pos, 
					files_l.elems[l_idx].data.length, 
					files_l.elems[l_idx].data.elems
				)
			);
			++l_idx;
		}
		else if (files_h.elems && files_h.elems[h_idx].id == i)
		{
			RGT_CALL
			(
				rgt_read_bytes
				(
					in, &pos, 
					files_h.elems[h_idx].data.length, 
					files_h.elems[h_idx].data.elems
				)
			);
			++h_idx;
		}
		pos = rgt_align(pos, align);
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*create_l = files_l;
		*create_h = files_h;
	}

	return result;
}

rgt_result
rgt_parse_cpk(rgt_arena *arena, rgt_u8_array in, rgt_cpk *create)
{
	rgt_result result = RGT_SUCCESS;
	rgt_cpk cpk = {0};

	RGT_CALL
	(
		s_read_cpk_header(arena, in, 0, &cpk.header_packet, &cpk.header_utf)
	);

	u64 column_index = 0;
	GET_UTF_COL_IDX(cpk.header_utf, "ItocOffset", &column_index);
	rgt_utf_entry *utf_entries = cpk.header_utf.rows.elems[0].elems;
	u64 itoc_offset = utf_entries[column_index].value.uint64;
	RGT_ASSERT(itoc_offset <= 0xFFFFFFFF, RGT_OVERFLOW_ERROR);

	RGT_CALL
	(
		s_read_itoc
		(
			arena, in, (u32)itoc_offset, &cpk.itoc_packet, &cpk.itoc_utf
		)
	);

	utf_entries = cpk.itoc_utf.rows.elems[0].elems;
	GET_UTF_COL_IDX(cpk.itoc_utf, "DataL", &column_index);
	rgt_u8_array data_l = utf_entries[column_index].value.data;
	RGT_CALL(s_read_utf(arena, data_l, &cpk.data_l_utf));

	GET_UTF_COL_IDX(cpk.itoc_utf, "DataH", &column_index);
	rgt_u8_array data_h = utf_entries[column_index].value.data;
	RGT_CALL(s_read_utf(arena, data_h, &cpk.data_h_utf));

	utf_entries = cpk.header_utf.rows.elems[0].elems;
	GET_UTF_COL_IDX(cpk.header_utf, "ContentOffset", &column_index);
	u64 content_offset = utf_entries[column_index].value.uint64;
	
	GET_UTF_COL_IDX(cpk.header_utf, "Align", &column_index);
	u16 align = utf_entries[column_index].value.uint16;

	RGT_ASSERT(content_offset <= 0xFFFFFFFF, RGT_OVERFLOW_ERROR);
	RGT_CALL
	(
		s_get_files_from_data_utfs
		(
			arena, in, (u32)content_offset, align,
			cpk.data_l_utf, cpk.data_h_utf,
			&cpk.data_l_files, &cpk.data_h_files
		)
	);

finish:

	if (result == RGT_SUCCESS)
	{
		*create = cpk;
	}

	return result;
}

static rgt_result
s_write_utf_column
(
	rgt_utf_column col, u32 strings_offset, u64 *pos, rgt_u8_array fill
)
{
	rgt_result result = RGT_SUCCESS;
	
	RGT_CALL(rgt_write_u8(fill, pos, col.flags));
	RGT_CALL(rgt_write_be_32(fill, pos, col.name_offset));

	u32 offset = strings_offset + col.name_offset;
	RGT_CALL(rgt_copy_u8_array(fill, offset, col.name));

finish:

	return result;
}

static rgt_result
s_write_utf_entry
(
	rgt_utf_entry entry, u64 *pos, 
	rgt_utf_column_type column_type, u32 strings_offset, u32 data_offset,
	rgt_u8_array fill
)
{
	rgt_result result = RGT_SUCCESS;

	switch(column_type)
	{
	case RGT_UTF_COLUMN_EMPTY:
		break;
	case RGT_UTF_COLUMN_U8:
		RGT_CALL(rgt_write_u8(fill, pos, entry.value.uint8));
		break;
	case RGT_UTF_COLUMN_U16:
		RGT_CALL(rgt_write_be_16(fill, pos, entry.value.uint16));
		break;
	case RGT_UTF_COLUMN_U32:
		RGT_CALL(rgt_write_be_32(fill, pos, entry.value.uint32));
		break;
	case RGT_UTF_COLUMN_U64:
		RGT_CALL(rgt_write_be_64(fill, pos, entry.value.uint64));
		break;
	case RGT_UTF_COLUMN_F32:
	{
		u32 temp = 0;
		memcpy(&temp, &entry.value.float32, 4);
		RGT_CALL(rgt_write_be_32(fill, pos, temp));
		break;
	}
	case RGT_UTF_COLUMN_STRING:
	{
		RGT_CALL(rgt_write_be_32(fill, pos, entry.offset));
		u64 offset = entry.offset + strings_offset;
		RGT_CALL
		(
			rgt_copy_u8_array(fill, offset, entry.value.string)
		);
		break;
	}
	case RGT_UTF_COLUMN_DATA:
	{
		RGT_CALL(rgt_write_be_32(fill, pos, entry.offset));
		RGT_CALL(rgt_write_be_32(fill, pos, (u32)entry.value.data.length));
		u64 offset = entry.offset + data_offset;
		RGT_CALL(rgt_copy_u8_array(fill, offset, entry.value.data));
		break;
	}
	}

finish:

	return result;
}

static rgt_result
s_build_utf(rgt_utf utf, rgt_u8_array fill)
{
	rgt_result result = RGT_SUCCESS;
	u64 pos = 0;

	RGT_CALL(rgt_write_u32(fill, &pos, UTF_MAGIC));
	RGT_CALL(rgt_write_be_32(fill, &pos, utf.table_size));
	RGT_CALL(rgt_write_be_32(fill, &pos, utf.rows_offset - 8));
	RGT_CALL(rgt_write_be_32(fill, &pos, utf.strings_offset - 8));
	RGT_CALL(rgt_write_be_32(fill, &pos, utf.data_offset - 8));
	RGT_CALL(rgt_write_be_32(fill, &pos, utf.table_name_offset));
	RGT_CALL(rgt_write_be_16(fill, &pos, (u16)utf.columns.length));
	RGT_CALL(rgt_write_be_16(fill, &pos, utf.row_length));
	RGT_CALL(rgt_write_be_32(fill, &pos, (u32)utf.rows.length));

	RGT_CALL
	(
		rgt_copy_u8_array(fill, utf.strings_offset, utf.pre_table_name_string)
	);

	u64 offset = utf.table_name_offset + utf.strings_offset;
	RGT_CALL(rgt_copy_u8_array(fill, offset, utf.table_name));

	for (u64 i = 0; i < utf.columns.length; ++i)
	{
		rgt_utf_column col = utf.columns.elems[i];
		RGT_CALL
		(
			s_write_utf_column(col, utf.strings_offset, &pos, fill)
		);
	}

	for (u64 i = 0; i < utf.rows.length; ++i)
	{
		pos = utf.rows_offset + (i * utf.row_length);
		for (u64 j = 0; j < utf.columns.length; ++j)
		{
			RGT_CALL
			(
				s_write_utf_entry
				(
					utf.rows.elems[i].elems[j], &pos, utf.columns.elems[j].type,
					utf.strings_offset, utf.data_offset, fill
				)
			);
		}
	}

finish:

	return result;
}

static rgt_result
s_build_utf_packet
(
	rgt_arena *arena, rgt_utf_packet packet, rgt_utf utf, u32 magic, 
	rgt_u8_array *out
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_u8_array built_packet = {0};
	u64 pos = 0;

	RGT_CREATE_ARRAY(arena, packet.data.length + 16, &built_packet);
	RGT_CALL(rgt_write_u32(built_packet, &pos, magic));
	RGT_CALL(rgt_write_u32(built_packet, &pos, packet.unk));
	RGT_CALL(rgt_write_u64(built_packet, &pos, packet.data.length));

	built_packet.elems += 16;
	built_packet.length -= 16;
	RGT_CALL(s_build_utf(utf, built_packet));
	s_encrypt_decrypt_utf_packet(built_packet);
	built_packet.elems -= 16;
	built_packet.length += 16;

finish:

	if (result == RGT_SUCCESS)
	{
		*out = built_packet;
	}

	return result;
}

rgt_result
rgt_build_cpk(rgt_arena *arena, rgt_cpk cpk, rgt_u8_array *create)
{
	rgt_result result = RGT_SUCCESS;
	rgt_u8_array out = {0};

	u64 col_idx = 0;
	rgt_utf_entry *header_entry = cpk.header_utf.rows.elems[0].elems;
	GET_UTF_COL_IDX(cpk.header_utf, "ContentOffset", &col_idx);
	u32 content_offset = header_entry[col_idx].value.uint32;

	GET_UTF_COL_IDX(cpk.header_utf, "ItocOffset", &col_idx);
	u32 itoc_offset = header_entry[col_idx].value.uint32;

	GET_UTF_COL_IDX(cpk.header_utf, "Align", &col_idx);
	u16 align = header_entry[col_idx].value.uint16;

	out.length += content_offset;
	for (u64 i = 0; i < cpk.data_l_files.length; ++i)
	{
		out.length += cpk.data_l_files.elems[i].data.length;
		out.length = rgt_align(out.length, align);
	}
	for (u64 i = 0; i < cpk.data_h_files.length; ++i)
	{
		out.length += cpk.data_h_files.elems[i].data.length;
		out.length = rgt_align(out.length, align);
	}

	if (cpk.data_l_files.length && !cpk.data_h_files.length)
	{
		u64 last_size = 
			cpk.data_l_files.elems[cpk.data_l_files.length - 1].data.length;
		out.length -= rgt_align(last_size, align);
		out.length += last_size;
	}
	else if (!cpk.data_l_files.length && cpk.data_h_files.length)
	{
		u64 last_size = 
			cpk.data_h_files.elems[cpk.data_h_files.length - 1].data.length;
		out.length -= rgt_align(last_size, align);
		out.length += last_size;
	}
	else if (cpk.data_l_files.length && cpk.data_h_files.length)
	{
		rgt_cpk_file last_l = 
			cpk.data_l_files.elems[cpk.data_l_files.length - 1];
		rgt_cpk_file last_h =
			cpk.data_h_files.elems[cpk.data_h_files.length - 1];
		u64 last_size = (last_l.id > last_h.id)
			? last_l.data.length : last_h.data.length;
		out.length -= rgt_align(last_size, align);
		out.length += last_size;
	}


	RGT_CREATE_ARRAY(arena, out.length, &out);

	rgt_u8_array header_packet = {0};
	rgt_u8_array itoc_packet = {0};

	RGT_CALL
	(
		s_build_utf_packet
		(
			arena, cpk.header_packet, cpk.header_utf, CPK_HEADER_MAGIC,
			&header_packet
		)
	);
	memcpy(out.elems, header_packet.elems, header_packet.length);
	memcpy(&out.elems[0x7fa], "(c)CRI", 6);

	RGT_CALL
	(
		s_build_utf_packet
		(
			arena, cpk.itoc_packet, cpk.itoc_utf, ITOC_MAGIC, &itoc_packet
		)
	);
	memcpy(&out.elems[itoc_offset], itoc_packet.elems, itoc_packet.length);

	u64 l_idx = 0;
	u64 h_idx = 0;
	u64 pos = content_offset;
	rgt_cpk_file *l_files = cpk.data_l_files.elems;
	rgt_cpk_file *h_files = cpk.data_h_files.elems;

	for (u64 i = 0; i < cpk.data_l_files.length + cpk.data_h_files.length; ++i)
	{
		if (l_files && l_files[l_idx].id == i)
		{
			RGT_CALL
			(
				rgt_copy_u8_array(out, pos, l_files[l_idx].data)
			);
			pos += l_files[l_idx].data.length;
			++l_idx;
		}
		else if (h_files && h_files[h_idx].id == i)
		{
			RGT_CALL
			(
				rgt_copy_u8_array(out, pos, h_files[h_idx].data)
			);
			pos += h_files[h_idx].data.length;
			++h_idx;
		}
		pos = rgt_align(pos, align);
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*create = out;
	}

	return result;
}

static rgt_result
s_file_array_insert(rgt_arena *arena, rgt_cpk *cpk, u16 id, rgt_u8_array file)
{
	rgt_result result = RGT_SUCCESS;

	rgt_cpk_file_array *files = &cpk->data_h_files;
	if (file.length <= DATA_L_FILE_MAX_SIZE)
	{
		files = &cpk->data_l_files;
	}

	rgt_cpk_file_array temp = {0};
	RGT_CREATE_ARRAY(arena, files->length + 1, &temp);

	u64 idx = 0;
	while (idx < files->length && files->elems[idx].id < id)
	{
		memcpy(&temp.elems[idx], &files->elems[idx], sizeof(rgt_cpk_file));
		++idx;
	}

	temp.elems[idx].id = id;
	RGT_CREATE_ARRAY(arena, file.length, &temp.elems[idx].data);
	memcpy(temp.elems[idx].data.elems, file.elems, file.length);
	++idx;

	for (; idx < temp.length; ++idx)
	{
		memcpy(&temp.elems[idx], &files->elems[idx - 1], sizeof(rgt_cpk_file));
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*files = temp;
	}

	return result;
}

static rgt_result
s_data_utf_insert(rgt_arena *arena, rgt_cpk *cpk, u16 id, rgt_u8_array file)
{
	rgt_result result = RGT_SUCCESS;
	
	rgt_utf *utf = &cpk->data_h_utf;
	rgt_utf_row_array *rows = &cpk->data_h_utf.rows;
	if (file.length <= DATA_L_FILE_MAX_SIZE)
	{
		utf = &cpk->data_l_utf;
		rows = &cpk->data_l_utf.rows;
	}

	rgt_utf_row_array temp = {0};
	RGT_CREATE_ARRAY(arena, rows->length + 1, &temp);
	
	u64 id_col = 0;
	u64 size_col = 0;
	u64 extract_col = 0;
	GET_UTF_COL_IDX(*utf, "ID", &id_col);
	GET_UTF_COL_IDX(*utf, "FileSize", &size_col);
	GET_UTF_COL_IDX(*utf, "ExtractSize", &extract_col);


	u64 idx = 0;
	while 
	(
		idx < rows->length &&
		rows->elems[idx].elems[id_col].value.uint16 < id
	)
	{
		memcpy(&temp.elems[idx], &rows->elems[idx], sizeof(rgt_utf_row));
		++idx;
	}

	rgt_utf_row new_row = {0};
	RGT_CREATE_ARRAY(arena, utf->columns.length, &new_row);
	new_row.elems[id_col].value.uint16 = id;

	if (file.length <= DATA_L_FILE_MAX_SIZE)
	{
		new_row.elems[size_col].value.uint16 = (u16)file.length;
		new_row.elems[extract_col].value.uint16 = (u16)file.length;
	}
	else
	{
		new_row.elems[size_col].value.uint32 = (u32)file.length;
		new_row.elems[extract_col].value.uint32 = (u32)file.length;
	}
	temp.elems[idx] = new_row;
	++idx;

	for (; idx < temp.length; ++idx)
	{
		memcpy(&temp.elems[idx], &rows->elems[idx - 1], sizeof(rgt_utf_row));
	}

	utf->table_size += utf->row_length;
	utf->strings_offset += utf->row_length;
	utf->table_name_offset += utf->row_length;

finish:

	if (result == RGT_SUCCESS)
	{
		*rows = temp;
	}

	return result;
}

static rgt_result
s_itoc_insert(rgt_arena *arena, rgt_cpk *cpk, rgt_u8_array file)
{
	rgt_result result = RGT_SUCCESS;
	
	u64 files_col = 0;
	u64 data_col = 0;
	rgt_utf data_utf = {0};
	rgt_utf_entry *row = cpk->itoc_utf.rows.elems[0].elems;
	if (file.length <= DATA_L_FILE_MAX_SIZE)
	{
		GET_UTF_COL_IDX(cpk->itoc_utf, "FilesL", &files_col);
		GET_UTF_COL_IDX(cpk->itoc_utf, "DataL", &data_col);
		data_utf = cpk->data_l_utf;

		u64 data_h_col = 0;
		GET_UTF_COL_IDX(cpk->itoc_utf, "DataH", &data_h_col);
		row[data_h_col].offset += data_utf.row_length;
	}
	else
	{
		GET_UTF_COL_IDX(cpk->itoc_utf, "FilesH", &files_col);
		GET_UTF_COL_IDX(cpk->itoc_utf, "DataH", &data_col);
		data_utf = cpk->data_h_utf;
	}

	++row[files_col].value.uint32;

	rgt_u8_array new_data = {0};
	RGT_CREATE_ARRAY
	(
		arena, 
		row[data_col].value.data.length + data_utf.row_length, 
		&new_data
	);
	RGT_CALL(s_build_utf(data_utf, new_data));

	cpk->itoc_packet.data.length += data_utf.row_length;

finish:

	if (result == RGT_SUCCESS)
	{
		row[data_col].value.data = new_data;
	}

	return result;
}

static rgt_result
s_cpk_header_insert(rgt_cpk *cpk, rgt_u8_array file)
{
	rgt_result result = RGT_SUCCESS;

	rgt_utf *utf = &cpk->header_utf;

	u64 col_c_off = 0;
	u64 col_c_size = 0;
	u64 col_i_off = 0;
	u64 col_i_size = 0;
	u64 col_ep_size = 0;
	u64 col_ed_size = 0;
	u64 col_files = 0;
	u64 col_align = 0;
	GET_UTF_COL_IDX(*utf, "ContentOffset", &col_c_off);
	GET_UTF_COL_IDX(*utf, "ContentSize", &col_c_size);
	GET_UTF_COL_IDX(*utf, "ItocOffset", &col_i_off);
	GET_UTF_COL_IDX(*utf, "ItocSize", &col_i_size);
	GET_UTF_COL_IDX(*utf, "EnabledPackedSize", &col_ep_size);
	GET_UTF_COL_IDX(*utf, "EnabledDataSize", &col_ed_size);
	GET_UTF_COL_IDX(*utf, "Files", &col_files);
	GET_UTF_COL_IDX(*utf, "Align", &col_align);
	u64 *c_off = &utf->rows.elems[0].elems[col_c_off].value.uint64;
	u64 *c_size = &utf->rows.elems[0].elems[col_c_size].value.uint64;
	u64 i_off = utf->rows.elems[0].elems[col_i_off].value.uint64;
	u64 *i_size = &utf->rows.elems[0].elems[col_i_size].value.uint64;
	u64 *ep_size = &utf->rows.elems[0].elems[col_ep_size].value.uint64;
	u64 *ed_size = &utf->rows.elems[0].elems[col_ed_size].value.uint64;
	u32 *files = &utf->rows.elems[0].elems[col_files].value.uint32;
	u16 align = utf->rows.elems[0].elems[col_align].value.uint16;

	if (file.length <= RGT_KILOBYTE(64))
	{
		*i_size += cpk->data_l_utf.row_length;
	}
	else
	{
		*i_size += cpk->data_h_utf.row_length;
	}
	*c_off = rgt_align((u32)i_off + (u32)*i_size, align);
	*c_size += file.length;
	*ep_size += file.length;
	*ed_size += file.length;
	++(*files);

finish:

	return result;
}

rgt_result
rgt_add_cpk_file(rgt_arena *arena, rgt_cpk *cpk, u16 id, rgt_u8_array file)
{
	rgt_result result = RGT_SUCCESS;

	RGT_CALL(s_file_array_insert(arena, cpk, id, file));
	RGT_CALL(s_data_utf_insert(arena, cpk, id, file));
	RGT_CALL(s_itoc_insert(arena, cpk, file));
	RGT_CALL(s_cpk_header_insert(cpk, file));

finish:

	return result;
}

static rgt_result
s_file_array_remove(rgt_arena *arena, rgt_cpk *cpk, u16 id, bool found_l)
{
	rgt_result result = RGT_SUCCESS;

	rgt_cpk_file_array *files = &cpk->data_h_files;
	if (found_l)
	{
		files = &cpk->data_l_files;
	}

	rgt_cpk_file_array temp = {0};
	RGT_CREATE_ARRAY(arena, files->length - 1, &temp);

	u64 idx = 0;
	while (files->elems[idx].id < id)
	{
		memcpy(&temp.elems[idx], &files->elems[idx], sizeof(rgt_cpk_file));
		++idx;
	}
	for (; idx < temp.length; ++idx)
	{
		memcpy(&temp.elems[idx], &files->elems[idx + 1], sizeof(rgt_cpk_file));
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*files = temp;
	}

	return result;
}

static rgt_result
s_data_utf_remove(rgt_arena *arena, rgt_cpk *cpk, u16 id, bool found_l)
{
	rgt_result result = RGT_SUCCESS;

	rgt_utf *utf = &cpk->data_h_utf;
	rgt_utf_row_array *rows = &cpk->data_h_utf.rows;
	if (found_l)
	{
		utf = &cpk->data_l_utf;
		rows = &cpk->data_l_utf.rows;
	}

	rgt_utf_row_array temp = {0};
	RGT_CREATE_ARRAY(arena, rows->length - 1, &temp);

	u64 id_col = 0;
	u64 size_col = 0;
	u64 extract_col = 0;
	GET_UTF_COL_IDX(*utf, "ID", &id_col);
	GET_UTF_COL_IDX(*utf, "FileSize", &size_col);
	GET_UTF_COL_IDX(*utf, "ExtractSize", &extract_col);


	u64 idx = 0;
	while (rows->elems[idx].elems[id_col].value.uint16 < id)
	{
		memcpy(&temp.elems[idx], &rows->elems[idx], sizeof(rgt_utf_row));
		++idx;
	}
	for (; idx < temp.length; ++idx)
	{
		memcpy(&temp.elems[idx], &rows->elems[idx + 1], sizeof(rgt_utf_row));
	}

	utf->table_size -= utf->row_length;
	utf->strings_offset -= utf->row_length;
	utf->table_name_offset -= utf->row_length;

finish:

	if (result == RGT_SUCCESS)
	{
		*rows = temp;
	}

	return result;
}

static rgt_result
s_itoc_remove(rgt_arena *arena, rgt_cpk *cpk, bool found_l)
{
	rgt_result result = RGT_SUCCESS;

	u64 files_col = 0;
	u64 data_col = 0;
	rgt_utf data_utf = {0};
	rgt_utf_entry *row = cpk->itoc_utf.rows.elems[0].elems;
	if (found_l)
	{
		GET_UTF_COL_IDX(cpk->itoc_utf, "FilesL", &files_col);
		GET_UTF_COL_IDX(cpk->itoc_utf, "DataL", &data_col);
		data_utf = cpk->data_l_utf;

		u64 data_h_col = 0;
		GET_UTF_COL_IDX(cpk->itoc_utf, "DataH", &data_h_col);
		row[data_h_col].offset -= data_utf.row_length;
	}
	else
	{
		GET_UTF_COL_IDX(cpk->itoc_utf, "FilesH", &files_col);
		GET_UTF_COL_IDX(cpk->itoc_utf, "DataH", &data_col);
		data_utf = cpk->data_h_utf;
	}

	--row[files_col].value.uint32;
	row[data_col].value.data.length -= data_utf.row_length;

	rgt_u8_array new_data = {0};
	RGT_CREATE_ARRAY(arena, row[data_col].value.data.length, &new_data);
	RGT_CALL(s_build_utf(data_utf, new_data));

	cpk->itoc_packet.data.length -= data_utf.row_length;

finish:

	if (result == RGT_SUCCESS)
	{
		row[data_col].value.data = new_data;
	}

	return result;
}

static rgt_result
s_cpk_header_remove(rgt_cpk *cpk, u64 len, bool found_l)
{
	rgt_result result = RGT_SUCCESS;

	rgt_utf *utf = &cpk->header_utf;

	u64 col_c_off = 0;
	u64 col_c_size = 0;
	u64 col_i_off = 0;
	u64 col_i_size = 0;
	u64 col_ep_size = 0;
	u64 col_ed_size = 0;
	u64 col_files = 0;
	u64 col_align = 0;
	GET_UTF_COL_IDX(*utf, "ContentOffset", &col_c_off);
	GET_UTF_COL_IDX(*utf, "ContentSize", &col_c_size);
	GET_UTF_COL_IDX(*utf, "ItocOffset", &col_i_off);
	GET_UTF_COL_IDX(*utf, "ItocSize", &col_i_size);
	GET_UTF_COL_IDX(*utf, "EnabledPackedSize", &col_ep_size);
	GET_UTF_COL_IDX(*utf, "EnabledDataSize", &col_ed_size);
	GET_UTF_COL_IDX(*utf, "Files", &col_files);
	GET_UTF_COL_IDX(*utf, "Align", &col_align);

	u64 *c_off = &utf->rows.elems[0].elems[col_c_off].value.uint64;
	u64 *c_size = &utf->rows.elems[0].elems[col_c_size].value.uint64;
	u64 i_off = utf->rows.elems[0].elems[col_i_off].value.uint64;
	u64 *i_size = &utf->rows.elems[0].elems[col_i_size].value.uint64;
	u64 *ep_size = &utf->rows.elems[0].elems[col_ep_size].value.uint64;
	u64 *ed_size = &utf->rows.elems[0].elems[col_ed_size].value.uint64;
	u32 *files = &utf->rows.elems[0].elems[col_files].value.uint32;
	u16 align = utf->rows.elems[0].elems[col_align].value.uint16;

	if (found_l)
	{
		*i_size -= cpk->data_l_utf.row_length;
	}
	else
	{
		*i_size -= cpk->data_h_utf.row_length;
	}
	*c_off = rgt_align(i_off + *i_size, align);
	*c_size -= len;
	*ep_size -= len;
	*ed_size -= len;
	--(*files);

finish:

	return result;
}

rgt_result
rgt_remove_cpk_file(rgt_arena *arena, rgt_cpk *cpk, u16 id)
{
	rgt_result result = RGT_SUCCESS;
	bool found = false;
	bool found_l = false;
	u64 len = 0;

	for (u64 i = 0; !found && i < cpk->data_l_files.length; ++i)
	{
		if (cpk->data_l_files.elems[i].id == id)
		{
			found = true;
			found_l = true;
			len = cpk->data_l_files.elems[i].data.length;
		}
	}
	for (u64 i = 0; !found && i < cpk->data_h_files.length; ++i)
	{
		if (cpk->data_h_files.elems[i].id == id)
		{
			found = true;
			len = cpk->data_h_files.elems[i].data.length;
		}
	}

	if (found)
	{
		RGT_CALL(s_file_array_remove(arena, cpk, id, found_l));
		RGT_CALL(s_data_utf_remove(arena, cpk, id, found_l));
		RGT_CALL(s_itoc_remove(arena, cpk, found_l));
		RGT_CALL(s_cpk_header_remove(cpk, len, found_l));
	}

finish:

	return result;
}

rgt_result
rgt_get_cpk_file(rgt_cpk cpk, u16 id, rgt_u8_array *out)
{
	rgt_result result = RGT_SUCCESS;
	rgt_u8_array file = {0};

	for (u64 i = 0; i < cpk.data_l_files.length; ++i)
	{
		if (cpk.data_l_files.elems[i].id == id)
		{
			file = cpk.data_l_files.elems[i].data;
			RGT_EARLY_RETURN;
		}
	}
	for (u64 i = 0; i < cpk.data_h_files.length; ++i)
	{
		if (cpk.data_h_files.elems[i].id == id)
		{
			file = cpk.data_h_files.elems[i].data;
			RGT_EARLY_RETURN;
		}
	}
	RGT_THROW(RGT_CPK_FILE_NOT_FOUND);

finish:

	if (result == RGT_SUCCESS)
	{
		*out = file;
	}

	return result;
}

void
rgt_print_utf(rgt_utf utf)
{
	printf("table_size: %u\n", utf.table_size);
	printf("rows_offset: %u\n", utf.rows_offset);
	printf("strings_offset: %u\n", utf.strings_offset);
	printf("data_offset: %u\n", utf.data_offset);
	printf("table_name_offset: %u\n", utf.table_name_offset);
	printf("pre_table_name_string: %s\n", utf.pre_table_name_string.elems);
	printf("table_name: %s\n", utf.table_name.elems);
	printf("row_length: %hu\n", utf.row_length);
	printf("num_columns: %llu\n", utf.columns.length);
	for (u64 i = 0; i < utf.columns.length; ++i)
	{
		printf("\nColumn %llu\n", i);
		printf("\tflags: %hhu\n", utf.columns.elems[i].flags);
		printf("\ttype: ");
		switch (utf.columns.elems[i].type)
		{
		case RGT_UTF_COLUMN_EMPTY:
			printf("RGT_UTF_COLUMN_EMPTY");
			break;
		case RGT_UTF_COLUMN_U8:
			printf("RGT_UTF_COLUMN_U8");
			break;
		case RGT_UTF_COLUMN_U16:
			printf("RGT_UTF_COLUMN_U16");
			break;
		case RGT_UTF_COLUMN_U32:
			printf("RGT_UTF_COLUMN_U32");
			break;
		case RGT_UTF_COLUMN_U64:
			printf("RGT_UTF_COLUMN_U64");
			break;
		case RGT_UTF_COLUMN_STRING:
			printf("RGT_UTF_COLUMN_STRING");
			break;
		case RGT_UTF_COLUMN_DATA:
			printf("RGT_UTF_COLUMN_DATA");
			break;
		}
		printf("\n");
		printf("\tname_offset: %u\n", utf.columns.elems[i].name_offset);
		printf("\tname: %s\n", utf.columns.elems[i].name.elems);
	}
	printf("num_rows: %llu\n", utf.rows.length);
	for (u64 i = 0; i < utf.rows.length; ++i)
	{
		printf("\nRow %llu\n", i);
		for (u64 j = 0; j < utf.columns.length; ++j)
		{
			printf("\tColumn: %llu, %s\n", j, utf.columns.elems[j].name.elems);
			switch(utf.columns.elems[j].type)
			{
			case RGT_UTF_COLUMN_EMPTY:
				printf("\t\tvalue: EMPTY\n");
				break;
			case RGT_UTF_COLUMN_U8:
				printf
				(
					"\t\tvalue: %hhu\n", 
					utf.rows.elems[i].elems[j].value.uint8
				);
				break;
			case RGT_UTF_COLUMN_U16:
				printf
				(
					"\t\tvalue: %hu\n", 
					utf.rows.elems[i].elems[j].value.uint16
				);
				break;
			case RGT_UTF_COLUMN_U32:
				printf
				(
					"\t\tvalue: %u\n", 
					utf.rows.elems[i].elems[j].value.uint32
				);
				break;
			case RGT_UTF_COLUMN_U64:
				printf
				(
					"\t\tvalue: %llu\n", 
					utf.rows.elems[i].elems[j].value.uint64
				);
				break;
			case RGT_UTF_COLUMN_STRING:
				printf
				(
					"\t\toffset: %u\n", 
					utf.rows.elems[i].elems[j].offset
				);
				printf
				(
					"\t\tvalue: %s\n", 
					utf.rows.elems[i].elems[j].value.string.elems
				);
				break;
			case RGT_UTF_COLUMN_DATA:
				printf
				(
					"\t\toffset: %u\n", utf.rows.elems[i].elems[j].offset
				);
				printf("\t\tvalue: DATA\n");
				printf
				(
					"\t\tlength: %llu\n", 
					utf.rows.elems[i].elems[j].value.data.length
				);
				break;
			}
			printf("\n");
		}
	}
}
