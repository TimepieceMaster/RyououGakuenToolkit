#ifndef EBOOT_PATCH_STRUCTURES_H
#define EBOOT_PATCH_STRUCTURES_H

#include "ryouou_gakuen_toolkit.h"

typedef struct _texture_region_offset_2D
{
	u16 x;
	u16 y;
} texture_region_offset_2D;

typedef struct _texture_region_extent_2D
{
	u16 width;
	u16 height;
} texture_region_extent_2D;

typedef struct _texture_region_info
{
	u64 read_top_left_offset;
	texture_region_offset_2D read_top_left;
	
	u64 write_top_left_offset;
	texture_region_offset_2D write_top_left;

	u64 read_size_offset;
	texture_region_extent_2D read_size;

	u64 write_size_offset;
	texture_region_extent_2D write_size;
} texture_region_info;

#define REGION_INFO_UNUSED 0
#define REGION_INFO_IGNORE 0xFFFF

RGT_DECLARE_ARRAY_TYPE(texture_region_info, texture_region_info_array)

typedef struct _single_instruction_patch
{
	u64 offset;
	u32 value;
} single_instruction_patch;

RGT_DECLARE_ARRAY_TYPE(single_instruction_patch, single_instruction_patch_array)

typedef struct _byte_sequence_patch
{
	u64 offset;
	u64 length;
	const char* bytes;
} byte_sequence_patch;

RGT_DECLARE_ARRAY_TYPE(byte_sequence_patch, byte_sequence_patch_array)

#define BUILD_BYTE_SEQUENCE_PATCH(off, data) \
{off, sizeof(data) - 1, data}

#endif