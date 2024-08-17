#ifndef RGT_STRING_H
#define RGT_STRING_H

#include "rgt_result.h"
#include "rgt_sized_int.h"
#include "rgt_array.h"

RGT_DECLARE_ARRAY_TYPE(rgt_u8_array, rgt_string_array)

rgt_result
rgt_c_strnlen(u8 *str, u64 max_len, u64 *out);

u64 
rgt_get_line_count(rgt_u8_array text);

u64
rgt_get_line_length(rgt_u8_array text, u64 start_pos, u64 *out_newline_length);

rgt_result
rgt_text_to_lines
(
	rgt_arena *arena, rgt_u8_array text, rgt_string_array *create
);

rgt_result
rgt_lines_to_text
(
	rgt_arena *arena, rgt_string_array lines, rgt_u8_array *create
);

rgt_result
rgt_read_c_string
(
	rgt_arena *arena, rgt_u8_array in, u64 *pos, rgt_u8_array *create
);

#endif