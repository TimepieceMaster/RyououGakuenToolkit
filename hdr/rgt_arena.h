#ifndef RGT_ARENA_H
#define RGT_ARENA_H

#include "rgt_sized_int.h"
#include "rgt_result.h"

#define RGT_KILOBYTE(x) ((x) * (u64)1024)
#define RGT_MEGABYTE(x) ((x) * (u64)1024 * (u64)1024)
#define RGT_GIGABYTE(x) ((x) * (u64)1024 * (u64)1024 * (u64)1024)

typedef struct _rgt_arena
{
	u8 *data;
	u64 capacity;
	u64 length;
} rgt_arena;

rgt_result rgt_create_arena(u64 capacity, rgt_arena *create);
void rgt_reset_arena(rgt_arena *arena);
void rgt_destroy_arena(rgt_arena *arena);
rgt_result rgt_arena_calloc(rgt_arena *arena, u64 size, void** allocation);

#endif