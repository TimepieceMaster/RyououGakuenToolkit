#ifndef UNION_2533_9_H
#define UNION_2533_9_H

#include "eboot_patch_structures.h"

static texture_region_info s_union_2533_9_regions_data[] =
{
	/* Top Vertex */
	{
		.write_top_left_offset = 0x104d80 + 0x0,
		.write_top_left = { 347, 36 }
	},

	/* Upper-Left Vertex */
	{
		.write_top_left_offset = 0x104d80 + 0x4,
		.write_top_left = { 282, 72 }
	},

	/* Bottom-Left Vertex */
	{
		.write_top_left_offset = 0x104d80 + 0x8,
		.write_top_left = { 284, 122 }
	},

	/* Bottom-Right Vertex */
	{
		.write_top_left_offset = 0x104d80 + 0xC,
		.write_top_left = { 397, 122 }
	},

	/* Upper-Right Vertex */
	{
		.write_top_left_offset = 0x104d80 + 0x10,
		.write_top_left = { 407, 72 }
	},

	/* Otaku */
	{
		.read_top_left_offset = 0xFFB14 + 0x0,
		.read_top_left = {0, 0},
		.read_size_offset = 0xFEA60 + 0x0,
		.read_size = {38, 18},
		.write_size_offset = 0xFEA60 + 0x4,
		.write_size = {38, 18}
	},

	/* Ahoge */
	{
		.read_top_left_offset = 0xFFB14 + 0x4,
		.read_top_left = {38, 0},
		.read_size_offset = 0xFEA60 + 0x8,
		.read_size = {41, 18},
		.write_size_offset = 0xFEA60 + 0xC,
		.write_size = {41, 18}
	},

	/* Demand */
	{
		.read_top_left_offset = 0xFFB14 + 0x8,
		.read_top_left = {79, 0},
		.read_size_offset = 0xFEA60 + 0x10,
		.read_size = {50, 18},
		.write_size_offset = 0xFEA60 + 0x14,
		.write_size = {50, 18}
	},

	/* Reflexes (Konata) */
	{
		.read_top_left_offset = 0xFFB14 + 0xC,
		.read_top_left = {129, 0},
		.read_size_offset = 0xFEA60 + 0x18,
		.read_size = {50, 18},
		.write_size_offset = 0xFEA60 + 0x1C,
		.write_size = {50, 18}
	},

	/* Chest */
	{
		.read_top_left_offset = 0xFFB14 + 0x10,
		.read_top_left = {179, 0},
		.read_size_offset = 0xFEA60 + 0x20,
		.read_size = {35, 18},
		.write_size_offset = 0xFEA60 + 0x24,
		.write_size = {35, 18}
	},

	/* Twintails */
	{
		.read_top_left_offset = 0xFFB14 + 0x14,
		.read_top_left = {214, 0},
		.read_size_offset = 0xFEA60 + 0x28,
		.read_size = {54, 18},
		.write_size_offset = 0xFEA60 + 0x2C,
		.write_size = {54, 18}
	},

	/* Tsundere */
	{
		.read_top_left_offset = 0xFFB14 + 0x18,
		.read_top_left = {268, 0},
		.read_size_offset = 0xFEA60 + 0x30,
		.read_size = {55, 18},
		.write_size_offset = 0xFEA60 + 0x34,
		.write_size = {55, 18}
	},

	/* Tsurime */
	{
		.read_top_left_offset = 0xFFB14 + 0x1C,
		.read_top_left = {323, 0},
		.read_size_offset = 0xFEA60 + 0x38,
		.read_size = {49, 18},
		.write_size_offset = 0xFEA60 + 0x3C,
		.write_size = {49, 18}
	},

	/* Snacking */
	{
		.read_top_left_offset = 0xFFB14 + 0x20,
		.read_top_left = {372, 0},
		.read_size_offset = 0xFEA60 + 0x40,
		.read_size = {54, 18},
		.write_size_offset = 0xFEA60 + 0x44,
		.write_size = {54, 18}
	},

	/* Big Boobs */
	{
		.read_top_left_offset = 0xFFB14 + 0x24,
		.read_top_left = {426, 0},
		.read_size_offset = 0xFEA60 + 0x48,
		.read_size = {60, 18},
		.write_size_offset = 0xFEA60 + 0x4C,
		.write_size = {60, 18}
	},

	/* Big Sis */
	{
		.read_top_left_offset = 0xFFB14 + 0x28,
		.read_top_left = {0, 18},
		.read_size_offset = 0xFEA60 + 0x50,
		.read_size = {40, 18},
		.write_size_offset = 0xFEA60 + 0x54,
		.write_size = {40, 18}
	},

	/* Balsamic Vinegar */
	{
		.read_top_left_offset = 0xFFB14 + 0x2C,
		.read_top_left = {40, 18},
		.read_size_offset = 0xFEA60 + 0x58,
		.read_size = {80, 18},
		.write_size_offset = 0xFEA60 + 0x5C,
		.write_size = {80, 18}
	},

	/* Klutz */
	{
		.read_top_left_offset = 0xFFB14 + 0x30,
		.read_top_left = {120, 18},
		.read_size_offset = 0xFEA60 + 0x60,
		.read_size = {32, 18},
		.write_size_offset = 0xFEA60 + 0x64,
		.write_size = {32, 18}
	},

	/* Little Sis */
	{
		.read_top_left_offset = 0xFFB14 + 0x34,
		.read_top_left = {152, 18},
		.read_size_offset = 0xFEA60 + 0x68,
		.read_size = {50, 18},
		.write_size_offset = 0xFEA60 + 0x6C,
		.write_size = {50, 18}
	},

	/* Dondake! */
	{
		.read_top_left_offset = 0xFFB14 + 0x38,
		.read_top_left = {202, 18},
		.read_size_offset = 0xFEA60 + 0x70,
		.read_size = {56, 18},
		.write_size_offset = 0xFEA60 + 0x74,
		.write_size = {56, 18}
	},

	/* Shrine Maiden */
	{
		.read_top_left_offset = 0xFFB14 + 0x3C,
		.read_top_left = {258, 18},
		.read_size_offset = 0xFEA60 + 0x78,
		.read_size = {60, 18},
		.write_size_offset = 0xFEA60 + 0x7C,
		.write_size = {60, 18}
	},

	/* Airhead */
	{
		.read_top_left_offset = 0xFFB14 + 0x40,
		.read_top_left = {318, 18},
		.read_size_offset = 0xFEA60 + 0x80,
		.read_size = {48, 18},
		.write_size_offset = 0xFEA60 + 0x84,
		.write_size = {48, 18}
	},

	/* Glasses */
	{
		.read_top_left_offset = 0xFFB14 + 0x44,
		.read_top_left = {366, 18},
		.read_size_offset = 0xFEA60 + 0x88,
		.read_size = {43, 18},
		.write_size_offset = 0xFEA60 + 0x8C,
		.write_size = {43, 18}
	},

	/* Cavities */
	{
		.read_top_left_offset = 0xFFB14 + 0x48,
		.read_top_left = {409, 18},
		.read_size_offset = 0xFEA60 + 0x90,
		.read_size = {47, 18},
		.write_size_offset = 0xFEA60 + 0x94,
		.write_size = {47, 18}
	},

	/* Tsun */
	{
		.read_top_left_offset = 0xFFB14 + 0x4C,
		.read_top_left = {456, 18},
		.read_size_offset = 0xFEA60 + 0x98,
		.read_size = {29, 18},
		.write_size_offset = 0xFEA60 + 0x9C,
		.write_size = {29, 18}
	},

	/* Class Rep */
	{
		.read_top_left_offset = 0xFFB14 + 0x50,
		.read_top_left = {0, 36},
		.read_size_offset = 0xFEA60 + 0xA0,
		.read_size = {55, 18},
		.write_size_offset = 0xFEA60 + 0xA4,
		.write_size = {55, 18}
	},

	/* Fool */
	{
		.read_top_left_offset = 0xFFB14 + 0x54,
		.read_top_left = {485, 18},
		.read_size_offset = 0xFEA60 + 0xA8,
		.read_size = {27, 18},
		.write_size_offset = 0xFEA60 + 0xAC,
		.write_size = {27, 18}
	},

	/* Background */
	{
		.read_top_left_offset = 0xFFB14 + 0x58,
		.read_top_left = {55, 36},
		.read_size_offset = 0xFEA60 + 0xB0,
		.read_size = {53, 18},
		.write_size_offset = 0xFEA60 + 0xB4,
		.write_size = {53, 18}
	},

	/* 3 Sec Rule */
	{
		.read_top_left_offset = 0xFFB14 + 0x5C,
		.read_top_left = {108, 36},
		.read_size_offset = 0xFEA60 + 0xB8,
		.read_size = {60, 18},
		.write_size_offset = 0xFEA60 + 0xBC,
		.write_size = {60, 18}
	},

	/* Reflexes (Misao) */
	{
		.read_top_left_offset = 0xFFB14 + 0x60,
		.read_top_left = {129, 0},
		.read_size_offset = 0xFEA60 + 0xC0,
		.read_size = {50, 18},
		.write_size_offset = 0xFEA60 + 0xC4,
		.write_size = {50, 18}
	},

	/* Fang Tooth */
	{
		.read_top_left_offset = 0xFFB14 + 0x64,
		.read_top_left = {168, 36},
		.read_size_offset = 0xFEA60 + 0xC8,
		.read_size = {60, 18},
		.write_size_offset = 0xFEA60 + 0xCC,
		.write_size = {60, 18}
	},

	/* Ladylike */
	{
		.read_top_left_offset = 0xFFB14 + 0x68,
		.read_top_left = {228, 36},
		.read_size_offset = 0xFEA60 + 0xD0,
		.read_size = {49, 18},
		.write_size_offset = 0xFEA60 + 0xD4,
		.write_size = {49, 18}
	},

	/* Kneesocks */
	{
		.read_top_left_offset = 0xFFB14 + 0x6C,
		.read_top_left = {277, 36},
		.read_size_offset = 0xFEA60 + 0xD8,
		.read_size = {61, 18},
		.write_size_offset = 0xFEA60 + 0xDC,
		.write_size = {61, 18}
	},

	/* Baking */
	{
		.read_top_left_offset = 0xFFB14 + 0x70,
		.read_top_left = {338, 36},
		.read_size_offset = 0xFEA60 + 0xE0,
		.read_size = {41, 18},
		.write_size_offset = 0xFEA60 + 0xE4,
		.write_size = {41, 18}
	},

	/* Hairband */
	{
		.read_top_left_offset = 0xFFB14 + 0x74,
		.read_top_left = {379, 36},
		.read_size_offset = 0xFEA60 + 0xE8,
		.read_size = {55, 18},
		.write_size_offset = 0xFEA60 + 0xEC,
		.write_size = {55, 18}
	},

	/* Hairband */
	{
		.read_top_left_offset = 0xFFB14 + 0x78,
		.read_top_left = {0, 54},
		.read_size_offset = 0xFEA60 + 0xF0,
		.read_size = {55, 18},
		.write_size_offset = 0xFEA60 + 0xF4,
		.write_size = {55, 18}
	},

	/* Gamer */
	{
		.read_top_left_offset = 0xFFB14 + 0x7C,
		.read_top_left = {55, 54},
		.read_size_offset = 0xFEA60 + 0xF8,
		.read_size = {41, 18},
		.write_size_offset = 0xFEA60 + 0xFC,
		.write_size = {41, 18}
	},

	/* Stu. Council */
	{
		.read_top_left_offset = 0xFFB14 + 0x80,
		.read_top_left = {96, 54},
		.read_size_offset = 0xFEA60 + 0x100,
		.read_size = {59, 18},
		.write_size_offset = 0xFEA60 + 0x104,
		.write_size = {59, 18}
	},

	/* Doujin */
	{
		.read_top_left_offset = 0xFFB14 + 0x84,
		.read_top_left = {155, 54},
		.read_size_offset = 0xFEA60 + 0x108,
		.read_size = {40, 18},
		.write_size_offset = 0xFEA60 + 0x10C,
		.write_size = {40, 18}
	},

	/* Anime Research */
	{
		.read_top_left_offset = 0xFFB14 + 0x88,
		.read_top_left = {195, 54},
		.read_size_offset = 0xFEA60 + 0x110,
		.read_size = {60, 18},
		.write_size_offset = 0xFEA60 + 0x114,
		.write_size = {60, 18}
	},

	/* Feeble */
	{
		.read_top_left_offset = 0xFFB14 + 0x8C,
		.read_top_left = {255, 54},
		.read_size_offset = 0xFEA60 + 0x118,
		.read_size = {40, 18},
		.write_size_offset = 0xFEA60 + 0x11C,
		.write_size = {40, 18}
	},

	/* Pure */
	{
		.read_top_left_offset = 0xFFB14 + 0x90,
		.read_top_left = {295, 54},
		.read_size_offset = 0xFEA60 + 0x120,
		.read_size = {29, 18},
		.write_size_offset = 0xFEA60 + 0x124,
		.write_size = {29, 18}
	},

	/* Little Sis (Yutaka) */
	{
		.read_top_left_offset = 0xFFB14 + 0x94,
		.read_top_left = {152, 18},
		.read_size_offset = 0xFEA60 + 0x128,
		.read_size = {50, 18},
		.write_size_offset = 0xFEA60 + 0x12C,
		.write_size = {50, 18}
	},

	/* Minami-chan */
	{
		.read_top_left_offset = 0xFFB14 + 0x98,
		.read_top_left = {434, 36},
		.read_size_offset = 0xFEA60 + 0x130,
		.read_size = {61, 18},
		.write_size_offset = 0xFEA60 + 0x134,
		.write_size = {61, 18}
	},

	/* Slender */
	{
		.read_top_left_offset = 0xFFB14 + 0x9C,
		.read_top_left = {324, 54},
		.read_size_offset = 0xFEA60 + 0x138,
		.read_size = {47, 18},
		.write_size_offset = 0xFEA60 + 0x13C,
		.write_size = {47, 18}
	},

	/* Slender */
	{
		.read_top_left_offset = 0xFFB14 + 0x9C,
		.read_top_left = {324, 54},
		.read_size_offset = 0xFEA60 + 0x138,
		.read_size = {47, 18},
		.write_size_offset = 0xFEA60 + 0x13C,
		.write_size = {47, 18}
	},

	/* Cool */
	{
		.read_top_left_offset = 0xFFB14 + 0xA0,
		.read_top_left = {371, 54},
		.read_size_offset = 0xFEA60 + 0x140,
		.read_size = {29, 18},
		.write_size_offset = 0xFEA60 + 0x144,
		.write_size = {29, 18}
	},

	/* Health Cmte. */
	{
		.read_top_left_offset = 0xFFB14 + 0xA4,
		.read_top_left = {400, 54},
		.read_size_offset = 0xFEA60 + 0x148,
		.read_size = {60, 18},
		.write_size_offset = 0xFEA60 + 0x14C,
		.write_size = {60, 18}
	},

	/* Yutaka */
	{
		.read_top_left_offset = 0xFFB14 + 0xA8,
		.read_top_left = {460, 54},
		.read_size_offset = 0xFEA60 + 0x150,
		.read_size = {42, 18},
		.write_size_offset = 0xFEA60 + 0x154,
		.write_size = {42, 18}
	},

	/* Smile */
	{
		.read_top_left_offset = 0xFFB14 + 0xAC,
		.read_top_left = {0, 72},
		.read_size_offset = 0xFEA60 + 0x158,
		.read_size = {35, 18},
		.write_size_offset = 0xFEA60 + 0x15C,
		.write_size = {35, 18}
	},

	/* Delusion */
	{
		.read_top_left_offset = 0xFFB14 + 0xB0,
		.read_top_left = {35, 72},
		.read_size_offset = 0xFEA60 + 0x160,
		.read_size = {52, 18},
		.write_size_offset = 0xFEA60 + 0x164,
		.write_size = {52, 18}
	},

	/* High-Strung */
	{
		.read_top_left_offset = 0xFFB14 + 0xB4,
		.read_top_left = {87, 72},
		.read_size_offset = 0xFEA60 + 0x168,
		.read_size = {72, 18},
		.write_size_offset = 0xFEA60 + 0x16C,
		.write_size = {72, 18}
	},

	/* Language */
	{
		.read_top_left_offset = 0xFFB14 + 0xB8,
		.read_top_left = {159, 72},
		.read_size_offset = 0xFEA60 + 0x170,
		.read_size = {58, 18},
		.write_size_offset = 0xFEA60 + 0x174,
		.write_size = {58, 18}
	},

	/* Moe Respect */
	{
		.read_top_left_offset = 0xFFB14 + 0xBC,
		.read_top_left = {217, 72},
		.read_size_offset = 0xFEA60 + 0x178,
		.read_size = {72, 18},
		.write_size_offset = 0xFEA60 + 0x17C,
		.write_size = {72, 18}
	},

	/* USA */
	{
		.read_top_left_offset = 0xFFB14 + 0xC0,
		.read_top_left = {289, 72},
		.read_size_offset = 0xFEA60 + 0x180,
		.read_size = {27, 18},
		.write_size_offset = 0xFEA60 + 0x184,
		.write_size = {27, 18}
	},

	/* Mysterious */
	{
		.read_top_left_offset = 0xFFB14 + 0xC4,
		.read_top_left = {316, 72},
		.read_size_offset = 0xFEA60 + 0x188,
		.read_size = {65, 18},
		.write_size_offset = 0xFEA60 + 0x18C,
		.write_size = {65, 18}
	},

	/* Spoiled */
	{
		.read_top_left_offset = 0xFFB14 + 0xC8,
		.read_top_left = {381, 72},
		.read_size_offset = 0xFEA60 + 0x190,
		.read_size = {46, 18},
		.write_size_offset = 0xFEA60 + 0x194,
		.write_size = {46, 18}
	},

	/* Ponytail */
	{
		.read_top_left_offset = 0xFFB14 + 0xCC,
		.read_top_left = {427, 72},
		.read_size_offset = 0xFEA60 + 0x198,
		.read_size = {49, 18},
		.write_size_offset = 0xFEA60 + 0x19C,
		.write_size = {49, 18}
	},

	/* Cat Eyes */
	{
		.read_top_left_offset = 0xFFB14 + 0xD0,
		.read_top_left = {0, 90},
		.read_size_offset = 0xFEA60 + 0x1A0,
		.read_size = {50, 18},
		.write_size_offset = 0xFEA60 + 0x1A4,
		.write_size = {50, 18}
	},

	/* Kansai */
	{
		.read_top_left_offset = 0xFFB14 + 0xD4,
		.read_top_left = {50, 90},
		.read_size_offset = 0xFEA60 + 0x1A8,
		.read_size = {39, 18},
		.write_size_offset = 0xFEA60 + 0x1AC,
		.write_size = {39, 18}
	},

	/* Physique */
	{
		.read_top_left_offset = 0xFFB14 + 0xD8,
		.read_top_left = {89, 90},
		.read_size_offset = 0xFEA60 + 0x1B0,
		.read_size = {54, 18},
		.write_size_offset = 0xFEA60 + 0x1B4,
		.write_size = {54, 18}
	},

	/* Baseball Fan */
	{
		.read_top_left_offset = 0xFFB14 + 0xDC,
		.read_top_left = {143, 90},
		.read_size_offset = 0xFEA60 + 0x1B8,
		.read_size = {72, 18},
		.write_size_offset = 0xFEA60 + 0x1BC,
		.write_size = {72, 18}
	},

	/* Teacher */
	{
		.read_top_left_offset = 0xFFB14 + 0xE0,
		.read_top_left = {215, 90},
		.read_size_offset = 0xFEA60 + 0x1C0,
		.read_size = {47, 18},
		.write_size_offset = 0xFEA60 + 0x1C4,
		.write_size = {47, 18}
	},

	/* Freckles */
	{
		.read_top_left_offset = 0xFFB14 + 0xE4,
		.read_top_left = {262, 90},
		.read_size_offset = 0xFEA60 + 0x1C8,
		.read_size = {48, 18},
		.write_size_offset = 0xFEA60 + 0x1CC,
		.write_size = {48, 18}
	},

	/* Child Body */
	{
		.read_top_left_offset = 0xFFB14 + 0xE8,
		.read_top_left = {310, 90},
		.read_size_offset = 0xFEA60 + 0x1D0,
		.read_size = {65, 18},
		.write_size_offset = 0xFEA60 + 0x1D4,
		.write_size = {65, 18}
	},

	/* Bad Swimmer */
	{
		.read_top_left_offset = 0xFFB14 + 0xEC,
		.read_top_left = {375, 90},
		.read_size_offset = 0xFEA60 + 0x1D8,
		.read_size = {60, 18},
		.write_size_offset = 0xFEA60 + 0x1DC,
		.write_size = {60, 18}
	},

	/* Wealthy */
	{
		.read_top_left_offset = 0xFFB14 + 0xF0,
		.read_top_left = {435, 90},
		.read_size_offset = 0xFEA60 + 0x1E0,
		.read_size = {51, 18},
		.write_size_offset = 0xFEA60 + 0x1E4,
		.write_size = {51, 18}
	},

	/* Long Hair */
	{
		.read_top_left_offset = 0xFFB14 + 0xF4,
		.read_top_left = {0, 108},
		.read_size_offset = 0xFEA60 + 0x1E8,
		.read_size = {58, 18},
		.write_size_offset = 0xFEA60 + 0x1EC,
		.write_size = {58, 18}
	},

	/* Nurse */
	{
		.read_top_left_offset = 0xFFB14 + 0xF8,
		.read_top_left = {58, 108},
		.read_size_offset = 0xFEA60 + 0x1F0,
		.read_size = {36, 18},
		.write_size_offset = 0xFEA60 + 0x1F4,
		.write_size = {36, 18}
	},

	/* Short Hair */
	{
		.read_top_left_offset = 0xFFB14 + 0xFC,
		.read_top_left = {94, 108},
		.read_size_offset = 0xFEA60 + 0x1F8,
		.read_size = {62, 18},
		.write_size_offset = 0xFEA60 + 0x1FC,
		.write_size = {62, 18}
	},

	/* Hubby Love */
	{
		.read_top_left_offset = 0xFFB14 + 0x100,
		.read_top_left = {156, 108},
		.read_size_offset = 0xFEA60 + 0x200,
		.read_size = {71, 18},
		.write_size_offset = 0xFEA60 + 0x204,
		.write_size = {71, 18}
	},

	/* Cop */
	{
		.read_top_left_offset = 0xFFB14 + 0x104,
		.read_top_left = {227, 108},
		.read_size_offset = 0xFEA60 + 0x208,
		.read_size = {25, 18},
		.write_size_offset = 0xFEA60 + 0x20C,
		.write_size = {25, 18}
	},

	/* Driving */
	{
		.read_top_left_offset = 0xFFB14 + 0x108,
		.read_top_left = {252, 108},
		.read_size_offset = 0xFEA60 + 0x210,
		.read_size = {44, 18},
		.write_size_offset = 0xFEA60 + 0x214,
		.write_size = {44, 18}
	},

	/* Grade School Student */
	{
		.read_top_left_offset = 0xFFB14 + 0x10C,
		.read_top_left = {296, 108},
		.read_size_offset = 0xFEA60 + 0x218,
		.read_size = {100, 18},
		.write_size_offset = 0xFEA60 + 0x21C,
		.write_size = {100, 18}
	},

	/* Unlucky */
	{
		.read_top_left_offset = 0xFFB14 + 0x110,
		.read_top_left = {396, 108},
		.read_size_offset = 0xFEA60 + 0x220,
		.read_size = {49, 18},
		.write_size_offset = 0xFEA60 + 0x224,
		.write_size = {49, 18}
	},

	/* Expenses */
	{
		.read_top_left_offset = 0xFFB14 + 0x114,
		.read_top_left = {445, 108},
		.read_size_offset = 0xFEA60 + 0x228,
		.read_size = {54, 18},
		.write_size_offset = 0xFEA60 + 0x22C,
		.write_size = {54, 18}
	},

	/* Income */
	{
		.read_top_left_offset = 0xFFB14 + 0x118,
		.read_top_left = {0, 126},
		.read_size_offset = 0xFEA60 + 0x230,
		.read_size = {45, 18},
		.write_size_offset = 0xFEA60 + 0x234,
		.write_size = {45, 18}
	},

	/* Part-Timer */
	{
		.read_top_left_offset = 0xFFB14 + 0x11C,
		.read_top_left = {45, 126},
		.read_size_offset = 0xFEA60 + 0x238,
		.read_size = {63, 18},
		.write_size_offset = 0xFEA60 + 0x23C,
		.write_size = {63, 18}
	},

	/* Doting Dad */
	{
		.read_top_left_offset = 0xFFB14 + 0x120,
		.read_top_left = {108, 126},
		.read_size_offset = 0xFEA60 + 0x240,
		.read_size = {67, 18},
		.write_size_offset = 0xFEA60 + 0x244,
		.write_size = {67, 18}
	},

	/* Writer */
	{
		.read_top_left_offset = 0xFFB14 + 0x124,
		.read_top_left = {175, 126},
		.read_size_offset = 0xFEA60 + 0x248,
		.read_size = {40, 18},
		.write_size_offset = 0xFEA60 + 0x24C,
		.write_size = {40, 18}
	},

	/* Wild-Looking */
	{
		.read_top_left_offset = 0xFFB14 + 0x128,
		.read_top_left = {215, 126},
		.read_size_offset = 0xFEA60 + 0x250,
		.read_size = {62, 18},
		.write_size_offset = 0xFEA60 + 0x254,
		.write_size = {62, 18}
	},

	/* Ambition */
	{
		.read_top_left_offset = 0xFFB14 + 0x12C,
		.read_top_left = {277, 126},
		.read_size_offset = 0xFEA60 + 0x258,
		.read_size = {57, 18},
		.write_size_offset = 0xFEA60 + 0x25C,
		.write_size = {57, 18}
	},

	/* Stubble */
	{
		.read_top_left_offset = 0xFFB14 + 0x130,
		.read_top_left = {334, 126},
		.read_size_offset = 0xFEA60 + 0x260,
		.read_size = {47, 18},
		.write_size_offset = 0xFEA60 + 0x264,
		.write_size = {47, 18}
	},

	/* Family Love */
	{
		.read_top_left_offset = 0xFFB14 + 0x134,
		.read_top_left = {380, 126},
		.read_size_offset = 0xFEA60 + 0x268,
		.read_size = {70, 18},
		.write_size_offset = 0xFEA60 + 0x26C,
		.write_size = {70, 18}
	},

	/* Good Wife */
	{
		.read_top_left_offset = 0xFFB14 + 0x138,
		.read_top_left = {450, 126},
		.read_size_offset = 0xFEA60 + 0x270,
		.read_size = {60, 18},
		.write_size_offset = 0xFEA60 + 0x274,
		.write_size = {60, 18}
	},

	/* Devotion */
	{
		.read_top_left_offset = 0xFFB14 + 0x13C,
		.read_top_left = {0, 144},
		.read_size_offset = 0xFEA60 + 0x278,
		.read_size = {54, 18},
		.write_size_offset = 0xFEA60 + 0x27C,
		.write_size = {54, 18}
	},

	/* Transparency */
	{
		.read_top_left_offset = 0xFFB14 + 0x140,
		.read_top_left = {54, 144},
		.read_size_offset = 0xFEA60 + 0x280,
		.read_size = {60, 18},
		.write_size_offset = 0xFEA60 + 0x284,
		.write_size = {60, 18}
	},

	/* Doting Mom */
	{
		.read_top_left_offset = 0xFFB14 + 0x144,
		.read_top_left = {114, 144},
		.read_size_offset = 0xFEA60 + 0x288,
		.read_size = {61, 18},
		.write_size_offset = 0xFEA60 + 0x28C,
		.write_size = {61, 18}
	},

	/* Concentration */
	{
		.read_top_left_offset = 0xFFB14 + 0x148,
		.read_top_left = {175, 144},
		.read_size_offset = 0xFEA60 + 0x290,
		.read_size = {60, 18},
		.write_size_offset = 0xFEA60 + 0x294,
		.write_size = {60, 18}
	},

	/* Carefree */
	{
		.read_top_left_offset = 0xFFB14 + 0x14C,
		.read_top_left = {235, 144},
		.read_size_offset = 0xFEA60 + 0x298,
		.read_size = {52, 18},
		.write_size_offset = 0xFEA60 + 0x29C,
		.write_size = {52, 18}
	},

	/* Wife */
	{
		.read_top_left_offset = 0xFFB14 + 0x150,
		.read_top_left = {476, 72},
		.read_size_offset = 0xFEA60 + 0x2A0,
		.read_size = {31, 18},
		.write_size_offset = 0xFEA60 + 0x2A4,
		.write_size = {31, 18}
	},

	/* Private */
	{
		.read_top_left_offset = 0xFFB14 + 0x154,
		.read_top_left = {287, 144},
		.read_size_offset = 0xFEA60 + 0x2A8,
		.read_size = {43, 18},
		.write_size_offset = 0xFEA60 + 0x2AC,
		.write_size = {43, 18}
	},

	/* Idol */
	{
		.read_top_left_offset = 0xFFB14 + 0x158,
		.read_top_left = {486, 90},
		.read_size_offset = 0xFEA60 + 0x2B0,
		.read_size = {24, 18},
		.write_size_offset = 0xFEA60 + 0x2B4,
		.write_size = {24, 18}
	},

	/* Two-Faced */
	{
		.read_top_left_offset = 0xFFB14 + 0x15C,
		.read_top_left = {330, 144},
		.read_size_offset = 0xFEA60 + 0x2B8,
		.read_size = {64, 18},
		.write_size_offset = 0xFEA60 + 0x2BC,
		.write_size = {64, 18}
	},

	/* Punching Bag */
	{
		.read_top_left_offset = 0xFFB14 + 0x160,
		.read_top_left = {394, 144},
		.read_size_offset = 0xFEA60 + 0x2C0,
		.read_size = {80, 18},
		.write_size_offset = 0xFEA60 + 0x2C4,
		.write_size = {80, 18}
	},

	/* Wasuremono */
	{
		.read_top_left_offset = 0xFFB14 + 0x164,
		.read_top_left = {0, 162},
		.read_size_offset = 0xFEA60 + 0x2C8,
		.read_size = {59, 18},
		.write_size_offset = 0xFEA60 + 0x2CC,
		.write_size = {59, 18}
	},

	/* Performer */
	{
		.read_top_left_offset = 0xFFB14 + 0x168,
		.read_top_left = {59, 162},
		.read_size_offset = 0xFEA60 + 0x2D0,
		.read_size = {61, 18},
		.write_size_offset = 0xFEA60 + 0x2D4,
		.write_size = {61, 18}
	},

	/* Voice Actor */
	{
		.read_top_left_offset = 0xFFB14 + 0x16C,
		.read_top_left = {120, 162},
		.read_size_offset = 0xFEA60 + 0x2D8,
		.read_size = {60, 18},
		.write_size_offset = 0xFEA60 + 0x2DC,
		.write_size = {60, 18}
	},

	/* Slit Eyes */
	{
		.read_top_left_offset = 0xFFB14 + 0x170,
		.read_top_left = {180, 162},
		.read_size_offset = 0xFEA60 + 0x2E0,
		.read_size = {50, 18},
		.write_size_offset = 0xFEA60 + 0x2E4,
		.write_size = {50, 18}
	},

	/* ??? (Not unlocked) */
	{
		.read_top_left_offset = 0xFFB14 + 0x174,
		.read_top_left = {230, 162},
		.read_size_offset = 0xFEA60 + 0x2E8,
		.read_size = {26, 18},
		.write_size_offset = 0xFEA60 + 0x2EC,
		.write_size = {26, 18}
	},

	/* Ryouou Uniform */
	{
		.read_top_left_offset = 0xFFB14 + 0x178,
		.read_top_left = {256, 162},
		.read_size_offset = 0xFEA60 + 0x2F0,
		.read_size = {106, 18},
		.write_size_offset = 0xFEA60 + 0x2F4,
		.write_size = {106, 18}
	},

	/* Casual */
	{
		.read_top_left_offset = 0xFFB14 + 0x17C,
		.read_top_left = {362, 162},
		.read_size_offset = 0xFEA60 + 0x2F8,
		.read_size = {44, 18},
		.write_size_offset = 0xFEA60 + 0x2FC,
		.write_size = {44, 18}
	},

	/* Thief */
	{
		.read_top_left_offset = 0xFFB14 + 0x180,
		.read_top_left = {417, 162},
		.read_size_offset = 0xFEA60 + 0x300,
		.read_size = {36, 18},
		.write_size_offset = 0xFEA60 + 0x304,
		.write_size = {36, 18}
	},

	/* Saber */
	{
		.read_top_left_offset = 0xFFB14 + 0x184,
		.read_top_left = {453, 162},
		.read_size_offset = 0xFEA60 + 0x308,
		.read_size = {40, 18},
		.write_size_offset = 0xFEA60 + 0x30C,
		.write_size = {40, 18}
	},

	/* Knight */
	{
		.read_top_left_offset = 0xFFB14 + 0x188,
		.read_top_left = {0, 180},
		.read_size_offset = 0xFEA60 + 0x310,
		.read_size = {45, 18},
		.write_size_offset = 0xFEA60 + 0x314,
		.write_size = {45, 18}
	},

	/* Hunter */
	{
		.read_top_left_offset = 0xFFB14 + 0x18C,
		.read_top_left = {45, 180},
		.read_size_offset = 0xFEA60 + 0x318,
		.read_size = {47, 18},
		.write_size_offset = 0xFEA60 + 0x31C,
		.write_size = {47, 18}
	},

	/* Shinto Priest */
	{
		.read_top_left_offset = 0xFFB14 + 0x190,
		.read_top_left = {92, 180},
		.read_size_offset = 0xFEA60 + 0x320,
		.read_size = {84, 18},
		.write_size_offset = 0xFEA60 + 0x324,
		.write_size = {84, 18}
	},

	/* School Swimsuit */
	{
		.read_top_left_offset = 0xFFB14 + 0x194,
		.read_top_left = {176, 180},
		.read_size_offset = 0xFEA60 + 0x328,
		.read_size = {106, 18},
		.write_size_offset = 0xFEA60 + 0x32C,
		.write_size = {106, 18}
	},

	/* Suit */
	{
		.read_top_left_offset = 0xFFB14 + 0x198,
		.read_top_left = {282, 180},
		.read_size_offset = 0xFEA60 + 0x330,
		.read_size = {28, 18},
		.write_size_offset = 0xFEA60 + 0x334,
		.write_size = {28, 18}
	},

	/* Subaru Nakajima */
	{
		.read_top_left_offset = 0xFFB14 + 0x19C,
		.read_top_left = {310, 180},
		.read_size_offset = 0xFEA60 + 0x338,
		.read_size = {111, 18},
		.write_size_offset = 0xFEA60 + 0x33C,
		.write_size = {111, 18}
	},

	/* Mage */
	{
		.read_top_left_offset = 0xFFB14 + 0x1A0,
		.read_top_left = {421, 180},
		.read_size_offset = 0xFEA60 + 0x340,
		.read_size = {38, 18},
		.write_size_offset = 0xFEA60 + 0x344,
		.write_size = {38, 18}
	},

	/* Rin Tohsaka */
	{
		.read_top_left_offset = 0xFFB14 + 0x1A4,
		.read_top_left = {0, 198},
		.read_size_offset = 0xFEA60 + 0x348,
		.read_size = {77, 18},
		.write_size_offset = 0xFEA60 + 0x34C,
		.write_size = {77, 18}
	},

	/* Casual 2 */
	{
		.read_top_left_offset = 0xFFB14 + 0x1A8,
		.read_top_left = {362, 162},
		.read_size_offset = 0xFEA60 + 0x350,
		.read_size = {55, 18},
		.write_size_offset = 0xFEA60 + 0x354,
		.write_size = {55, 18}
	},

	/* Mashiro Uniform */
	{
		.read_top_left_offset = 0xFFB14 + 0x1AC,
		.read_top_left = {77, 198},
		.read_size_offset = 0xFEA60 + 0x358,
		.read_size = {109, 18},
		.write_size_offset = 0xFEA60 + 0x35C,
		.write_size = {109, 18}
	},

	/* Nanoha Takamachi */
	{
		.read_top_left_offset = 0xFFB14 + 0x1B0,
		.read_top_left = {186, 198},
		.read_size_offset = 0xFEA60 + 0x360,
		.read_size = {121, 18},
		.write_size_offset = 0xFEA60 + 0x364,
		.write_size = {121, 18}
	},

	/* Healer */
	{
		.read_top_left_offset = 0xFFB14 + 0x1B4,
		.read_top_left = {307, 198},
		.read_size_offset = 0xFEA60 + 0x368,
		.read_size = {44, 18},
		.write_size_offset = 0xFEA60 + 0x36C,
		.write_size = {44, 18}
	},

	/* Minatsu Amakase */
	{
		.read_top_left_offset = 0xFFB14 + 0x1B8,
		.read_top_left = {351, 198},
		.read_size_offset = 0xFEA60 + 0x370,
		.read_size = {114, 18},
		.write_size_offset = 0xFEA60 + 0x374,
		.write_size = {114, 18}
	},

	/* Rei Ayanami */
	{
		.read_top_left_offset = 0xFFB14 + 0x1BC,
		.read_top_left = {0, 216},
		.read_size_offset = 0xFEA60 + 0x378,
		.read_size = {80, 18},
		.write_size_offset = 0xFEA60 + 0x37C,
		.write_size = {80, 18}
	},

	/* Shrine Maiden */
	{
		.read_top_left_offset = 0xFFB14 + 0x1C0,
		.read_top_left = {80, 216},
		.read_size_offset = 0xFEA60 + 0x380,
		.read_size = {94, 18},
		.write_size_offset = 0xFEA60 + 0x384,
		.write_size = {94, 18}
	},

	/* Fate T. Harlaown */
	{
		.read_top_left_offset = 0xFFB14 + 0x1C4,
		.read_top_left = {174, 216},
		.read_size_offset = 0xFEA60 + 0x388,
		.read_size = {106, 18},
		.write_size_offset = 0xFEA60 + 0x38C,
		.write_size = {106, 18}
	},

	/* Gilgamesh */
	{
		.read_top_left_offset = 0xFFB14 + 0x1C8,
		.read_top_left = {280, 216},
		.read_size_offset = 0xFEA60 + 0x390,
		.read_size = {69, 18},
		.write_size_offset = 0xFEA60 + 0x394,
		.write_size = {69, 18}
	},

	/* Nurse */
	{
		.read_top_left_offset = 0xFFB14 + 0x1CC,
		.read_top_left = {349, 216},
		.read_size_offset = 0xFEA60 + 0x398,
		.read_size = {40, 18},
		.write_size_offset = 0xFEA60 + 0x39C,
		.write_size = {40, 18}
	},

	/* Game Master */
	{
		.read_top_left_offset = 0xFFB14 + 0x1D0,
		.read_top_left = {389, 216},
		.read_size_offset = 0xFEA60 + 0x3A0,
		.read_size = {87, 18},
		.write_size_offset = 0xFEA60 + 0x3A4,
		.write_size = {87, 18}
	},

	/* Swimsuit */
	{
		.read_top_left_offset = 0xFFB14 + 0x1D4,
		.read_top_left = {222, 180},
		.read_size_offset = 0xFEA60 + 0x3A8,
		.read_size = {60, 18},
		.write_size_offset = 0xFEA60 + 0x3AC,
		.write_size = {60, 18}
	},

	/* St. Fiorina Uniform */
	{
		.read_top_left_offset = 0xFFB14 + 0x1D8,
		.read_top_left = {0, 234},
		.read_size_offset = 0xFEA60 + 0x3B0,
		.read_size = {122, 18},
		.write_size_offset = 0xFEA60 + 0x3B4,
		.write_size = {122, 18}
	},

	/* Mayumi Thyme (unused) */
	{
		.read_top_left_offset = 0xFFB14 + 0x1DC,
		.read_top_left = {0, 0},
		.read_size_offset = 0xFEA60 + 0x3B8,
		.read_size = {18, 18},
		.write_size_offset = 0xFEA60 + 0x3BC,
		.write_size = {18, 18}
	},

	/* Dark Lord */
	{
		.read_top_left_offset = 0xFFB14 + 0x1E0,
		.read_top_left = {122, 234},
		.read_size_offset = 0xFEA60 + 0x3C0,
		.read_size = {64, 18},
		.write_size_offset = 0xFEA60 + 0x3C4,
		.write_size = {64, 18}
	},

	/* Lab Coat */
	{
		.read_top_left_offset = 0xFFB14 + 0x1E4,
		.read_top_left = {186, 234},
		.read_size_offset = 0xFEA60 + 0x3C8,
		.read_size = {57, 18},
		.write_size_offset = 0xFEA60 + 0x3CC,
		.write_size = {57, 18}
	},

	/* Sakura-en Uniform */
	{
		.read_top_left_offset = 0xFFB14 + 0x1E8,
		.read_top_left = {243, 234},
		.read_size_offset = 0xFEA60 + 0x3D0,
		.read_size = {122, 18},
		.write_size_offset = 0xFEA60 + 0x3D4,
		.write_size = {122, 18}
	},

	/* Shadow */
	{
		.read_top_left_offset = 0xFFB14 + 0x1EC,
		.read_top_left = {365, 234},
		.read_size_offset = 0xFEA60 + 0x3D8,
		.read_size = {53, 18},
		.write_size_offset = 0xFEA60 + 0x3DC,
		.write_size = {53, 18}
	},

	/* Sunny */
	{
		.read_top_left_offset = 0xFFB14 + 0x1F0,
		.read_top_left = {418, 234},
		.read_size_offset = 0xFEA60 + 0x3E0,
		.read_size = {43, 18},
		.write_size_offset = 0xFEA60 + 0x3E4,
		.write_size = {43, 18}
	},

	/* Nanaka Shirakawa */
	{
		.read_top_left_offset = 0xFFB14 + 0x1F4,
		.read_top_left = {0, 252},
		.read_size_offset = 0xFEA60 + 0x3E8,
		.read_size = {118, 18},
		.write_size_offset = 0xFEA60 + 0x3EC,
		.write_size = {118, 18}
	},

	/* Police Uniform */
	{
		.read_top_left_offset = 0xFFB14 + 0x1F8,
		.read_top_left = {118, 252},
		.read_size_offset = 0xFEA60 + 0x3F0,
		.read_size = {95, 18},
		.write_size_offset = 0xFEA60 + 0x3F4,
		.write_size = {95, 18}
	},

	/* Plugsuit */
	{
		.read_top_left_offset = 0xFFB14 + 0x1FC,
		.read_top_left = {213, 252},
		.read_size_offset = 0xFEA60 + 0x3F8,
		.read_size = {54, 18},
		.write_size_offset = 0xFEA60 + 0x3FC,
		.write_size = {54, 18}
	},
};

texture_region_info_array g_union_2533_9_regions =
{
	.elems = s_union_2533_9_regions_data,
	.length = RGT_C_ARRAY_SIZE(s_union_2533_9_regions_data)
};

#endif