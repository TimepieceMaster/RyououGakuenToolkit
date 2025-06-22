#include "ryouou_gakuen_toolkit.h"

#define FONT_FILE_PATH "assets/lt_rgo.bin"
#define OUT_PATH_COMPOSITE "results/lt_rgo.png"

int
main(void)
{
	rgt_result result = RGT_SUCCESS;
	rgt_arena arena = {0};
	rgt_u8_array font_file = {0};
	rgt_image_array font_glyph_images = {0};
	rgt_image font_composite_image = {0};

	RGT_CALL(rgt_create_arena(RGT_MEGABYTE(256), &arena));
	RGT_CALL(rgt_load_file(&arena, FONT_FILE_PATH, &font_file));
	RGT_CALL(rgt_font_to_glyph_images(&arena, font_file, RGT_KEEP_ALL_BLANK_GLYPHS, &font_glyph_images));
	RGT_CALL(rgt_glyph_images_to_composite(&arena, font_glyph_images, 0, &font_composite_image));
	RGT_CALL(rgt_save_png(&arena, font_composite_image, 6, OUT_PATH_COMPOSITE));

finish:

	rgt_destroy_arena(&arena);

	return result;
}