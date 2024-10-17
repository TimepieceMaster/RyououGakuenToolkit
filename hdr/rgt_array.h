#ifndef RGT_ARRAY_H
#define RGT_ARRAY_H

#include "rgt_assert.h"
#include "rgt_sized_int.h"
#include "rgt_result.h"
#include "rgt_arena.h"

#define RGT_DECLARE_ARRAY_TYPE(type, name) \
typedef struct _##name                     \
{                                          \
	type *elems;                           \
	u64 capacity;                          \
	u64 length;                            \
} name;

RGT_DECLARE_ARRAY_TYPE(u8, rgt_u8_array)
RGT_DECLARE_ARRAY_TYPE(u16, rgt_u16_array)
RGT_DECLARE_ARRAY_TYPE(u32, rgt_u32_array)
RGT_DECLARE_ARRAY_TYPE(char, rgt_char_array)

rgt_result 
rgt_create_array
(
	rgt_arena *arena, u64 length, u64 element_size, 
	void *array_create
);

rgt_result 
rgt_append_array
(
	rgt_arena *arena, void *element, u64 element_size, 
	void *array_append
);

rgt_result
rgt_resize_array
(
	rgt_arena *arena, u64 new_length, u64 element_size, 
	void* array_resize 
);

#define RGT_CREATE_ARRAY(arena, length, arr)                               \
do                                                                         \
{                                                                          \
	RGT_CALL(rgt_create_array(arena, length, sizeof(*(arr)->elems), arr)); \
} while(0);

#define RGT_APPEND_ARRAY(arena, element, arr)                            \
do                                                                       \
{                                                                        \
	RGT_CALL                                                             \
	(                                                                    \
		rgt_append_array(arena, element, sizeof((*(arr)).elems[0]), arr) \
	);                                                                   \
} while(0);

#define RGT_RESIZE_ARRAY(arena, new_length, arr)                            \
do                                                                          \
{                                                                           \
	RGT_CALL                                                                \
	(                                                                       \
		rgt_resize_array(arena, new_length, sizeof((*(arr)).elems[0]), arr) \
	);                                                                      \
} while(0);

#define RGT_ARRAY_SIZE(arr) \
(arr.length * sizeof(arr.elems[0]))

#define RGT_C_ARRAY_SIZE(arr) \
(sizeof(arr) / sizeof(arr[0]))

#endif