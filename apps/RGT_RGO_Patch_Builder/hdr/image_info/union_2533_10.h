#ifndef UNION_2533_10_H
#define UNION_2533_10_H

#include "eboot_patch_structures.h"

static texture_region_info s_union_2533_10_regions_data[] =
{
	/* A (Rh+) */
	{
		.read_top_left_offset = 0xFFD14 + 0x0,
		.read_top_left = {0, 0},
		.read_size_offset = 0xFEE60 + 0x0,
		.read_size = {41, 16},
		.write_size_offset = 0xFEE60 + 0x4,
		.write_size = {41, 16}
	},

	/* B (Rh+) */
	{
		.read_top_left_offset = 0xFFD14 + 0x4,
		.read_top_left = {42, 0},
		.read_size_offset = 0xFEE60 + 0x8,
		.read_size = {40, 16},
		.write_size_offset = 0xFEE60 + 0xC,
		.write_size = {40, 16}
	},

	/* O (Rh+) */
	{
		.read_top_left_offset = 0xFFD14 + 0x8,
		.read_top_left = {83, 0},
		.read_size_offset = 0xFEE60 + 0x10,
		.read_size = {41, 16},
		.write_size_offset = 0xFEE60 + 0x14,
		.write_size = {41, 16}
	},

	/* AB (Rh+) */
	{
		.read_top_left_offset = 0xFFD14 + 0xC,
		.read_top_left = {125, 0},
		.read_size_offset = 0xFEE60 + 0x18,
		.read_size = {48, 16},
		.write_size_offset = 0xFEE60 + 0x1C,
		.write_size = {48, 16}
	},

	/* 5/28 - Gemini (Konata's Birthday) */
	{
		.read_top_left_offset = 0xFFD14 + 0x10,
		.read_top_left = {174, 0},
		.read_size_offset = 0xFEE60 + 0x20,
		.read_size = {77, 16},
		.write_size_offset = 0xFEE60 + 0x24,
		.write_size = {77, 16}
	},

	/* Games, anime, manga (Konata's hobbies) */
	{
		.read_top_left_offset = 0xFFD14 + 0x14,
		.read_top_left = {252, 0},
		.read_size_offset = 0xFEE60 + 0x28,
		.read_size = {116, 16},
		.write_size_offset = 0xFEE60 + 0x2C,
		.write_size = {116, 16}
	},

	/* Chocolate cornets, moe (Konata's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x18,
		.read_top_left = {369, 0},
		.read_size_offset = 0xFEE60 + 0x30,
		.read_size = {137, 16},
		.write_size_offset = 0xFEE60 + 0x34,
		.write_size = {137, 16}
	},

	/* 7/7 - Cancer (Kagami & Tsukasa's birthday) */
	{
		.read_top_left_offset = 0xFFD14 + 0x1C,
		.read_top_left = {0, 16},
		.read_size_offset = 0xFEE60 + 0x38,
		.read_size = {75, 16},
		.write_size_offset = 0xFEE60 + 0x3C,
		.write_size = {75, 16}
	},

	/* Mozuku, sports on TV (Konata's dislikes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x20,
		.read_top_left = {76, 16},
		.read_size_offset = 0xFEE60 + 0x40,
		.read_size = {124, 16},
		.write_size_offset = 0xFEE60 + 0x44,
		.write_size = {124, 16}
	},

	/* Books, games (Kagami's hobbies) */
	{
		.read_top_left_offset = 0xFFD14 + 0x24,
		.read_top_left = {201, 16},
		.read_size_offset = 0xFEE60 + 0x48,
		.read_size = {76, 16},
		.write_size_offset = 0xFEE60 + 0x4C,
		.write_size = {76, 16}
	},

	/* Sweets (esp. chocolate) (Kagami's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x28,
		.read_top_left = {278, 16},
		.read_size_offset = 0xFEE60 + 0x50,
		.read_size = {139, 16},
		.write_size_offset = 0xFEE60 + 0x54,
		.write_size = {139, 16}
	},

	/* Sweets (esp. chocolate) (Kagami's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x28,
		.read_top_left = {278, 16},
		.read_size_offset = 0xFEE60 + 0x50,
		.read_size = {139, 16},
		.write_size_offset = 0xFEE60 + 0x54,
		.write_size = {139, 16}
	},

	/* Shellfish, the scale (Kagami's dislikes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x2C,
		.read_top_left = {0, 32},
		.read_size_offset = 0xFEE60 + 0x58,
		.read_size = {110, 16},
		.write_size_offset = 0xFEE60 + 0x5C,
		.write_size = {110, 16}
	},

	/* Sushi, moe (Soujirou's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x30,
		.read_top_left = {418, 16},
		.read_size_offset = 0xFEE60 + 0x60,
		.read_size = {58, 16},
		.write_size_offset = 0xFEE60 + 0x64,
		.write_size = {58, 16}
	},

	/* Cooking at home (Tsukasa's hobbies) */
	{
		.read_top_left_offset = 0xFFD14 + 0x34,
		.read_top_left = {111, 32},
		.read_size_offset = 0xFEE60 + 0x68,
		.read_size = {91, 16},
		.write_size_offset = 0xFEE60 + 0x6C,
		.write_size = {91, 16}
	},

	/* Sweet food, novel things (Tsukasa's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x38,
		.read_top_left = {203, 32},
		.read_size_offset = 0xFEE60 + 0x70,
		.read_size = {144, 16},
		.write_size_offset = 0xFEE60 + 0x74,
		.write_size = {144, 16}
	},

	/* Bell pepper, occult, horror (Tsukasa's dislikes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x3C,
		.read_top_left = {347, 32},
		.read_size_offset = 0xFEE60 + 0x78,
		.read_size = {155, 16},
		.write_size_offset = 0xFEE60 + 0x7C,
		.write_size = {155, 16}
	},

	/* 10/25 - Scorpio (Miyuki's birthday) */
	{
		.read_top_left_offset = 0xFFD14 + 0x40,
		.read_top_left = {0, 48},
		.read_size_offset = 0xFEE60 + 0x80,
		.read_size = {90, 16},
		.write_size_offset = 0xFEE60 + 0x84,
		.write_size = {90, 16}
	},

	/* Unknown (Minoru's hobbies/likes/dislikes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x44,
		.read_top_left = {91, 48},
		.read_size_offset = 0xFEE60 + 0x88,
		.read_size = {49, 16},
		.write_size_offset = 0xFEE60 + 0x8C,
		.write_size = {49, 16}
	},

	/* Books, simple brain games (Miyuki's hobbies) */
	{
		.read_top_left_offset = 0xFFD14 + 0x48,
		.read_top_left = {141, 48},
		.read_size_offset = 0xFEE60 + 0x90,
		.read_size = {146, 16},
		.write_size_offset = 0xFEE60 + 0x94,
		.write_size = {146, 16}
	},

	/* Chawanmushi, wagashi, study (Miyuki's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x4C,
		.read_top_left = {288, 48},
		.read_size_offset = 0xFEE60 + 0x98,
		.read_size = {158, 16},
		.write_size_offset = 0xFEE60 + 0x9C,
		.write_size = {158, 16}
	},

	/* Raw fish, doctors (esp. dentist), (Miyuki's dislikes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x50,
		.read_top_left = {0, 64},
		.read_size_offset = 0xFEE60 + 0xA0,
		.read_size = {157, 16},
		.write_size_offset = 0xFEE60 + 0xA4,
		.write_size = {157, 16}
	},

	/* Driving (Yui's hobbies) */
	{
		.read_top_left_offset = 0xFFD14 + 0x54,
		.read_top_left = {447, 48},
		.read_size_offset = 0xFEE60 + 0xA8,
		.read_size = {43, 16},
		.write_size_offset = 0xFEE60 + 0xAC,
		.write_size = {43, 16}
	},

	/* 7/20 - Cancer (Misao's birthday) */
	{
		.read_top_left_offset = 0xFFD14 + 0x58,
		.read_top_left = {158, 64},
		.read_size_offset = 0xFEE60 + 0xB0,
		.read_size = {83, 16},
		.write_size_offset = 0xFEE60 + 0xB4,
		.write_size = {83, 16}
	},

	/* Sports (Misao's hobbies) */
	{
		.read_top_left_offset = 0xFFD14 + 0x5C,
		.read_top_left = {242, 64},
		.read_size_offset = 0xFEE60 + 0xB8,
		.read_size = {41, 16},
		.write_size_offset = 0xFEE60 + 0xBC,
		.write_size = {41, 16}
	},

	/* Hamburg steak, meatballs, sun (Misao's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x60,
		.read_top_left = {284, 64},
		.read_size_offset = 0xFEE60 + 0xC0,
		.read_size = {155, 16},
		.write_size_offset = 0xFEE60 + 0xC4,
		.write_size = {155, 16}
	},

	/* Konjac, veggies, rain (Misao's dislikes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x64,
		.read_top_left = {0, 80},
		.read_size_offset = 0xFEE60 + 0xC8,
		.read_size = {124, 16},
		.write_size_offset = 0xFEE60 + 0xCC,
		.write_size = {124, 16}
	},

	/* 11/4 - Scorpio (Ayano's birthday) */
	{
		.read_top_left_offset = 0xFFD14 + 0x68,
		.read_top_left = {124, 80},
		.read_size_offset = 0xFEE60 + 0xD0,
		.read_size = {78, 16},
		.write_size_offset = 0xFEE60 + 0xD4,
		.write_size = {78, 16}
	},

	/* Window shopping, walks, baking (Ayano's hobbies) */
	{
		.read_top_left_offset = 0xFFD14 + 0x6C,
		.read_top_left = {203, 80},
		.read_size_offset = 0xFEE60 + 0xD8,
		.read_size = {156, 16},
		.write_size_offset = 0xFEE60 + 0xDC,
		.write_size = {156, 16}
	},

	/* Tofu, gyoza (Ayano's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x70,
		.read_top_left = {440, 64},
		.read_size_offset = 0xFEE60 + 0xE0,
		.read_size = {70, 16},
		.write_size_offset = 0xFEE60 + 0xE4,
		.write_size = {70, 16}
	},

	/* Spicy food, cig. smoke (Ayano's dislikes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x74,
		.read_top_left = {360, 80},
		.read_size_offset = 0xFEE60 + 0xE8,
		.read_size = {125, 16},
		.write_size_offset = 0xFEE60 + 0xEC,
		.write_size = {125, 16}
	},

	/* Games (Akira's hobbies) */
	{
		.read_top_left_offset = 0xFFD14 + 0x78,
		.read_top_left = {0, 96},
		.read_size_offset = 0xFEE60 + 0xF0,
		.read_size = {36, 16},
		.write_size_offset = 0xFEE60 + 0xF4,
		.write_size = {36, 16}
	},

	/* 2/3 - Aquarius (Kou's birthday) */
	{
		.read_top_left_offset = 0xFFD14 + 0x7C,
		.read_top_left = {37, 96},
		.read_size_offset = 0xFEE60 + 0xF8,
		.read_size = {86, 16},
		.write_size_offset = 0xFEE60 + 0xFC,
		.write_size = {86, 16}
	},

	/* Doujin, people watching, betting (Kou's hobbies) */
	{
		.read_top_left_offset = 0xFFD14 + 0x80,
		.read_top_left = {124, 96},
		.read_size_offset = 0xFEE60 + 0x100,
		.read_size = {158, 16},
		.write_size_offset = 0xFEE60 + 0x104,
		.write_size = {158, 16}
	},

	/* Curry, sweet food (Kou's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x84,
		.read_top_left = {283, 96},
		.read_size_offset = 0xFEE60 + 0x108,
		.read_size = {107, 16},
		.write_size_offset = 0xFEE60 + 0x10C,
		.write_size = {107, 16}
	},

	/* Nothing in particular (Kou & Akira's dislikes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x88,
		.read_top_left = {391, 96},
		.read_size_offset = 0xFEE60 + 0x110,
		.read_size = {121, 16},
		.write_size_offset = 0xFEE60 + 0x114,
		.write_size = {121, 16}
	},

	/* Wasabi, humidity (Hiyori's dislikes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x8C,
		.read_top_left = {0, 112},
		.read_size_offset = 0xFEE60 + 0x118,
		.read_size = {94, 16},
		.write_size_offset = 0xFEE60 + 0x11C,
		.write_size = {94, 16}
	},

	/* 12/20 - Sagittarius (Yutaka's birthday) */
	{
		.read_top_left_offset = 0xFFD14 + 0x90,
		.read_top_left = {95, 112},
		.read_size_offset = 0xFEE60 + 0x120,
		.read_size = {114, 16},
		.write_size_offset = 0xFEE60 + 0x124,
		.write_size = {114, 16}
	},

	/* The Internet (Yutaka's hobbies) */
	{
		.read_top_left_offset = 0xFFD14 + 0x94,
		.read_top_left = {210, 112},
		.read_size_offset = 0xFEE60 + 0x128,
		.read_size = {74, 16},
		.write_size_offset = 0xFEE60 + 0x12C,
		.write_size = {74, 16}
	},

	/* Warm things, animals (Yutaka's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x98,
		.read_top_left = {285, 112},
		.read_size_offset = 0xFEE60 + 0x130,
		.read_size = {117, 16},
		.write_size_offset = 0xFEE60 + 0x134,
		.write_size = {117, 16}
	},

	/* Being sick, aggression (Yutaka's dislikes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x9C,
		.read_top_left = {0, 128},
		.read_size_offset = 0xFEE60 + 0x138,
		.read_size = {128, 16},
		.write_size_offset = 0xFEE60 + 0x13C,
		.write_size = {128, 16}
	},

	/* 9/12 - Virgo (Minami's birthday) */
	{
		.read_top_left_offset = 0xFFD14 + 0xA0,
		.read_top_left = {403, 112},
		.read_size_offset = 0xFEE60 + 0x140,
		.read_size = {69, 16},
		.write_size_offset = 0xFEE60 + 0x144,
		.write_size = {69, 16}
	},

	/* Books, piano (Minami's hobbies) */
	{
		.read_top_left_offset = 0xFFD14 + 0xA4,
		.read_top_left = {129, 128},
		.read_size_offset = 0xFEE60 + 0x148,
		.read_size = {71, 16},
		.write_size_offset = 0xFEE60 + 0x14C,
		.write_size = {71, 16}
	},

	/* Soba, quiet places (Minami's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0xA8,
		.read_top_left = {201, 128},
		.read_size_offset = 0xFEE60 + 0x150,
		.read_size = {104, 16},
		.write_size_offset = 0xFEE60 + 0x154,
		.write_size = {104, 16}
	},

	/* Soda, her physique (Minami's dislikes) */
	{
		.read_top_left_offset = 0xFFD14 + 0xAC,
		.read_top_left = {306, 128},
		.read_size_offset = 0xFEE60 + 0x158,
		.read_size = {109, 16},
		.write_size_offset = 0xFEE60 + 0x15C,
		.write_size = {109, 16}
	},

	/* Fruit, people (Kanata's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0xB0,
		.read_top_left = {416, 128},
		.read_size_offset = 0xFEE60 + 0x160,
		.read_size = {74, 16},
		.write_size_offset = 0xFEE60 + 0x164,
		.write_size = {74, 16}
	},

	/* 5/24 - Gemini (Hiyori's birthday) */
	{
		.read_top_left_offset = 0xFFD14 + 0xB4,
		.read_top_left = {0, 144},
		.read_size_offset = 0xFEE60 + 0x168,
		.read_size = {77, 16},
		.write_size_offset = 0xFEE60 + 0x16C,
		.write_size = {77, 16}
	},

	/* Doujin, manga, LNs, delusions (Hiyori's hobbies) */
	{
		.read_top_left_offset = 0xFFD14 + 0xB8,
		.read_top_left = {78, 144},
		.read_size_offset = 0xFEE60 + 0x170,
		.read_size = {156, 16},
		.write_size_offset = 0xFEE60 + 0x174,
		.write_size = {156, 16}
	},

	/* Western sweets, milk, art tools (Hiyori's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0xBC,
		.read_top_left = {235, 144},
		.read_size_offset = 0xFEE60 + 0x178,
		.read_size = {157, 16},
		.write_size_offset = 0xFEE60 + 0x17C,
		.write_size = {157, 16}
	},

	/* Anime, reading (manga) (unused) */

	/* 4/16 - Aries (Patty's birthday) */
	{
		.read_top_left_offset = 0xFFD14 + 0xC4,
		.read_top_left = {393, 144},
		.read_size_offset = 0xFEE60 + 0x188,
		.read_size = {69, 16},
		.write_size_offset = 0xFEE60 + 0x18C,
		.write_size = {69, 16}
	},

	/* Mustard, moe (Patty's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0xC8,
		.read_top_left = {0, 160},
		.read_size_offset = 0xFEE60 + 0x190,
		.read_size = {77, 16},
		.write_size_offset = 0xFEE60 + 0x194,
		.write_size = {77, 16}
	},

	/* Dried fish, unclear people (Patty's dislikes) */
	{
		.read_top_left_offset = 0xFFD14 + 0xCC,
		.read_top_left = {78, 160},
		.read_size_offset = 0xFEE60 + 0x198,
		.read_size = {148, 16},
		.write_size_offset = 0xFEE60 + 0x19C,
		.write_size = {148, 16}
	},

	/* 11/26 - Sagittarius (Yamato's birthday) */
	{
		.read_top_left_offset = 0xFFD14 + 0xD0,
		.read_top_left = {227, 160},
		.read_size_offset = 0xFEE60 + 0x1A0,
		.read_size = {110, 16},
		.write_size_offset = 0xFEE60 + 0x1A4,
		.write_size = {110, 16}
	},

	/* Karaoke, cycling (Yamato's hobbies) */
	{
		.read_top_left_offset = 0xFFD14 + 0xD4,
		.read_top_left = {338, 160},
		.read_size_offset = 0xFEE60 + 0x1A8,
		.read_size = {98, 16},
		.write_size_offset = 0xFEE60 + 0x1AC,
		.write_size = {98, 16}
	},

	/* Mizu yokan, summer (Yamato's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0xD8,
		.read_top_left = {0, 176},
		.read_size_offset = 0xFEE60 + 0x1B0,
		.read_size = {113, 16},
		.write_size_offset = 0xFEE60 + 0x1B4,
		.write_size = {113, 16}
	},

	/* Shellfish, winter (hates cold) (Yamato's dislikes) */
	{
		.read_top_left_offset = 0xFFD14 + 0xDC,
		.read_top_left = {114, 176},
		.read_size_offset = 0xFEE60 + 0x1B8,
		.read_size = {155, 16},
		.write_size_offset = 0xFEE60 + 0x1BC,
		.write_size = {155, 16}
	},

	/* Beer and edamame (Nanako's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0xE0,
		.read_top_left = {270, 176},
		.read_size_offset = 0xFEE60 + 0x1C0,
		.read_size = {103, 16},
		.write_size_offset = 0xFEE60 + 0x1C4,
		.write_size = {103, 16}
	},

	/* 2/8 - Aquarius (Nanako's birthday) */
	{
		.read_top_left_offset = 0xFFD14 + 0xE4,
		.read_top_left = {374, 176},
		.read_size_offset = 0xFEE60 + 0x1C8,
		.read_size = {86, 16},
		.write_size_offset = 0xFEE60 + 0x1CC,
		.write_size = {86, 16}
	},

	/* Watching sports, games (Nanako's hobbies) */
	{
		.read_top_left_offset = 0xFFD14 + 0xE8,
		.read_top_left = {0, 192},
		.read_size_offset = 0xFEE60 + 0x1D0,
		.read_size = {138, 16},
		.write_size_offset = 0xFEE60 + 0x1D4,
		.write_size = {138, 16}
	},

	/* Shiitake, temp. maintenance (Nanako's dislikes) */
	{
		.read_top_left_offset = 0xFFD14 + 0xEC,
		.read_top_left = {139, 192},
		.read_size_offset = 0xFEE60 + 0x1D8,
		.read_size = {157, 16},
		.write_size_offset = 0xFEE60 + 0x1DC,
		.write_size = {157, 16}
	},

	/* 1/25 - Aquarius (Hikaru's birthday) */
	{
		.read_top_left_offset = 0xFFD14 + 0xF0,
		.read_top_left = {297, 192},
		.read_size_offset = 0xFEE60 + 0x1E0,
		.read_size = {90, 16},
		.write_size_offset = 0xFEE60 + 0x1E4,
		.write_size = {90, 16}
	},

	/* Relapsing on smoking, model kits (Hikaru's hobbies) */
	{
		.read_top_left_offset = 0xFFD14 + 0xF4,
		.read_top_left = {0, 208},
		.read_size_offset = 0xFEE60 + 0x1E8,
		.read_size = {156, 16},
		.write_size_offset = 0xFEE60 + 0x1EC,
		.write_size = {156, 16}
	},

	/* Dietary supplements, sleep (Hikaru's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0xF8,
		.read_top_left = {157, 208},
		.read_size_offset = 0xFEE60 + 0x1F0,
		.read_size = {157, 16},
		.write_size_offset = 0xFEE60 + 0x1F4,
		.write_size = {157, 16}
	},

	/* Veggies, being misunderstood (Hikaru's dislikes) */
	{
		.read_top_left_offset = 0xFFD14 + 0xFC,
		.read_top_left = {315, 208},
		.read_size_offset = 0xFEE60 + 0x1F8,
		.read_size = {158, 16},
		.write_size_offset = 0xFEE60 + 0x1FC,
		.write_size = {158, 16}
	},

	/* Soy milk, complaints (Hinata's dislikes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x100,
		.read_top_left = {388, 192},
		.read_size_offset = 0xFEE60 + 0x200,
		.read_size = {113, 16},
		.write_size_offset = 0xFEE60 + 0x204,
		.write_size = {113, 16}
	},

	/* 9/17 - Virgo (Fuyuki's birthday) */
	{
		.read_top_left_offset = 0xFFD14 + 0x104,
		.read_top_left = {0, 224},
		.read_size_offset = 0xFEE60 + 0x208,
		.read_size = {69, 16},
		.write_size_offset = 0xFEE60 + 0x20C,
		.write_size = {69, 16}
	},

	/* Walks, books (Fuyuki's hobbies) */
	{
		.read_top_left_offset = 0xFFD14 + 0x108,
		.read_top_left = {70, 224},
		.read_size_offset = 0xFEE60 + 0x210,
		.read_size = {72, 16},
		.write_size_offset = 0xFEE60 + 0x214,
		.write_size = {72, 16}
	},

	/* Blk. tea, antiques, occult, horror (Fuyuki's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x10C,
		.read_top_left = {143, 224},
		.read_size_offset = 0xFEE60 + 0x218,
		.read_size = {158, 16},
		.write_size_offset = 0xFEE60 + 0x21C,
		.write_size = {158, 16}
	},

	/* Boats (can't swim) (Fuyuki's dislikes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x110,
		.read_top_left = {302, 224},
		.read_size_offset = 0xFEE60 + 0x220,
		.read_size = {105, 16},
		.write_size_offset = 0xFEE60 + 0x224,
		.write_size = {105, 16}
	},

	/* 10/7 - Libra (Yui's birthday) */
	{
		.read_top_left_offset = 0xFFD14 + 0x114,
		.read_top_left = {408, 224},
		.read_size_offset = 0xFEE60 + 0x228,
		.read_size = {68, 16},
		.write_size_offset = 0xFEE60 + 0x22C,
		.write_size = {68, 16}
	},

	/* Senbei, old games, husband (Yui's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x118,
		.read_top_left = {0, 240},
		.read_size_offset = 0xFEE60 + 0x230,
		.read_size = {153, 16},
		.write_size_offset = 0xFEE60 + 0x234,
		.write_size = {153, 16}
	},

	/* Tomatoes, job transfers (Yui's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x11C,
		.read_top_left = {154, 240},
		.read_size_offset = 0xFEE60 + 0x238,
		.read_size = {147, 16},
		.write_size_offset = 0xFEE60 + 0x23C,
		.write_size = {147, 16}
	},

	/* Cigarette smoke (Kanata's dislikes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x120,
		.read_top_left = {302, 240},
		.read_size_offset = 0xFEE60 + 0x240,
		.read_size = {96, 16},
		.write_size_offset = 0xFEE60 + 0x244,
		.write_size = {96, 16}
	},

	/* 9/6 - Virgo (Hikage's birthday) */
	{
		.read_top_left_offset = 0xFFD14 + 0x124,
		.read_top_left = {399, 240},
		.read_size_offset = 0xFEE60 + 0x248,
		.read_size = {65, 16},
		.write_size_offset = 0xFEE60 + 0x24C,
		.write_size = {65, 16}
	},

	/* Sweepstakes, armchair travel (Hikage's hobbies) */
	{
		.read_top_left_offset = 0xFFD14 + 0x128,
		.read_top_left = {0, 256},
		.read_size_offset = 0xFEE60 + 0x250,
		.read_size = {157, 16},
		.write_size_offset = 0xFEE60 + 0x254,
		.write_size = {157, 16}
	},

	/* Curry, meat, bargains (Hikage's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x12C,
		.read_top_left = {158, 256},
		.read_size_offset = 0xFEE60 + 0x258,
		.read_size = {128, 16},
		.write_size_offset = 0xFEE60 + 0x25C,
		.write_size = {128, 16}
	},

	/* Liver sashimi (Akira's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x130,
		.read_top_left = {287, 256},
		.read_size_offset = 0xFEE60 + 0x260,
		.read_size = {75, 16},
		.write_size_offset = 0xFEE60 + 0x264,
		.write_size = {75, 16}
	},

	/* Fish, fanatics (Hikage's dislikes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x134,
		.read_top_left = {363, 256},
		.read_size_offset = 0xFEE60 + 0x268,
		.read_size = {81, 16},
		.write_size_offset = 0xFEE60 + 0x26C,
		.write_size = {81, 16}
	},

	/* 6/15 - Gemini (Hinata's birthday) */
	{
		.read_top_left_offset = 0xFFD14 + 0x138,
		.read_top_left = {0, 272},
		.read_size_offset = 0xFEE60 + 0x270,
		.read_size = {73, 16},
		.write_size_offset = 0xFEE60 + 0x274,
		.write_size = {73, 16}
	},

	/* Games, manga, cosplay (Hinata's hobbies) */
	{
		.read_top_left_offset = 0xFFD14 + 0x13C,
		.read_top_left = {74, 272},
		.read_size_offset = 0xFEE60 + 0x278,
		.read_size = {130, 16},
		.write_size_offset = 0xFEE60 + 0x27C,
		.write_size = {130, 16}
	},

	/* 3/6 - Pisces (Yukari's birthday) */
	{
		.read_top_left_offset = 0xFFD14 + 0x140,
		.read_top_left = {205, 272},
		.read_size_offset = 0xFEE60 + 0x280,
		.read_size = {71, 16},
		.write_size_offset = 0xFEE60 + 0x284,
		.write_size = {71, 16}
	},

	/* Steak, Akihabara (Hinata's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x144,
		.read_top_left = {277, 272},
		.read_size_offset = 0xFEE60 + 0x288,
		.read_size = {100, 16},
		.write_size_offset = 0xFEE60 + 0x28C,
		.write_size = {100, 16}
	},

	/* 8/21 - Leo (Soujirou's birthday) */
	{
		.read_top_left_offset = 0xFFD14 + 0x148,
		.read_top_left = {378, 272},
		.read_size_offset = 0xFEE60 + 0x290,
		.read_size = {58, 16},
		.write_size_offset = 0xFEE60 + 0x294,
		.write_size = {58, 16}
	},

	/* Games, anime, books (Soujirou's and Patty's hobbies) */
	{
		.read_top_left_offset = 0xFFD14 + 0x14C,
		.read_top_left = {0, 288},
		.read_size_offset = 0xFEE60 + 0x298,
		.read_size = {115, 16},
		.write_size_offset = 0xFEE60 + 0x29C,
		.write_size = {115, 16}
	},

	/* Boiled tofu, curry (Yukari's likes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x150,
		.read_top_left = {116, 288},
		.read_size_offset = 0xFEE60 + 0x2A0,
		.read_size = {105, 16},
		.write_size_offset = 0xFEE60 + 0x2A4,
		.write_size = {105, 16}
	},

	/* Deadlines, product delays (Soujirou's dislikes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x154,
		.read_top_left = {222, 288},
		.read_size_offset = 0xFEE60 + 0x2A8,
		.read_size = {151, 16},
		.write_size_offset = 0xFEE60 + 0x2AC,
		.write_size = {151, 16}
	},

	/* 8/20 - Leo (Kanata's birthday) */
	{
		.read_top_left_offset = 0xFFD14 + 0x158,
		.read_top_left = {374, 288},
		.read_size_offset = 0xFEE60 + 0x2B0,
		.read_size = {63, 16},
		.write_size_offset = 0xFEE60 + 0x2B4,
		.write_size = {63, 16}
	},

	/* Cooking, painting, gardening (Kanata's hobbies) */
	{
		.read_top_left_offset = 0xFFD14 + 0x15C,
		.read_top_left = {0, 304},
		.read_size_offset = 0xFEE60 + 0x2B8,
		.read_size = {157, 16},
		.write_size_offset = 0xFEE60 + 0x2BC,
		.write_size = {157, 16}
	},

	/* Shopping, chitchat (Yukari's hobbies) */
	{
		.read_top_left_offset = 0xFFD14 + 0x160,
		.read_top_left = {158, 304},
		.read_size_offset = 0xFEE60 + 0x2C0,
		.read_size = {109, 16},
		.write_size_offset = 0xFEE60 + 0x2C4,
		.write_size = {109, 16}
	},

	/* Dark-colored veggies, natto (Yukari's dislikes) */
	{
		.read_top_left_offset = 0xFFD14 + 0x164,
		.read_top_left = {268, 304},
		.read_size_offset = 0xFEE60 + 0x2C8,
		.read_size = {158, 16},
		.write_size_offset = 0xFEE60 + 0x2CC,
		.write_size = {158, 16}
	},

	/* 2/14 - Aquarius (Akira's birthday) */
	{
		.read_top_left_offset = 0xFFD14 + 0x168,
		.read_top_left = {0, 320},
		.read_size_offset = 0xFEE60 + 0x2D0,
		.read_size = {90, 16},
		.write_size_offset = 0xFEE60 + 0x2D4,
		.write_size = {90, 16}
	},

	/* 1/1 - Minorius (Minoru's birthday) */
	{
		.read_top_left_offset = 0xFFD14 + 0x16C,
		.read_top_left = {91, 320},
		.read_size_offset = 0xFEE60 + 0x2D8,
		.read_size = {74, 16},
		.write_size_offset = 0xFEE60 + 0x2DC,
		.write_size = {74, 16}
	},

	/* ????? (not unlocked info) */
	{
		.read_top_left_offset = 0xFFD14 + 0x170,
		.read_top_left = {166, 320},
		.read_size_offset = 0xFEE60 + 0x2E0,
		.read_size = {39, 16},
		.write_size_offset = 0xFEE60 + 0x2E4,
		.write_size = {39, 16}
	}
};

texture_region_info_array g_union_2533_10_regions =
{
	.elems = s_union_2533_10_regions_data,
	.length = RGT_C_ARRAY_SIZE(s_union_2533_10_regions_data)
};

#endif