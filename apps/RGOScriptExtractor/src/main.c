#include "ryouou_gakuen_toolkit.h"

#define CPK_PATH "assets/sc.cpk"
#define SCRIPT_ID 2
#define OUT_PATH "results/Script2.bin"

int 
main(void)
{
	rgt_result result = RGT_SUCCESS;
	rgt_arena arena = {0};
	rgt_u8_array script_cpk_file = {0};
	rgt_cpk script_cpk = {0};
	rgt_u8_array script_file = {0};
	rgt_rgo_script script = {0};
	rgt_u8_array new_script = {0};

	RGT_CALL(rgt_create_arena(RGT_MEGABYTE(32), &arena));
	RGT_CALL(rgt_load_file(&arena, CPK_PATH, &script_cpk_file));
	RGT_CALL(rgt_parse_cpk(&arena, script_cpk_file, &script_cpk));
	RGT_CALL(rgt_get_cpk_file(script_cpk, SCRIPT_ID, &script_cpk_file));
	RGT_CALL(rgt_parse_rgo_script(&arena, script_cpk_file, &script));
	RGT_CALL(rgt_build_rgo_script(&arena, script, &new_script));
	RGT_CALL(rgt_save_file(new_script, OUT_PATH));

finish:

	rgt_destroy_arena(&arena);

	return result;
}