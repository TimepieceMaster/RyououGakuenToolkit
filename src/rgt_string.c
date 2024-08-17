#include <stdbool.h>

#include "ryouou_gakuen_toolkit.h"

static bool
s_at_newline(rgt_u8_array text, u64 pos, u64 *out_newline_length)
{
	if (text.elems[pos] == '\r' && pos + 1 < text.length) 
	{
		if (text.elems[pos + 1] == '\n') 
		{
			*out_newline_length = 2;
			return true;
		}
	}
	if (text.elems[pos] == '\n') 
	{
		*out_newline_length = 1;
		return true;
	} 
	return false;
}

rgt_result
rgt_c_strnlen(u8 *str, u64 max_len, u64 *out) 
{
	rgt_result result = RGT_SUCCESS;

	bool end_found = false;
	u64 len = 0;
	for (len = 0; len < max_len && !end_found; ++len) 
	{
		if (str[len] == '\0') 
		{
			end_found = true;
			break;
		}
	}
	RGT_ASSERT(end_found, RGT_OVERFLOW_ERROR);

finish:

	if (result == RGT_SUCCESS) 
	{
		*out = len;
	}

	return result;
}

u64 
rgt_get_line_count(rgt_u8_array text)
{
	u64 num_lines = 0;
	u64 line_end_pos = 0;
	for (u64 i = 0; i < text.length; ++i) 
	{
		if (text.elems[i] == '\n') 
		{
			++num_lines;
			line_end_pos = i + 1;
		}
	}
	if (line_end_pos != text.length) 
	{
		++num_lines;
	}

	return num_lines;
}

u64
rgt_get_line_length(rgt_u8_array text, u64 start_pos, u64 *out_newline_length)
{
	u64 len = 0;
	for (u64 i = start_pos; i < text.length; ++i)
	{
		if (s_at_newline(text, i, out_newline_length))
		{
			break;
		}
		++len;
	}
	return len;
}

rgt_result
rgt_text_to_lines
(
	rgt_arena *arena, rgt_u8_array text, rgt_string_array *create
)
{
	rgt_string_array lines = {0};
	u64 num_strings = 0;
	rgt_result result = RGT_SUCCESS;

	u64 num_lines = rgt_get_line_count(text);
	RGT_CREATE_ARRAY(arena, num_lines, &lines);

	u64 line_start = 0;
	u64 line_len = 0;
	for (u64 i = 0; i < num_lines; ++i)
	{
		u64 newline_len = 0;
		u64 line_len = rgt_get_line_length(text, line_start, &newline_len);

		rgt_u8_array *next_string = &lines.elems[i];
		u8* string_start = &text.elems[line_start];
		RGT_CREATE_ARRAY(arena, line_len, next_string);
		memcpy(next_string->elems, string_start, line_len);

		line_start += line_len + newline_len;
	}

finish:

	if (result == RGT_SUCCESS) 
	{
		*create = lines;
	}

	return result;
}

rgt_result
rgt_lines_to_text
(
	rgt_arena *arena, rgt_string_array lines, rgt_u8_array *create
)
{
	rgt_u8_array strings_file = {.length = 2 * lines.length};
	rgt_result result = RGT_SUCCESS;

	for (u64 i = 0; i < lines.length; ++i) 
	{
		strings_file.length += lines.elems[i].length;
	}
	RGT_CREATE_ARRAY(arena, strings_file.length, &strings_file);

	u64 file_pos = 0;
	for (u64 i = 0; i < lines.length; ++i) 
	{
		rgt_u8_array *line = &lines.elems[i];
		memcpy(&strings_file.elems[file_pos], line->elems, line->length);
		file_pos += lines.elems[i].length;
		strings_file.elems[file_pos] = '\r';
		strings_file.elems[file_pos + 1] = '\n';
		file_pos += 2;
	}

finish:

	if (result == RGT_SUCCESS) 
	{
		*create = strings_file;
	}

	return result;
}

rgt_result
rgt_read_c_string
(
	rgt_arena *arena, rgt_u8_array in, u64 *pos, rgt_u8_array *create
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_u8_array str = {0};

	RGT_CALL
	(
		rgt_c_strnlen(&in.elems[*pos], in.length - *pos, &str.length)
	);
	RGT_CREATE_ARRAY(arena, str.length + 1, &str);
	memcpy(str.elems, &in.elems[*pos], str.length);
	*pos += str.length;
	
finish:

	if (result == RGT_SUCCESS)
	{
		*create = str;
	}

	return result;
}
