#include "ryouou_gakuen_toolkit.h"

static rgt_result
s_get_utf8_char_len(rgt_u8_array text, u64 pos, u64 *out)
{
	rgt_result result = RGT_SUCCESS;
	u64 len = 0;

	RGT_ASSERT(pos < text.length, RGT_OUT_OF_BOUNDS_ERROR);
	u8 byte0 = text.elems[pos];

	if ((byte0 & 0x80) == 0)
	{
		len = 1;
	}
	else if ((byte0 & 0xE0) == 0xC0)
	{
		len = 2;
	}
	else if ((byte0 & 0xF0) == 0xE0)
	{
		len = 3;
	}
	else if ((byte0 & 0xF8) == 0xF0)
	{
		len = 4;
	}
	else
	{
		RGT_THROW(RGT_INVALID_UTF8_ERROR);
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*out = len;
	}

	return result;
}

rgt_result
rgt_read_utf8_char(rgt_u8_array text, u64 *pos, rgt_utf8_char *out)
{
	rgt_result result = RGT_SUCCESS;
	rgt_utf8_char utf8 = {0};

	RGT_CALL(s_get_utf8_char_len(text, *pos, &utf8.length));
	RGT_ASSERT(*pos + utf8.length <= text.length, RGT_OUT_OF_BOUNDS_ERROR);

	memcpy(utf8.elems, &text.elems[*pos], utf8.length);

	for (u64 i = 1; i < utf8.length; ++i)
	{
		RGT_ASSERT((utf8.elems[i] & 0xC0) == 0x80, RGT_INVALID_UTF8_ERROR);
	}
	*pos += utf8.length;

finish:

	if (result == RGT_SUCCESS)
	{
		*out = utf8;
	}

	return result;
}

rgt_result
rgt_utf8_strlen(rgt_u8_array string, u64 pos, u64 *out)
{
	rgt_result result = RGT_SUCCESS;
	u64 len = 0;
	u64 char_len = 0;

	while (pos < string.length)
	{
		RGT_CALL(s_get_utf8_char_len(string, pos, &char_len));
		pos += char_len;
		++len;
	}
	RGT_ASSERT(pos == string.length, RGT_INVALID_UTF8_ERROR);

finish:

	if (result == RGT_SUCCESS)
	{
		*out = len;
	}

	return result;
}

bool
rgt_utf8_char_equals(rgt_utf8_char lhs, rgt_utf8_char rhs)
{
	if (lhs.length != rhs.length)
	{
		return false;
	}
	for (u64 i = 0; i < lhs.length; ++i)
	{
		if (lhs.elems[i] != rhs.elems[i])
		{
			return false;
		}
	}
	return true;
}

rgt_result
rgt_read_utf8_string
(
	rgt_arena *arena, rgt_u8_array string, u64 *pos, rgt_utf8_string *out
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_utf8_string utf8_string = {0};

	RGT_CALL(rgt_utf8_strlen(string, *pos, &utf8_string.length));
	RGT_CREATE_ARRAY(arena, utf8_string.length, &utf8_string);
	for (u64 i = 0; i < utf8_string.length; ++i)
	{
		RGT_CALL
		(
			rgt_read_utf8_char(string, pos, &utf8_string.elems[i]);
		);
	}

finish:

	if (result == RGT_SUCCESS)
	{
		*out = utf8_string;
	}

	return result;
}
