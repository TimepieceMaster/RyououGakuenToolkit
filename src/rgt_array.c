#include "ryouou_gakuen_toolkit.h"

RGT_DECLARE_ARRAY_TYPE(void, rgt_generic_array)

rgt_result 
rgt_create_array
(
	rgt_arena *arena, u64 length, u64 element_size, 
	void *array_create
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_generic_array *arr = array_create;

	arr->length = length;
	arr->capacity = length;
	RGT_CALL(rgt_arena_calloc(arena, length * element_size, &arr->elems));

finish:

	return result;
}

rgt_result
rgt_append_array
(
	rgt_arena *arena, void *element, u64 element_size, void *array_append
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_generic_array *arr = array_append;

	if (arr->capacity == 0)
	{
		arr->capacity = 1;
		RGT_CALL
		(
			rgt_arena_calloc
			(
				arena, arr->capacity * element_size, &arr->elems
			)
		);
	}
	else if (arr->length + 1 > arr->capacity) 
	{
		void * old_ptr = arr->elems;
		RGT_CALL
		(
			rgt_arena_calloc
			(
				arena, arr->capacity * 2 * element_size, &arr->elems
			)
		);
		arr->capacity *= 2;
		memcpy(arr->elems, old_ptr, arr->length * element_size);
	}

	memcpy
	(
		(u8*)(arr->elems) + (element_size * arr->length), 
		element, element_size
	);
	++arr->length;

finish:

	return result;
}

rgt_result
rgt_resize_array
(
	rgt_arena *arena, u64 new_length, u64 element_size, 
	void* array_resize 
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_generic_array *arr = array_resize;

	if (arr->capacity == 0)
	{
		RGT_CALL
		(
			rgt_arena_calloc(arena, new_length * element_size, &arr->elems)
		);
		arr->length = new_length;
		arr->capacity = new_length;
	}
	else if (arr->capacity >= new_length)
	{
		arr->length = new_length;
	}
	else
	{
		void * old_ptr = arr->elems;
		RGT_CALL
		(
			rgt_arena_calloc
			(
				arena, new_length * element_size, &arr->elems
			)
		);
		memcpy(arr->elems, old_ptr, arr->length * element_size);
		arr->length = new_length;
		arr->capacity = new_length;
	}

finish:

	return result;
}
