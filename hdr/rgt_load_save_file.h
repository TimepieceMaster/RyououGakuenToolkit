#ifndef RGT_LOAD_SAVE_FILE_H
#define RGT_LOAD_SAVE_FILE_H

#include "rgt_result.h"
#include "rgt_array.h"

rgt_result
rgt_load_file(rgt_arena *arena, const char *file_path, rgt_u8_array *create);

rgt_result 
rgt_save_file(rgt_u8_array data, const char *path);

#endif