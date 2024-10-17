#include "ryouou_gakuen_toolkit.h"
#include "rgo_pr_image_info.h"

#define UNION_PATH "assets\\union.cpk"
#define PR_PATH "assets\\pr.bin"
#define PNG_PATH "assets\\2538_0.png"
#define IMAGE_ID 2538
#define IMAGE_INDEX 0
#define OUT_PATH "results\\2538_0.png"
#define IS_UNION true

int
main(void)
{
	rgt_result result = RGT_SUCCESS;
	rgt_arena arena = {0};
	rgt_image image = {0};
	rgt_cpk union_cpk = {0};
	rgt_u8_array rgo_image_file = {0};
	rgt_rgo_image_array rgo_images = {0};
	rgt_color_array palette = {0};

	RGT_CALL(rgt_create_arena(RGT_GIGABYTE(2), &arena));
	RGT_CALL(rgt_load_png(&arena, PNG_PATH, &image));

	if (IS_UNION)
	{
		rgt_u8_array union_file = {0};

		RGT_CALL(rgt_load_file(&arena, UNION_PATH, &union_file));
		RGT_CALL(rgt_parse_cpk(&arena, union_file, &union_cpk));
		RGT_CALL(rgt_get_cpk_file(union_cpk, IMAGE_ID, &rgo_image_file));
		RGT_CALL
		(
			rgt_parse_rgo_image_file(&arena, rgo_image_file, &rgo_images)
		);
	}
	else
	{
		rgt_u8_array pr_file = {0};

		RGT_CALL(rgt_load_file(&arena, PR_PATH, &pr_file));
		RGT_CALL
		(
			rgt_parse_rgo_pr_file
			(
				&arena, pr_file, g_rgo_pr_image_infos, &rgo_images
			)
		);
	}

	palette = rgo_images.elems[IMAGE_INDEX].palette.colors;
	rgt_comform_to_palette(image, palette);
	RGT_CALL(rgt_save_png(&arena, image, 6, OUT_PATH));

finish:

	rgt_destroy_arena(&arena);

	return result;
}
