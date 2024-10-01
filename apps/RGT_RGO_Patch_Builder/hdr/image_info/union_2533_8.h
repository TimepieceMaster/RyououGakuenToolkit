#ifndef UNION_2533_8_H
#define UNION_2533_8_H

#include "eboot_patch_structures.h"

static texture_region_info s_union_2533_8_regions_data[] =
{
	/* Konata Izumi */
	{
		.read_top_left_offset = 0xFFAB8 + 0x0,
		.read_top_left = {224, 0},
		.read_size_offset = 0xFE9A8 + 0x0,
		.read_size = {93, 20},
		.write_size_offset = 0xFE9A8 + 0x4,
		.write_size = {93, 20}
	},

	/* Kagami Hiiragi */
	{
		.read_top_left_offset = 0xFFAB8 + 0x4,
		.read_top_left = {323, 0},
		.read_size_offset = 0xFE9A8 + 0x8,
		.read_size = {105, 20},
		.write_size_offset = 0xFE9A8 + 0xC,
		.write_size = {105, 20}
	},

	/* Tsukasa Hiiragi */
	{
		.read_top_left_offset = 0xFFAB8 + 0x8,
		.read_top_left = {223, 20},
		.read_size_offset = 0xFE9A8 + 0x10,
		.read_size = {107, 20},
		.write_size_offset = 0xFE9A8 + 0x14,
		.write_size = {107, 20}
	},

	/* Misao Kusakabe */
	{
		.read_top_left_offset = 0xFFAB8 + 0xC,
		.read_top_left = {332, 20},
		.read_size_offset = 0xFE9A8 + 0x18,
		.read_size = {115, 20},
		.write_size_offset = 0xFE9A8 + 0x1C,
		.write_size = {115, 20}
	},

	/* Miyuki Takara */
	{
		.read_top_left_offset = 0xFFAB8 + 0x10,
		.read_top_left = {224, 40},
		.read_size_offset = 0xFE9A8 + 0x20,
		.read_size = {99, 20},
		.write_size_offset = 0xFE9A8 + 0x24,
		.write_size = {99, 20}
	},

	/* Ayano Minegishi */
	{
		.read_top_left_offset = 0xFFAB8 + 0x14,
		.read_top_left = {323, 40},
		.read_size_offset = 0xFE9A8 + 0x28,
		.read_size = {120, 20},
		.write_size_offset = 0xFE9A8 + 0x2C,
		.write_size = {120, 20}
	},

	/* Kou Yasaka */
	{
		.read_top_left_offset = 0xFFAB8 + 0x18,
		.read_top_left = {224, 60},
		.read_size_offset = 0xFE9A8 + 0x30,
		.read_size = {80, 20},
		.write_size_offset = 0xFE9A8 + 0x34,
		.write_size = {80, 20}
	},

	/* Yui Narumi */
	{
		.read_top_left_offset = 0xFFAB8 + 0x1C,
		.read_top_left = {304, 60},
		.read_size_offset = 0xFE9A8 + 0x38,
		.read_size = {81, 20},
		.write_size_offset = 0xFE9A8 + 0x3C,
		.write_size = {81, 20}
	},

	/* Yutaka Kobayakawa */
	{
		.read_top_left_offset = 0xFFAB8 + 0x20,
		.read_top_left = {223, 80},
		.read_size_offset = 0xFE9A8 + 0x40,
		.read_size = {142, 20},
		.write_size_offset = 0xFE9A8 + 0x44,
		.write_size = {142, 20}
	},

	/* Minami Iwasaki */
	{
		.read_top_left_offset = 0xFFAB8 + 0x24,
		.read_top_left = {366, 80},
		.read_size_offset = 0xFE9A8 + 0x48,
		.read_size = {110, 20},
		.write_size_offset = 0xFE9A8 + 0x4C,
		.write_size = {110, 20}
	},

	/* Hiyori Tamura */
	{
		.read_top_left_offset = 0xFFAB8 + 0x28,
		.read_top_left = {224, 100},
		.read_size_offset = 0xFE9A8 + 0x50,
		.read_size = {100, 20},
		.write_size_offset = 0xFE9A8 + 0x54,
		.write_size = {100, 20}
	},

	/* Hikaru Sakuraba */
	{
		.read_top_left_offset = 0xFFAB8 + 0x2C,
		.read_top_left = {326, 100},
		.read_size_offset = 0xFE9A8 + 0x58,
		.read_size = {116, 20},
		.write_size_offset = 0xFE9A8 + 0x5C,
		.write_size = {116, 20}
	},

	/* Hikage Miyakawa */
	{
		.read_top_left_offset = 0xFFAB8 + 0x30,
		.read_top_left = {224, 120},
		.read_size_offset = 0xFE9A8 + 0x60,
		.read_size = {125, 20},
		.write_size_offset = 0xFE9A8 + 0x64,
		.write_size = {125, 20}
	},

	/* Soujirou Izumi */
	{
		.read_top_left_offset = 0xFFAB8 + 0x34,
		.read_top_left = {350, 120},
		.read_size_offset = 0xFE9A8 + 0x68,
		.read_size = {103, 20},
		.write_size_offset = 0xFE9A8 + 0x6C,
		.write_size = {103, 20}
	},

	/* Fuyuki Amahara */
	{
		.read_top_left_offset = 0xFFAB8 + 0x38,
		.read_top_left = {224, 160},
		.read_size_offset = 0xFE9A8 + 0x70,
		.read_size = {115, 20},
		.write_size_offset = 0xFE9A8 + 0x74,
		.write_size = {115, 20}
	},

	/* Hinata Miyakawa */
	{
		.read_top_left_offset = 0xFFAB8 + 0x3C,
		.read_top_left = {340, 160},
		.read_size_offset = 0xFE9A8 + 0x78,
		.read_size = {122, 20},
		.write_size_offset = 0xFE9A8 + 0x7C,
		.write_size = {122, 20}
	},

	/* Akira Kogami */
	{
		.read_top_left_offset = 0xFFAB8 + 0x40,
		.read_top_left = {224, 180},
		.read_size_offset = 0xFE9A8 + 0x80,
		.read_size = {97, 20},
		.write_size_offset = 0xFE9A8 + 0x84,
		.write_size = {97, 20}
	},

	/* Yukari Takara */
	{
		.read_top_left_offset = 0xFFAB8 + 0x44,
		.read_top_left = {321, 180},
		.read_size_offset = 0xFE9A8 + 0x88,
		.read_size = {95, 20},
		.write_size_offset = 0xFE9A8 + 0x8C,
		.write_size = {95, 20}
	},

	/* Yamato Nagamori */
	{
		.read_top_left_offset = 0xFFAB8 + 0x48,
		.read_top_left = {223, 200},
		.read_size_offset = 0xFE9A8 + 0x90,
		.read_size = {128, 20},
		.write_size_offset = 0xFE9A8 + 0x94,
		.write_size = {128, 20}
	},

	/* Nanako Kuroi */
	{
		.read_top_left_offset = 0xFFAB8 + 0x4C,
		.read_top_left = {353, 200},
		.read_size_offset = 0xFE9A8 + 0x98,
		.read_size = {96, 20},
		.write_size_offset = 0xFE9A8 + 0x9C,
		.write_size = {96, 20}
	},

	/* Patricia Martin */
	{
		.read_top_left_offset = 0xFFAB8 + 0x50,
		.read_top_left = {224, 220},
		.read_size_offset = 0xFE9A8 + 0xA0,
		.read_size = {105, 20},
		.write_size_offset = 0xFE9A8 + 0xA4,
		.write_size = {105, 20}
	},

	/* Kanata Izumi */
	{
		.read_top_left_offset = 0xFFAB8 + 0x54,
		.read_top_left = {331, 220},
		.read_size_offset = 0xFE9A8 + 0xA8,
		.read_size = {92, 20},
		.write_size_offset = 0xFE9A8 + 0xAC,
		.write_size = {92, 20}
	},

	/* Minoru Shiraishi */
	{
		.read_top_left_offset = 0xFFAB8 + 0x58,
		.read_top_left = {224, 240},
		.read_size_offset = 0xFE9A8 + 0xB0,
		.read_size = {116, 20},
		.write_size_offset = 0xFE9A8 + 0xB4,
		.write_size = {116, 20}
	},
};

texture_region_info_array g_union_2533_8_regions =
{
	.elems = s_union_2533_8_regions_data,
	.length = RGT_C_ARRAY_SIZE(s_union_2533_8_regions_data)
};

#endif