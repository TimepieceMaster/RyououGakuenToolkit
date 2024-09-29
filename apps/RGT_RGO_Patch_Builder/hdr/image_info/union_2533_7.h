#ifndef UNION_2533_7_H
#define UNION_2533_7_H

#include "eboot_patch_structures.h"

static texture_region_info s_union_2533_7_regions_data[] =
{
	/* Konata */
	{
		.read_top_left_offset = 0xFFA4C + 0x0,
		.read_top_left = {0, 0},
		.read_size_offset = 0xFE8D0 + 0x0,
		.read_size = {68, 24},
		.write_size_offset = 0xFE8D0 + 0x4,
		.write_size = {68, 24}
	},

	/* Kagami */
	{
		.read_top_left_offset = 0xFFA4C + 0x4,
		.read_top_left = {68, 0},
		.read_size_offset = 0xFE8D0 + 0x8,
		.read_size = {72, 24},
		.write_size_offset = 0xFE8D0 + 0xC,
		.write_size = {72, 24}
	},

	/* Tsukasa */
	{
		.read_top_left_offset = 0xFFA4C + 0x8,
		.read_top_left = {140, 0},
		.read_size_offset = 0xFE8D0 + 0x10,
		.read_size = {75, 24},
		.write_size_offset = 0xFE8D0 + 0x14,
		.write_size = {75, 24}
	},

	/* Miyuki */
	{
		.read_top_left_offset = 0xFFA4C + 0xC,
		.read_top_left = {215, 0},
		.read_size_offset = 0xFE8D0 + 0x18,
		.read_size = {66, 24},
		.write_size_offset = 0xFE8D0 + 0x1C,
		.write_size = {66, 24}
	},

	/* Misao */
	{
		.read_top_left_offset = 0xFFA4C + 0x10,
		.read_top_left = {281, 0},
		.read_size_offset = 0xFE8D0 + 0x20,
		.read_size = {59, 24},
		.write_size_offset = 0xFE8D0 + 0x24,
		.write_size = {59, 24}
	},

	/* Ayano */
	{
		.read_top_left_offset = 0xFFA4C + 0x14,
		.read_top_left = {0, 48},
		.read_size_offset = 0xFE8D0 + 0x28,
		.read_size = {63, 24},
		.write_size_offset = 0xFE8D0 + 0x2C,
		.write_size = {63, 24}
	},

	/* Kou */
	{
		.read_top_left_offset = 0xFFA4C + 0x18,
		.read_top_left = {63, 48},
		.read_size_offset = 0xFE8D0 + 0x30,
		.read_size = {40, 24},
		.write_size_offset = 0xFE8D0 + 0x34,
		.write_size = {40, 24}
	},

	/* Yutaka */
	{
		.read_top_left_offset = 0xFFA4C + 0x1C,
		.read_top_left = {103, 48},
		.read_size_offset = 0xFE8D0 + 0x38,
		.read_size = {66, 24},
		.write_size_offset = 0xFE8D0 + 0x3C,
		.write_size = {66, 24}
	},

	/* Minami */
	{
		.read_top_left_offset = 0xFFA4C + 0x20,
		.read_top_left = {169, 48},
		.read_size_offset = 0xFE8D0 + 0x40,
		.read_size = {73, 24},
		.write_size_offset = 0xFE8D0 + 0x44,
		.write_size = {73, 24}
	},

	/* Hiyori */
	{
		.read_top_left_offset = 0xFFA4C + 0x24,
		.read_top_left = {242, 48},
		.read_size_offset = 0xFE8D0 + 0x48,
		.read_size = {60, 24},
		.write_size_offset = 0xFE8D0 + 0x4C,
		.write_size = {60, 24}
	},

	/* Patty */
	{
		.read_top_left_offset = 0xFFA4C + 0x28,
		.read_top_left = {0, 96},
		.read_size_offset = 0xFE8D0 + 0x50,
		.read_size = {52, 24},
		.write_size_offset = 0xFE8D0 + 0x54,
		.write_size = {52, 24}
	},

	/* Yamato */
	{
		.read_top_left_offset = 0xFFA4C + 0x2C,
		.read_top_left = {52, 96},
		.read_size_offset = 0xFE8D0 + 0x58,
		.read_size = {73, 24},
		.write_size_offset = 0xFE8D0 + 0x5C,
		.write_size = {73, 24}
	},

	/* Nanako */
	{
		.read_top_left_offset = 0xFFA4C + 0x30,
		.read_top_left = {125, 96},
		.read_size_offset = 0xFE8D0 + 0x60,
		.read_size = {74, 24},
		.write_size_offset = 0xFE8D0 + 0x64,
		.write_size = {74, 24}
	},

	/* Hikaru */
	{
		.read_top_left_offset = 0xFFA4C + 0x34,
		.read_top_left = {199, 96},
		.read_size_offset = 0xFE8D0 + 0x68,
		.read_size = {65, 24},
		.write_size_offset = 0xFE8D0 + 0x6C,
		.write_size = {65, 24}
	},

	/* Fuyuki */
	{
		.read_top_left_offset = 0xFFA4C + 0x38,
		.read_top_left = {264, 96},
		.read_size_offset = 0xFE8D0 + 0x70,
		.read_size = {64, 24},
		.write_size_offset = 0xFE8D0 + 0x74,
		.write_size = {64, 24}
	},

	/* Yui */
	{
		.read_top_left_offset = 0xFFA4C + 0x3C,
		.read_top_left = {0, 144},
		.read_size_offset = 0xFE8D0 + 0x78,
		.read_size = {34, 24},
		.write_size_offset = 0xFE8D0 + 0x7C,
		.write_size = {34, 24}
	},

	/* Hikage */
	{
		.read_top_left_offset = 0xFFA4C + 0x40,
		.read_top_left = {34, 144},
		.read_size_offset = 0xFE8D0 + 0x80,
		.read_size = {68, 24},
		.write_size_offset = 0xFE8D0 + 0x84,
		.write_size = {68, 24}
	},

	/* Hinata */
	{
		.read_top_left_offset = 0xFFA4C + 0x44,
		.read_top_left = {102, 144},
		.read_size_offset = 0xFE8D0 + 0x88,
		.read_size = {64, 24},
		.write_size_offset = 0xFE8D0 + 0x8C,
		.write_size = {64, 24}
	},

	/* Soujirou */
	{
		.read_top_left_offset = 0xFFA4C + 0x48,
		.read_top_left = {166, 144},
		.read_size_offset = 0xFE8D0 + 0x90,
		.read_size = {80, 24},
		.write_size_offset = 0xFE8D0 + 0x94,
		.write_size = {80, 24}
	},

	/* Kanata */
	{
		.read_top_left_offset = 0xFFA4C + 0x4C,
		.read_top_left = {246, 144},
		.read_size_offset = 0xFE8D0 + 0x98,
		.read_size = {67, 24},
		.write_size_offset = 0xFE8D0 + 0x9C,
		.write_size = {67, 24}
	},

	/* Yukari */
	{
		.read_top_left_offset = 0xFFA4C + 0x50,
		.read_top_left = {160, 192},
		.read_size_offset = 0xFE8D0 + 0xA0,
		.read_size = {62, 24},
		.write_size_offset = 0xFE8D0 + 0xA4,
		.write_size = {62, 24}
	},

	/* Akira */
	{
		.read_top_left_offset = 0xFFA4C + 0x54,
		.read_top_left = {222, 192},
		.read_size_offset = 0xFE8D0 + 0xA8,
		.read_size = {53, 24},
		.write_size_offset = 0xFE8D0 + 0xAC,
		.write_size = {53, 24}
	},

	/* Minoru */
	{
		.read_top_left_offset = 0xFFA4C + 0x58,
		.read_top_left = {275, 192},
		.read_size_offset = 0xFE8D0 + 0xB0,
		.read_size = {70, 24},
		.write_size_offset = 0xFE8D0 + 0xB4,
		.write_size = {70, 24}
	}
};

texture_region_info_array g_union_2533_7_regions =
{
	.elems = s_union_2533_7_regions_data,
	.length = RGT_C_ARRAY_SIZE(s_union_2533_7_regions_data)
};

#endif