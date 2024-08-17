#ifndef UNION_2531_1_H
#define UNION_2531_1_H

#include "eboot_patch_structures.h"

/* Both the save and load screen use the same regions. */

static texture_region_info s_union_2531_1_regions_data[] =
{
	/* Player Name Heading */
	{
		.read_top_left_offset = 0x100080,
		.read_top_left = { 164, 114 },
		.write_top_left_offset = 0x1015DC,
		.write_top_left = { 77, 79 },
		.read_size_offset = 0xFF538,
		.read_size = { 70, 10 },
		.write_size_offset = 0xFF53C,
		.write_size = { 70, 10 },
	},

	/* Episode Heading */
	{
		.read_top_left_offset = 0x100088,
		.read_top_left = { 114, 114 },
		.write_top_left_offset = 0x1015E4,
		.write_top_left = { 307, 79 },
		.read_size_offset = 0xFF548,
		.read_size = { 44, 10 },
		.write_size_offset = 0xFF54C,
		.write_size = { 44, 10 },
	}
};

texture_region_info_array g_union_2531_1_regions =
{
	.elems = s_union_2531_1_regions_data,
	.length = RGT_C_ARRAY_SIZE(s_union_2531_1_regions_data)
};

#endif