#ifndef UNION_2530_1_H
#define UNION_2530_1_H

static texture_region_info s_union_2530_1_regions_data[] =
{
/* Texture coordinates and size */

	/* Music */
	{
		.read_top_left_offset = 0xFFF40,
		.read_top_left = { 200, 1 },
		.read_size_offset = 0xFF2B8,
		.read_size = { 31, 16 },
		.write_size_offset = 0xFF2BC,
		.write_size = { 31, 16 }
	},

	/* SFX */
	{
		.read_top_left_offset = 0xFFF44,
		.read_top_left = { 170, 95 },
		.read_size_offset = 0xFF2C0,
		.read_size = { 21, 16 },
		.write_size_offset = 0xFF2C4,
		.write_size = { 21, 16 }
	},

	/* Voice */
	{
		.read_top_left_offset = 0xFFF48,
		.read_top_left = { 201, 17 },
		.read_size_offset = 0xFF2C8,
		.read_size = { 31, 16 },
		.write_size_offset = 0xFF2CC,
		.write_size = { 31, 16 }
	},

	/* Volume */
	{
		.read_top_left_offset = 0xFFF4C,
		.read_top_left = { 1, 95 },
		.read_size_offset = 0xFF2D0,
		.read_size = { 39, 16 },
		.write_size_offset = 0xFF2D4,
		.write_size = { 39, 16 }
	},

	/* Message */
	{
		.read_top_left_offset = 0xFFF54,
		.read_top_left = { 194, 95 },
		.read_size_offset = 0xFF2E0,
		.read_size = { 49, 16 },
		.write_size_offset = 0xFF2E4,
		.write_size = { 49, 16 }
	},

	/* Speed */
	{
		.read_top_left_offset = 0xFFF58,
		.read_top_left = { 1, 111 },
		.read_size_offset = 0xFF2E8,
		.read_size = { 34, 16 },
		.write_size_offset = 0xFF2EC,
		.write_size = { 34, 16 }
	},

	/* Auto */
	{
		.read_top_left_offset = 0xFFF5C,
		.read_top_left = { 202, 32 },
		.read_size_offset = 0xFF2F0,
		.read_size = { 28, 16 },
		.write_size_offset = 0xFF2F4,
		.write_size = { 28, 16 }
	},

	/* Enable Voices */
	{
		.read_top_left_offset = 0xFFF64,
		.read_top_left = { 89, 95 },
		.read_size_offset = 0xFF300,
		.read_size = { 78, 16 },
		.write_size_offset = 0xFF304,
		.write_size = { 78, 16 }
	},

	/* System */
	{
		.read_top_left_offset = 0xFFF74,
		.read_top_left = { 43, 95 },
		.read_size_offset = 0xFF320,
		.read_size = { 43, 16 },
		.write_size_offset = 0xFF324,
		.write_size = { 43, 16 }
	},

	/* Skipping */
	{
		.read_top_left_offset = 0xFFF78,
		.read_top_left = { 38, 111 },
		.read_size_offset = 0xFF328,
		.read_size = { 47, 16 },
		.write_size_offset = 0xFF32C,
		.write_size = { 47, 16 }
	},

	/* Load From */
	{
		.read_top_left_offset = 0xFFF7C,
		.read_top_left = { 194, 111 },
		.read_size_offset = 0xFF330,
		.read_size = { 58, 16 },
		.write_size_offset = 0xFF334,
		.write_size = { 58, 16 }
	},

	/* On */
	{
		.read_top_left_offset = 0xFFF98,
		.read_top_left = { 234, 2 },
		.read_size_offset = 0xFF368,
		.read_size = { 14, 15 },
		.write_size_offset = 0xFF36C,
		.write_size = { 14, 15 }
	},

	/* Off */
	{
		.read_top_left_offset = 0xFFF9C,
		.read_top_left = { 234, 18 },
		.read_size_offset = 0xFF370,
		.read_size = { 21, 15 },
		.write_size_offset = 0xFF374,
		.write_size = { 21, 15 }
	},

	/* Custom */
	{
		.read_top_left_offset = 0xFFFA0,
		.read_top_left = { 202, 76 },
		.read_size_offset = 0xFF378,
		.read_size = { 42, 15 },
		.write_size_offset = 0xFF37C,
		.write_size = { 42, 15 }
	},

	/* Memory Stick (TM) */
	{
		.read_top_left_offset = 0xFFFA4,
		.read_top_left = { 36, 128 },
		.read_size_offset = 0xFF380,
		.read_size = { 87, 15 },
		.write_size_offset = 0xFF384,
		.write_size = { 87, 15 }
	},

	/* UMD (TM) */
	{
		.read_top_left_offset = 0xFFFA8,
		.read_top_left = { 1, 128 },
		.read_size_offset = 0xFF388,
		.read_size = { 32, 15 },
		.write_size_offset = 0xFF38C,
		.write_size = { 32, 15 }
	},

	/* Off (replaces "nashi" in message skip) */
	{
		.read_top_left_offset = 0xFFFAC,
		.read_top_left = { 234, 18 },
		.read_size_offset = 0xFF390,
		.read_size = { 21, 15 },
		.write_size_offset = 0xFF394,
		.write_size = { 21, 15 }
	},

	/* Prev. Read */
	{
		.read_top_left_offset = 0xFFFB0,
		.read_top_left = { 112, 112 },
		.read_size_offset = 0xFF398,
		.read_size = { 62, 15 },
		.write_size_offset = 0xFF39C,
		.write_size = { 62, 15 }
	},

	/* All */
	{
		.read_top_left_offset = 0xFFFB4,
		.read_top_left = { 177, 112 },
		.read_size_offset = 0xFF3A0,
		.read_size = { 13, 15 },
		.write_size_offset = 0xFF3A4,
		.write_size = { 13, 15 }
	},

	/* Slow */
	{
		.read_top_left_offset = 0xFFFB8,
		.read_top_left = { 202, 48 },
		.read_size_offset = 0xFF3A8,
		.read_size = { 24, 15 },
		.write_size_offset = 0xFF3AC,
		.write_size = { 24, 15 }
	},

	/* Medium */
	{
		.read_top_left_offset = 0xFFFBC,
		.read_top_left = { 202, 62 },
		.read_size_offset = 0xFF3B0,
		.read_size = { 39, 15 },
		.write_size_offset = 0xFF3B4,
		.write_size = { 39, 15 }
	},

	/* Fast */
	{
		.read_top_left_offset = 0xFFFC0,
		.read_top_left = { 228, 48 },
		.read_size_offset = 0xFF3B8,
		.read_size = { 27, 15 },
		.write_size_offset = 0xFF3BC,
		.write_size = { 27, 15 }
	},

	/* Max */
	{
		.read_top_left_offset = 0xFFFC4,
		.read_top_left = { 88, 112 },
		.read_size_offset = 0xFF3C0,
		.read_size = { 21, 15 },
		.write_size_offset = 0xFF3C4,
		.write_size = { 21, 15 }
	},

/* Screen coordinates */

	/* Music (line 1) */
	{
		.write_top_left_offset = 0x103FD0 + 0x2,
		.write_top_left = { 0, REGION_INFO_IGNORE }
	},

	/* Volume (line 1) */
	{
		.write_top_left_offset = 0x103FD0 + 0x6,
		.write_top_left = { 34, REGION_INFO_IGNORE }
	},

	/* SFX (line 2) */ 
	{
		.write_top_left_offset = 0x103FD0 + 0xE,
		.write_top_left = { 0, REGION_INFO_IGNORE }
	},

	/* Volume (line 2) */
	{
		.write_top_left_offset = 0x103FD0 + 0x12,
		.write_top_left = { 24, REGION_INFO_IGNORE }
	},

	/* Voice (line 3) */
	{
		.write_top_left_offset = 0x103FD0 + 0x1A,
		.write_top_left = { 0, REGION_INFO_IGNORE }
	},

	/* Volume (line 3) */
	{
		.write_top_left_offset = 0x103FD0 + 0x1E,
		.write_top_left = { 34, REGION_INFO_IGNORE }
	},

	/* System (line 4) */
	{
		.write_top_left_offset = 0x103FD0 + 0x26,
		.write_top_left = { 0, REGION_INFO_IGNORE }
	},

	/* SFX (line 4) */
	{
		.write_top_left_offset = 0x103FD0 + 0x2A,
		.write_top_left = { 46, REGION_INFO_IGNORE }
	},

	/* Volume (line 4) */
	{
		.write_top_left_offset = 0x103FD0 + 0x2E,
		.write_top_left = { 70, REGION_INFO_IGNORE }
	},

	/* Voices Enabled (line 5) */
	{
		.write_top_left_offset = 0x103FD0 + 0x32,
		.write_top_left = { 0, REGION_INFO_IGNORE }
	},

	/* Message (line 6) */
	{
		.write_top_left_offset = 0x103FD0 + 0x3E,
		.write_top_left = { 0, REGION_INFO_IGNORE }
	},

	/* Speed (line 6) */
	{
		.write_top_left_offset = 0x103FD0 + 0x42,
		.write_top_left = { 52, REGION_INFO_IGNORE }
	},

	/* Message (line 7) */
	{
		.write_top_left_offset = 0x103FD0 + 0x4A,
		.write_top_left = { 0, REGION_INFO_IGNORE }
	},

	/* Auto (line 7) */
	{
		.write_top_left_offset = 0x103FD0 + 0x4E,
		.write_top_left = { 52, REGION_INFO_IGNORE }
	},

	/* Speed (line 7) */
	{
		.write_top_left_offset = 0x103FD0 + 0x52,
		.write_top_left = { 83, REGION_INFO_IGNORE }
	},

	/* Message (line 8) */
	{
		.write_top_left_offset = 0x103FD0 + 0x56,
		.write_top_left = { 0, REGION_INFO_IGNORE }
	},

	/* Skipping (line 8) */
	{
		.write_top_left_offset = 0x103FD0 + 0x5A,
		.write_top_left = { 52, REGION_INFO_IGNORE }
	},

	/* Load From (line 9) */
	{
		.write_top_left_offset = 0x103FD0 + 0x62,
		.write_top_left = { 0, REGION_INFO_IGNORE }
	},

/* Selections */

	/* Slow highlight (all lines) */
	{
		.write_top_left_offset = 0x103FD0 + 0xB2,
		.write_top_left = { 0xFFFB, REGION_INFO_IGNORE }
	},

	/* Medium text (all lines) */
	{
		.write_top_left_offset = 0x103FD0 + 0xB6,
		.write_top_left = { 0xF9, REGION_INFO_IGNORE }
	},

	/* Medium highlight (all lines) */
	{
		.write_top_left_offset = 0x103FD0 + 0xBE,
		.write_top_left = { 0xFFFB, REGION_INFO_IGNORE },
		.write_size_offset = 0x103FD0 + 0xBA,
		.write_size = { 0x20, REGION_INFO_IGNORE }
	},

	/* Fast text (all lines) */
	{
		.write_top_left_offset = 0x103FD0 + 0xC2,
		.write_top_left = { 0x133, REGION_INFO_IGNORE }
	},

	/* Max highlight (all lines) */
	{
		.write_top_left_offset = 0x103FD0 + 0xD6,
		.write_top_left = { 0xFFFB, REGION_INFO_IGNORE },
		.write_size_offset = 0x103FD0 + 0xD2,
		.write_size = { 0xF, REGION_INFO_IGNORE }
	},

	/* Max text (all lines) */
	{
		.write_top_left_offset = 0x103FD0 + 0xCE,
		.write_top_left = { 0x161, REGION_INFO_IGNORE }
	},

	/* On highlight */
	{
		.write_size_offset = 0x103FD0 + 0xDE,
		.write_size = { 0x7, REGION_INFO_IGNORE }
	},

	/* On text */
	{
		.write_top_left_offset = 0x103FD0 + 0xDA,
		.write_top_left = { 0xD2, REGION_INFO_IGNORE }
	},

	/* Off highlight (voices enabled) */
	{
		.write_size_offset = 0x103FD0 + 0xEA,
		.write_size = { 0xC, REGION_INFO_IGNORE }
	},

	/* Off text (voices enabled) */
	{
		.write_top_left_offset = 0x103FD0 + 0xE6,
		.write_top_left = { 0x10C, REGION_INFO_IGNORE }
	},

	/* Custom highlight */
	{
		.write_size_offset = 0x103FD0 + 0xF6,
		.write_size = { 0x23, REGION_INFO_IGNORE }
	},

	/* Custom text */
	{
		.write_top_left_offset = 0x103FD0 + 0xF2,
		.write_top_left = { 0x14C, REGION_INFO_IGNORE }
	},

	/* Off highlight (message skipping) */
	{
		.write_size_offset = 0x103FD0 + 0x10E,
		.write_size = { 0xC, REGION_INFO_IGNORE }
	},

	/* Off text (message skipping) */
	{
		.write_top_left_offset = 0x103FD0 + 0x10A,
		.write_top_left = { 0xCF, REGION_INFO_IGNORE }
	},

	/* Prev. Read highlight */
	{
		.write_size_offset = 0x103FD0 + 0x11A,
		.write_size = { 0x36, REGION_INFO_IGNORE },
	},

	/* Prev. Read text */
	{
		.write_top_left_offset = 0x103FD0 + 0x116,
		.write_top_left = { 0x108, REGION_INFO_IGNORE }
	},

	/* All highlight */
	{
		.write_size_offset = 0x103FD0 + 0x126,
		.write_size = { 0x6, REGION_INFO_IGNORE },
	},

	/* All text */
	{
		.write_top_left_offset = 0x103FD0 + 0x122,
		.write_top_left = { 0x169, REGION_INFO_IGNORE }
	},

	/* UMD (TM) highlight */
	{
		.write_top_left_offset = 0x103FD0 + 0x13E,
		.write_top_left = { 0x17, REGION_INFO_IGNORE }
	},

	/* Memory Stick (TM) text */
	{
		.write_top_left_offset = 0x103FD0 + 0x146,
		.write_top_left = { 0x11F, REGION_INFO_IGNORE }
	},

/* Enable Voices */

	/* Konata */
	{
		.read_top_left_offset = 0x100010 + 0x8,
		.read_top_left = { 126, 129 },
		.read_size_offset = 0xFF460 + 0x8,
		.read_size = { 42, 14 },
		.write_size_offset = 0xFF460 + 0xC,
		.write_size = { 42, 14 }
	},

	/* Kagami */
	{
		.read_top_left_offset = 0x100010 + 0xC,
		.read_top_left = { 1, 143 },
		.read_size_offset = 0xFF460 + 0x10,
		.read_size = { 39, 14 },
		.write_size_offset = 0xFF460 + 0x14,
		.write_size = { 39, 14 }
	},

	/* Tsukasa */
	{
		.read_top_left_offset = 0x100010 + 0x10,
		.read_top_left = { 43, 143 },
		.read_size_offset = 0xFF460 + 0x18,
		.read_size = { 48, 14 },
		.write_size_offset = 0xFF460 + 0x1C,
		.write_size = { 48, 14 }
	},

	/* Miyuki */
	{
		.read_top_left_offset = 0x100010 + 0x14,
		.read_top_left = { 94, 143 },
		.read_size_offset = 0xFF460 + 0x20,
		.read_size = { 35, 14 },
		.write_size_offset = 0xFF460 + 0x24,
		.write_size = { 35, 14 }
	},

	/* Misao */
	{
		.read_top_left_offset = 0x100010 + 0x18,
		.read_top_left = { 64, 158 },
		.read_size_offset = 0xFF460 + 0x28,
		.read_size = { 31, 14 },
		.write_size_offset = 0xFF460 + 0x2C,
		.write_size = { 31, 14 }
	},

	/* Ayano */
	{
		.read_top_left_offset = 0x100010 + 0x1C,
		.read_top_left = { 1, 158 },
		.read_size_offset = 0xFF460 + 0x30,
		.read_size = { 36, 14 },
		.write_size_offset = 0xFF460 + 0x34,
		.write_size = { 36, 14 }
	},

	/* Kou */
	{
		.read_top_left_offset = 0x100010 + 0x20,
		.read_top_left = { 40, 158 },
		.read_size_offset = 0xFF460 + 0x38,
		.read_size = { 21, 14 },
		.write_size_offset = 0xFF460 + 0x3C,
		.write_size = { 21, 14 }
	},

	/* Yutaka */
	{
		.read_top_left_offset = 0x100010 + 0x24,
		.read_top_left = { 132, 143 },
		.read_size_offset = 0xFF460 + 0x40,
		.read_size = { 41, 14 },
		.write_size_offset = 0xFF460 + 0x44,
		.write_size = { 41, 14 }
	},

	/* Minami */
	{
		.read_top_left_offset = 0x100010 + 0x28,
		.read_top_left = { 176, 143 },
		.read_size_offset = 0xFF460 + 0x48,
		.read_size = { 35, 14 },
		.write_size_offset = 0xFF460 + 0x4C,
		.write_size = { 35, 14 }
	},

	/* Hiyori */
	{
		.read_top_left_offset = 0x100010 + 0x2C,
		.read_top_left = { 214, 143 },
		.read_size_offset = 0xFF460 + 0x50,
		.read_size = { 34, 14 },
		.write_size_offset = 0xFF460 + 0x54,
		.write_size = { 34, 14 }
	},

	/* Patty */
	{
		.read_top_left_offset = 0x100010 + 0x30,
		.read_top_left = { 98, 158 },
		.read_size_offset = 0xFF460 + 0x58,
		.read_size = { 35, 14 },
		.write_size_offset = 0xFF460 + 0x5C,
		.write_size = { 35, 14 }
	},

	/* Yamato */
	{
		.read_top_left_offset = 0x100010 + 0x34,
		.read_top_left = { 136, 158 },
		.read_size_offset = 0xFF460 + 0x60,
		.read_size = { 42, 14 },
		.write_size_offset = 0xFF460 + 0x64,
		.write_size = { 42, 14 }
	},

	/* Nanako */
	{
		.read_top_left_offset = 0x100010 + 0x38,
		.read_top_left = { 181, 158 },
		.read_size_offset = 0xFF460 + 0x68,
		.read_size = { 42, 14 },
		.write_size_offset = 0xFF460 + 0x6C,
		.write_size = { 42, 14 }
	},

	/* Hikaru */
	{
		.read_top_left_offset = 0x100010 + 0x3C,
		.read_top_left = { 1, 174 },
		.read_size_offset = 0xFF460 + 0x70,
		.read_size = { 37, 14 },
		.write_size_offset = 0xFF460 + 0x74,
		.write_size = { 37, 14 }
	},

	/* Fuyuki */
	{
		.read_top_left_offset = 0x100010 + 0x40,
		.read_top_left = { 41, 174 },
		.read_size_offset = 0xFF460 + 0x78,
		.read_size = { 38, 14 },
		.write_size_offset = 0xFF460 + 0x7C,
		.write_size = { 38, 14 }
	},

	/* Yui */
	{
		.read_top_left_offset = 0x100010 + 0x44,
		.read_top_left = { 226, 158 },
		.read_size_offset = 0xFF460 + 0x80,
		.read_size = { 16, 14 },
		.write_size_offset = 0xFF460 + 0x84,
		.write_size = { 16, 14 }
	},

	/* Hikage */
	{
		.read_top_left_offset = 0x100010 + 0x48,
		.read_top_left = { 82, 174 },
		.read_size_offset = 0xFF460 + 0x88,
		.read_size = { 37, 14 },
		.write_size_offset = 0xFF460 + 0x8C,
		.write_size = { 37, 14 }
	},

	/* Hinata */
	{
		.read_top_left_offset = 0x100010 + 0x4C,
		.read_top_left = { 122, 174 },
		.read_size_offset = 0xFF460 + 0x90,
		.read_size = { 37, 14 },
		.write_size_offset = 0xFF460 + 0x94,
		.write_size = { 37, 14 }
	},

	/* Soujirou */
	{
		.read_top_left_offset = 0x100010 + 0x50,
		.read_top_left = { 196, 174 },
		.read_size_offset = 0xFF460 + 0x98,
		.read_size = { 50, 14 },
		.write_size_offset = 0xFF460 + 0x9C,
		.write_size = { 50, 14 }
	},

	/* Kanata */
	{
		.read_top_left_offset = 0x100010 + 0x54,
		.read_top_left = { 195, 201 },
		.read_size_offset = 0xFF460 + 0xA0,
		.read_size = { 42, 14 },
		.write_size_offset = 0xFF460 + 0xA4,
		.write_size = { 42, 14 }
	},

	/* Yukari */
	{
		.read_top_left_offset = 0x100010 + 0x58,
		.read_top_left = { 1, 190 },
		.read_size_offset = 0xFF460 + 0xA8,
		.read_size = { 37, 14 },
		.write_size_offset = 0xFF460 + 0xAC,
		.write_size = { 37, 14 }
	},

	/* Akira */
	{
		.read_top_left_offset = 0x100010 + 0x5C,
		.read_top_left = { 162, 174 },
		.read_size_offset = 0xFF460 + 0xB0,
		.read_size = { 31, 14 },
		.write_size_offset = 0xFF460 + 0xB4,
		.write_size = { 31, 14 }
	},

	/* Minoru */
	{
		.read_top_left_offset = 0x100010 + 0x60,
		.read_top_left = { 41, 190 },
		.read_size_offset = 0xFF460 + 0xB8,
		.read_size = { 38, 14 },
		.write_size_offset = 0xFF460 + 0xBC,
		.write_size = { 38, 14 }
	},

	/* Misc. */
	{
		.read_top_left_offset = 0x100010 + 0x64,
		.read_top_left = { 82, 190 },
		.read_size_offset = 0xFF460 + 0xC0,
		.read_size = { 27, 14 },
		.write_size_offset = 0xFF460 + 0xC4,
		.write_size = { 27, 14 }
	}
};

static single_instruction_patch s_union_2530_1_instruction_patches_data[] =
{
	{ 0x4A0D8, 0x24850053 }, /* Center highlight "on" for voice out menu */
	{ 0x4A0C8, 0x3404002E }, /* Center highlight "off" for voice out menu */
};

texture_region_info_array g_union_2530_1_regions =
{
	.elems = s_union_2530_1_regions_data,
	.length = RGT_C_ARRAY_SIZE(s_union_2530_1_regions_data)
};

single_instruction_patch_array g_union_2530_1_instruction_patches =
{
	.elems = s_union_2530_1_instruction_patches_data,
	.length = RGT_C_ARRAY_SIZE(s_union_2530_1_instruction_patches_data)
};

#endif