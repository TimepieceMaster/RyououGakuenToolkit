#include <stdio.h>
#include <stdlib.h>

#include "ryouou_gakuen_toolkit.h"

static rgt_result
s_get_file_size(FILE *file_handle, u64 *out_file_size)
{
	rgt_result result = RGT_SUCCESS;
	long file_end_pos = 0;
	u64 file_size = 0;

	RGT_ASSERT
	(
		fseek(file_handle, 0, SEEK_END) == 0, RGT_FILE_ACCESS_ERROR
	);
	file_end_pos = ftell(file_handle);
	RGT_ASSERT(file_end_pos > -1L, RGT_FILE_ACCESS_ERROR);
	RGT_ASSERT
	(
		fseek(file_handle, 0, SEEK_SET) == 0, RGT_FILE_ACCESS_ERROR
	);
	file_size = (u64)file_end_pos;

finish:

	if (result == RGT_SUCCESS)
	{
		*out_file_size = file_size;
	}

	return result;
}

rgt_result
rgt_load_file(rgt_arena *arena, const char *file_path, rgt_u8_array *create)
{
	rgt_result result = RGT_SUCCESS;
	FILE *file_handle = NULL;
	rgt_u8_array file_contents = {0};

	RGT_FOPEN(file_handle, file_path, "rb");
	RGT_CALL(s_get_file_size(file_handle, &file_contents.length));
	RGT_CREATE_ARRAY(arena, file_contents.length, &file_contents);

	RGT_FREAD(file_contents.elems, file_contents.length, file_handle);

finish:

	RGT_FCLOSE(file_handle);

	if (result == RGT_SUCCESS) 
	{
		*create = file_contents;
	}

	return result;
}

rgt_result
rgt_save_file(rgt_u8_array data, const char *path)
{
	rgt_result result = RGT_SUCCESS;
	FILE *file = NULL;

	RGT_FOPEN(file, path, "wb");

	RGT_FWRITE(data.elems, data.length, file);

finish:

	RGT_FCLOSE(file);

	return result;
}
