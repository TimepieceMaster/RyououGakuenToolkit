#define _CRT_SECURE_NO_WARNINGS

#include "ryouou_gakuen_toolkit.h"

#define CPK_PATH "assets/sc_nim.cpk"
#define CPK_NAME "sc_nim"

int
main(void)
{
	rgt_result result = RGT_SUCCESS;
	rgt_arena arena = {0};
	rgt_u8_array cpk_file = {0};
	rgt_cpk cpk = {0};
	
	RGT_CALL(rgt_create_arena(RGT_GIGABYTE(1), &arena));
	RGT_CALL(rgt_load_file(&arena, CPK_PATH, &cpk_file));
	RGT_CALL(rgt_parse_cpk(&arena, cpk_file, &cpk));
	for (u64 i = 0; i < cpk.data_l_files.length; ++i)
	{
		char out_path[1024] = {0};
		sprintf(out_path, "results/%s/%hu", CPK_NAME, cpk.data_l_files.elems[i].id);
		RGT_CALL(rgt_save_file(cpk.data_l_files.elems[i].data, out_path));
		printf("%s\n", out_path);
	}
	for (u64 i = 0; i < cpk.data_h_files.length; ++i)
	{
		char out_path[1024] = {0};
		sprintf(out_path, "results/%s/%hu", CPK_NAME, cpk.data_h_files.elems[i].id);
		RGT_CALL(rgt_save_file(cpk.data_h_files.elems[i].data, out_path));
		printf("%s\n", out_path);
	}

finish:

	rgt_destroy_arena(&arena);

	return result;
}