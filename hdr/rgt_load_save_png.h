#ifndef RGT_LOAD_SAVE_PNG_H
#define RGT_LOAD_SAVE_PNG_H

#include "rgt_result.h"
#include "rgt_image.h"

rgt_result 
rgt_load_png(rgt_arena *arena, const char *path, rgt_image *create);

rgt_result 
rgt_save_png
(
	rgt_arena *arena, rgt_image image, int compression_level, const char *path
);

#endif