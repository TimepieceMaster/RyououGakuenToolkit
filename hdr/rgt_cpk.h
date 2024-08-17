#ifndef RGT_CPK_H
#define RGT_CPK_H

#include <stdbool.h>

#include "rgt_sized_int.h"
#include "rgt_array.h"
#include "rgt_result.h"

typedef struct _rgt_utf_packet
{
	u32 unk;
	bool is_ecrypted;
	rgt_u8_array data;
} rgt_utf_packet;

typedef enum _rgt_utf_column_type
{
	RGT_UTF_COLUMN_EMPTY,
	RGT_UTF_COLUMN_U8,
	RGT_UTF_COLUMN_U16,
	RGT_UTF_COLUMN_U32,
	RGT_UTF_COLUMN_U64,
	RGT_UTF_COLUMN_F32,
	RGT_UTF_COLUMN_STRING,
	RGT_UTF_COLUMN_DATA
} rgt_utf_column_type;

typedef struct _rgt_utf_column
{
	u8 flags;
	rgt_utf_column_type type;
	u32 name_offset;
	rgt_u8_array name;
} rgt_utf_column;

typedef union _rgt_utf_value 
{
	u8 uint8;
	u16 uint16;
	u32 uint32;
	u64 uint64;
	f32 float32;
	rgt_u8_array string;
	rgt_u8_array data;
} rgt_utf_value;

typedef struct _rgt_utf_entry
{
	u32 offset;
	rgt_utf_value value;
} rgt_utf_entry;

RGT_DECLARE_ARRAY_TYPE(rgt_utf_column, rgt_utf_column_array)
RGT_DECLARE_ARRAY_TYPE(rgt_utf_entry, rgt_utf_row)
RGT_DECLARE_ARRAY_TYPE(rgt_utf_row, rgt_utf_row_array)

typedef struct _rgt_utf
{
	u32 table_size;
	u32 rows_offset;
	u32 strings_offset;
	u32 data_offset;
	u32 table_name_offset;
	rgt_u8_array pre_table_name_string;
	rgt_u8_array table_name;
	u16 row_length;
	rgt_utf_column_array columns;
	rgt_utf_row_array rows;
} rgt_utf;

typedef struct _rgt_cpk_file
{
	u16 id;
	rgt_u8_array data;
} rgt_cpk_file;

RGT_DECLARE_ARRAY_TYPE(rgt_cpk_file, rgt_cpk_file_array)

typedef struct _rgt_cpk
{
	rgt_utf_packet header_packet;
	rgt_utf header_utf;
	rgt_utf_packet itoc_packet;
	rgt_utf itoc_utf;
	rgt_utf data_l_utf;
	rgt_utf data_h_utf;
	rgt_cpk_file_array data_l_files;
	rgt_cpk_file_array data_h_files;
} rgt_cpk;

rgt_result
rgt_parse_cpk(rgt_arena *arena, rgt_u8_array in, rgt_cpk *create);

rgt_result
rgt_build_cpk(rgt_arena *arena, rgt_cpk cpk, rgt_u8_array *create);

rgt_result
rgt_add_cpk_file(rgt_arena *arena, rgt_cpk *cpk, u16 id, rgt_u8_array file);

rgt_result
rgt_remove_cpk_file(rgt_arena *arena, rgt_cpk *cpk, u16 id);

rgt_result
rgt_get_cpk_file(rgt_cpk cpk, u16 id, rgt_u8_array *out);

void
rgt_print_utf(rgt_utf utf);

#endif