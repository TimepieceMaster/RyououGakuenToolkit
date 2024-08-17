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
		.read_top_left = { 234, 1 },
		.read_size_offset = 0xFF368,
		.read_size = { 14, 16 },
		.write_size_offset = 0xFF36C,
		.write_size = { 14, 16 }
	},

	/* Off */
	{
		.read_top_left_offset = 0xFFF9C,
		.read_top_left = { 234, 17 },
		.read_size_offset = 0xFF370,
		.read_size = { 21, 16 },
		.write_size_offset = 0xFF374,
		.write_size = { 21, 16 }
	},

	/* Custom */
	{
		.read_top_left_offset = 0xFFFA0,
		.read_top_left = { 202, 75 },
		.read_size_offset = 0xFF378,
		.read_size = { 42, 16 },
		.write_size_offset = 0xFF37C,
		.write_size = { 42, 16 }
	},

	/* Memory Stick (TM) */
	{
		.read_top_left_offset = 0xFFFA4,
		.read_top_left = { 36, 127 },
		.read_size_offset = 0xFF380,
		.read_size = { 87, 16 },
		.write_size_offset = 0xFF384,
		.write_size = { 87, 16 }
	},

	/* UMD (TM) */
	{
		.read_top_left_offset = 0xFFFA8,
		.read_top_left = { 1, 127 },
		.read_size_offset = 0xFF388,
		.read_size = { 32, 16 },
		.write_size_offset = 0xFF38C,
		.write_size = { 32, 16 }
	},

	/* Off (replaces "nashi" in message skip) */
	{
		.read_top_left_offset = 0xFFFAC,
		.read_top_left = { 234, 17 },
		.read_size_offset = 0xFF390,
		.read_size = { 21, 16 },
		.write_size_offset = 0xFF394,
		.write_size = { 21, 16 }
	},

	/* Prev. Read */
	{
		.read_top_left_offset = 0xFFFB0,
		.read_top_left = { 112, 111 },
		.read_size_offset = 0xFF398,
		.read_size = { 62, 16 },
		.write_size_offset = 0xFF39C,
		.write_size = { 62, 16 }
	},

	/* All */
	{
		.read_top_left_offset = 0xFFFB4,
		.read_top_left = { 177, 111 },
		.read_size_offset = 0xFF3A0,
		.read_size = { 13, 16 },
		.write_size_offset = 0xFF3A4,
		.write_size = { 13, 16 }
	},

	/* Slow */
	{
		.read_top_left_offset = 0xFFFB8,
		.read_top_left = { 202, 47 },
		.read_size_offset = 0xFF3A8,
		.read_size = { 24, 16 },
		.write_size_offset = 0xFF3AC,
		.write_size = { 24, 16 }
	},

	/* Medium */
	{
		.read_top_left_offset = 0xFFFBC,
		.read_top_left = { 202, 61 },
		.read_size_offset = 0xFF3B0,
		.read_size = { 39, 16 },
		.write_size_offset = 0xFF3B4,
		.write_size = { 39, 16 }
	},

	/* Fast */
	{
		.read_top_left_offset = 0xFFFC0,
		.read_top_left = { 228, 47 },
		.read_size_offset = 0xFF3B8,
		.read_size = { 27, 16 },
		.write_size_offset = 0xFF3BC,
		.write_size = { 27, 16 }
	},

	/* Max */
	{
		.read_top_left_offset = 0xFFFC4,
		.read_top_left = { 88, 111 },
		.read_size_offset = 0xFF3C0,
		.read_size = { 21, 16 },
		.write_size_offset = 0xFF3C4,
		.write_size = { 21, 16 }
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
	}
};

texture_region_info_array g_union_2530_1_regions =
{
	.elems = s_union_2530_1_regions_data,
	.length = RGT_C_ARRAY_SIZE(s_union_2530_1_regions_data)
};

#endif