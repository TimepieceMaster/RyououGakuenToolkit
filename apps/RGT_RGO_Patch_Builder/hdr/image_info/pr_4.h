#ifndef PR_4_H
#define PR_4_H

#include "eboot_patch_structures.h"

static texture_region_info s_pr_4_regions_data[] =
{
	/* Take Pic */
	{
		.read_top_left_offset = 0xFF70C,
		.read_top_left = { 46, 36 },
		.read_size_offset = 0xFE250,
		.read_size = { 76, 20 },
		.write_size_offset = 0xFE254,
		.write_size = { 76, 20 }
	},

	/* Exit */
	{
		.read_top_left_offset = 0xFF710,
		.read_top_left = { 122, 36 },
		.read_size_offset = 0xFE258,
		.read_size = { 48, 20 },
		.write_size_offset = 0xFE25C,
		.write_size = { 48, 20 }
	}
};

static single_instruction_patch s_pr_4_single_instruction_patches[] =
{
	{ 0x209D8, 0x340500D2 }, /* Take Pic x-position */
	{ 0x209F0, 0x3405012A }  /* Hide Textbox x-position */
};

texture_region_info_array g_pr_4_regions =
{
	.elems = s_pr_4_regions_data,
	.length = RGT_C_ARRAY_SIZE(s_pr_4_regions_data)
};

single_instruction_patch_array g_pr_4_single_instruction_patches =
{
	.elems = s_pr_4_single_instruction_patches,
	.length = RGT_C_ARRAY_SIZE(s_pr_4_single_instruction_patches)
};

#endif