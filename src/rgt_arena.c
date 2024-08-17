#include "ryouou_gakuen_toolkit.h"

rgt_result rgt_create_arena(u64 capacity, rgt_arena *create)
{
	rgt_result result = RGT_SUCCESS;
	rgt_arena arena = {0};

	arena.data = malloc(capacity);
	RGT_ASSERT(arena.data, RGT_MEMORY_ALLOCATION_ERROR);
	arena.capacity = capacity;

finish:

	if (result == RGT_SUCCESS)
	{
		*create = arena;
	}

	return result;
}

void 
rgt_reset_arena(rgt_arena *arena) 
{
	arena->length = 0; 
}

void
rgt_destroy_arena(rgt_arena *arena) 
{
	free(arena->data);
}

rgt_result 
rgt_arena_calloc(rgt_arena *arena, u64 size, void** allocation) 
{
	rgt_result result = RGT_SUCCESS;

	RGT_ASSERT
	(
		arena->length + size <= arena->capacity, RGT_ARENA_ALLOCATION_ERROR
	);
	*allocation = &arena->data[arena->length];
	arena->length += size;
	memset(*allocation, 0, size);

finish:

	return result;
}
