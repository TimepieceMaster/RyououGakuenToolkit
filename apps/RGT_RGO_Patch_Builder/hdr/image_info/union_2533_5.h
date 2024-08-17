#ifndef UNION_2533_5_H
#define UNION_2533_5_H

#include "eboot_patch_structures.h"

static single_instruction_patch s_union_2533_5_instruction_patches_data[] =
{
	{ 0x52460, 0x26240064 }, /* "Disk" screen X = 100 */
	{ 0x52484, 0x26240098 }, /* Disk # start X = 152 */
	{ 0x202B8, 0x34070009 }, /* Stride between disk #s = 9 */
	{ 0x524D4, 0x262400C1 }, /* Song name X = 193 */
};

single_instruction_patch_array g_union_2533_5_instruction_patches =
{
	.elems = s_union_2533_5_instruction_patches_data,
	.length = RGT_C_ARRAY_SIZE(s_union_2533_5_instruction_patches_data)
};

#endif