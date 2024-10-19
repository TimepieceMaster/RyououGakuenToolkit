#ifndef RGT_UTF8_H
#define RGT_UTF8_H

#include "rgt_array.h"

#define RGT_MAX_UTF8_CHAR_LENGTH 4

typedef struct _rgt_utf8_char
{
	u8 elems[RGT_MAX_UTF8_CHAR_LENGTH];
	u64 length;
} rgt_utf8_char;

RGT_DECLARE_ARRAY_TYPE(rgt_utf8_char, rgt_utf8_string)
RGT_DECLARE_ARRAY_TYPE(rgt_utf8_string, rgt_utf8_string_array)

rgt_result
rgt_read_utf8_char(rgt_u8_array text, u64 *pos, rgt_utf8_char *out);

rgt_result
rgt_utf8_strlen(rgt_u8_array string, u64 pos, u64 *out);

bool
rgt_utf8_char_equals(rgt_utf8_char lhs, rgt_utf8_char rhs);

bool
rgt_utf8_string_equals(rgt_utf8_string lhs, rgt_utf8_string rhs);

rgt_result
rgt_read_utf8_string
(
	rgt_arena *arena, rgt_u8_array string, u64 *pos, rgt_utf8_string *out
);

#endif