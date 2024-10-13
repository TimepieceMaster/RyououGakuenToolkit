#ifndef UNION_2528_1_H
#define UNION_2528_1_H

#include "eboot_patch_structures.h"

static texture_region_info s_union_2521_1_regions_data[] =
{
	/* Logo */
	{ 
		.read_size_offset = 0xFE5E0,
		.read_size = { 328, 112 },
		.write_size_offset = 0xFE5E4,
		.write_size = { 328, 112 }
	},

	/* PRESS START */
	{
		.read_top_left_offset = 0xFF89C,
		.read_top_left = { 332, 1 },
		.read_size_offset = 0xFE570,
		.read_size = { 169, 18 },
		.write_size_offset = 0xFE574,
		.write_size = { 169, 18 }
	},

	/* Continue */
	{ 
		.read_top_left_offset = 0xFF8A4,
		.read_top_left = { 332, 35 },
		.write_top_left_offset = 0x103A48,
		.write_top_left = { 205, 134 },
		.read_size_offset = 0xFE580,
		.read_size = { 71, 18 },
		.write_size_offset = 0xFE584,
		.write_size = { 71, 18 },
	},

	/* New File */
	{ 
		.read_top_left_offset = 0xFF8A8,
		.read_top_left = { 332, 18 },
		.write_top_left_offset = 0x103A4C,
		.write_top_left = { 206, 161 },
		.read_size_offset = 0xFE588,
		.read_size = { 70, 18 },
		.write_size_offset = 0xFE58C,
		.write_size = { 70, 18 },
	},

	/* Options */
	{ 
		.read_top_left_offset = 0xFF8AC,
		.read_top_left = { 408, 36 },
		.write_top_left_offset = 0x103A50,
		.write_top_left = { 209, 188 },
		.read_size_offset = 0xFE590,
		.read_size = { 62, 18 },
		.write_size_offset = 0xFE594,
		.write_size = { 62, 18 },
	},

	/* Extras */
	{ 
		.read_top_left_offset = 0xFF8B0,
		.read_top_left = { 421, 19 },
		.write_top_left_offset = 0x103A54,
		.write_top_left = { 215, 215 },
		.read_size_offset = 0xFE598,
		.read_size = { 53, 16 },
		.write_size_offset = 0xFE59C,
		.write_size = { 53, 16 },
	},

	/* Install (disabled) */
	{ 
		.read_top_left_offset = 0xFF8B4,
		.read_top_left = { 332, 53 },
		.write_top_left_offset = 0x103A58,
		.write_top_left = { 215, 222 },
		.read_size_offset = 0xFE5A0,
		.read_size = { 51, 18 },
		.write_size_offset = 0xFE5A4,
		.write_size = { 51, 18 },
	},

	/* Copyright */
	{ 
		.read_top_left_offset = 0xFF8D0,
		.read_top_left = { 276, 111 },
		.read_size_offset = 0xFE5D8,
		.read_size = { 232, 13 },
		.write_size_offset = 0xFE5DC,
		.write_size = { 232, 13 },
	}
};

static single_instruction_patch s_union_2521_1_instruction_patches_data[] =
{
	{ 0x47344, 0x3405007C }, /* Logo screen X */
	{ 0x472A8, 0x2AA40004 }, /* Don't draw install option */

	/* Disable ability to select install. */
	{ 0x4771C, 0x28840004 },
	{ 0x47744, 0x34040003 }
};

texture_region_info_array g_union_2521_1_regions =
{
	.elems = s_union_2521_1_regions_data,
	.length = RGT_C_ARRAY_SIZE(s_union_2521_1_regions_data)
};

single_instruction_patch_array g_union_2521_1_instruction_patches =
{
	.elems = s_union_2521_1_instruction_patches_data,
	.length = RGT_C_ARRAY_SIZE(s_union_2521_1_instruction_patches_data)
};


#endif