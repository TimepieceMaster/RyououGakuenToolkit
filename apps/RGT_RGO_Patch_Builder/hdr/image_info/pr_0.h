#ifndef PR_0_H
#define PR_0_H

#include "eboot_patch_structures.h"

static texture_region_info s_pr_0_regions_data[] =
{
	/* YES (index 0x1) */
	{
		.read_top_left_offset = 0x101EA4,
		.read_top_left = { 326, 0 },
		.read_size_offset = 0x101C40,
		.read_size = { 20, 16 },
		.write_size_offset = 0x101C44,
		.write_size = { 20, 16 }
	},

	/* NO (index 0x2) */
	{
		.read_top_left_offset = 0x101EA8,
		.read_top_left = { 346, 0 },
		.read_size_offset = 0x101C48,
		.read_size = { 15, 16 },
		.write_size_offset = 0x101C4C,
		.write_size = { 15, 16 }
	},

	/* SAVE (index 0x3) */
	{
		.read_top_left_offset = 0x101EAC,
		.read_top_left = { 0, 0 },
		.read_size_offset = 0x101C50,
		.read_size = { 29, 16 },
		.write_size_offset = 0x101C54,
		.write_size = { 29, 16 }
	},

	/* LOAD (index 0x4) */
	{
		.read_top_left_offset = 0x101EB0,
		.read_top_left = { 29, 0 },
		.read_size_offset = 0x101C58,
		.read_size = { 30, 16 },
		.write_size_offset = 0x101C5C,
		.write_size = { 30, 16 }
	},

	/* OPTIONS (index 0x5) */
	{
		.read_top_left_offset = 0x101EB4,
		.read_top_left = { 59, 0 },
		.read_size_offset = 0x101C60,
		.read_size = { 47, 16 },
		.write_size_offset = 0x101C64,
		.write_size = { 47, 16 }
	},

	/* SCREENSHOT (index 0x6) */
	{
		.read_top_left_offset = 0x101EB8,
		.read_top_left = { 106, 0 },
		.read_size_offset = 0x101C68,
		.read_size = { 72, 16 },
		.write_size_offset = 0x101C6C,
		.write_size = { 72, 16 }
	},

	/* SAVE & QUIT (index 0x7) */
	{
		.read_top_left_offset = 0x101EBC,
		.read_top_left = { 178, 0 },
		.read_size_offset = 0x101C70,
		.read_size = { 66, 16 },
		.write_size_offset = 0x101C74,
		.write_size = { 66, 16 }
	},

	/* EXIT SCENARIO (index 0x8) */
	{
		.read_top_left_offset = 0x101EC0,
		.read_top_left = { 244, 0 },
		.read_size_offset = 0x101C78,
		.read_size = { 82, 16 },
		.write_size_offset = 0x101C7C,
		.write_size = { 82, 16 }
	},

	/* Save and exit the game? (index 0x9) */
	{
		.write_top_left_offset = 0x102378,
		.write_top_left = { 170, 114 },
		.read_top_left_offset = 0x101EC4,
		.read_top_left = { 361, 0 },
		.read_size_offset = 0x101C80,
		.read_size = { 139, 16 },
		.write_size_offset = 0x101C84,
		.write_size = { 139, 16 }
	},

	/* Please enter a name (index 0xC) */
	{
		.write_top_left_offset = 0x1023E8,
		.write_top_left = { 181, 129 },
		.read_top_left_offset = 0x101ED0,
		.read_top_left = { 0, 48 },
		.read_size_offset = 0x101C98,
		.read_size = { 117, 16 },
		.write_size_offset = 0x101C9C,
		.write_size = { 117, 16 }
	},

	/* Is this a good name? (index 0xB) */
	{
		.write_top_left_offset = 0x102420,
		.write_top_left = { 183, 114 },
		.read_top_left_offset = 0x101ECC,
		.read_top_left = { 117, 48 },
		.read_size_offset = 0x101C90,
		.read_size = { 113, 16 },
		.write_size_offset = 0x101C94,
		.write_size = { 113, 16 }
	},

	/* Return to title screen? (index 0xD) */
	{
		.write_top_left_offset = 0x1023B0,
		.write_top_left = { 170, 114 },
		.read_top_left_offset = 0x101ED4,
		.read_top_left = { 288, 32 },
		.read_size_offset = 0x101CA0,
		.read_size = { 139, 16 },
		.write_size_offset = 0x101CA4,
		.write_size = { 139, 16 }
	},

	/* Quick Save set. (index 0x10) */
	{
		.write_top_left_offset = 0x102B20,
		.write_top_left = { 196, 128 },
		.read_top_left_offset = 0x101EE0,
		.read_top_left = { 0, 16 },
		.read_size_offset = 0x101CB8,
		.read_size = { 88, 16 },
		.write_size_offset = 0x101CBC,
		.write_size = { 88, 16 }
	},

	/* Overwrite existing save data? (index 0x20) */
	{
		.write_top_left_offset = 0x102538,
		.write_top_left = { 150, 114 },
		.read_top_left_offset = 0x101F20,
		.read_top_left = { 0, 32 },
		.read_size_offset = 0x101D38,
		.read_size = { 180, 16 },
		.write_size_offset = 0x101D3C,
		.write_size = { 180, 16 }
	},

	/* Load this file? (index 0x21) */
	{
		.write_top_left_offset = 0x1025e0,
		.write_top_left = { 198, 114 },
		.read_top_left_offset = 0x101F24,
		.read_top_left = { 88, 16 },
		.read_size_offset = 0x101D40,
		.read_size = { 83, 16 },
		.write_size_offset = 0x101D44,
		.write_size = { 83, 16 }
	},

	/* Save Episode+ progress? (index 0x28) */
	{
		.write_top_left_offset = 0x1028B8,
		.write_top_left = { 166, 114 },
		.read_top_left_offset = 0x101F40,
		.read_top_left = { 0, 64 },
		.read_size_offset = 0x101D78,
		.read_size = { 148, 16 },
		.write_size_offset = 0x101D7C,
		.write_size = { 148, 16 }
	},

	/* Unsaved data will be lost. (index 0x39) */
	{
		.read_top_left_offset = 0x101F84,
		.read_top_left = { 148, 64 },
		.read_size_offset = 0x101E00,
		.read_size = { 144, 16 },
		.write_size_offset = 0x101E04,
		.write_size = { 144, 16 }
	}
};

static single_instruction_patch s_pr_0_single_instruction_patches[] =
{
	/* Pause menu (story mode) highlight size */
	{ 0x3D56C, 0x24A5FFE8 },

	/* Yes and No choice highlight and placement */
	{ 0x3BD1C, 0x340400B3 },
	{ 0x3BC64, 0x2624004C },
	{ 0x3BC74, 0x2624FFEB },
	{ 0x3BF7C, 0x340400B6 },

	/* "Unsaved data will be lost" 
	 * Line placement. Removal of third line. */
	{ 0x3BF98, 0x341000A8 },
	{ 0x3BFA0, 0x34040080 },
	{ 0x3BFC8, 0x34040000 },
	{ 0x3BFD0, 0x34040000 }
};

static byte_sequence_patch s_pr_0_byte_sequence_patches_data[] =
{
	/* Pause menu options x positions (story mode) */
	BUILD_BYTE_SEQUENCE_PATCH
	(
		0x10232C,
		"\x30\x00\x30\x00\x27\x00\x1B\x00\x1E\x00"
	),

	/* Pause menu options x positions (mini-scenario) */
	BUILD_BYTE_SEQUENCE_PATCH
	(
		0x102364,
		"\x30\x00\x30\x00\x27\x00\x1B\x00\x16\x00"
	),

	/* Load this file? (region indices) */
	BUILD_BYTE_SEQUENCE_PATCH
	(
		0x1025E4,
		"\x21\x00\x4D\x00\x4D\x00"
	),

	/* Save and exit the game? (region indices) */
	BUILD_BYTE_SEQUENCE_PATCH
	(
		0x10237C,
		"\x09\x00\x4D\x00"
	),

	/* Is this a good name? (region indices) */
	BUILD_BYTE_SEQUENCE_PATCH
	(
		0x102424,
		"\x0B\x00\x4D\x00\x4D\x00"
	),

	/* Return to title screen? (region indices) */
	BUILD_BYTE_SEQUENCE_PATCH
	(
		0x1023B4,
		"\x0D\x00\x4D\x00"
	),

	/* Quick Save set. (region indices) */
	BUILD_BYTE_SEQUENCE_PATCH
	(
		0x102B24,
		"\x10\x00\x4D\x00\x4D\x00"
	),

	/* Save Episode+ progress? (region indices) */
	BUILD_BYTE_SEQUENCE_PATCH
	(
		0x1028BC,
		"\x28\x00\x4D\x00\x4D\x00\x4D\x00\x4D\x00"
	),

	/* Return to title screen? Unsaved data will be lost.
	 * (x coordinate + region indices) */
	BUILD_BYTE_SEQUENCE_PATCH
	(
		0x1028F0,
		"\xAA\x00\x6A\x00\x0D\x00\x4D\x00\x4D\x00"
	)
};

texture_region_info_array g_pr_0_regions =
{
	.elems = s_pr_0_regions_data,
	.length = RGT_C_ARRAY_SIZE(s_pr_0_regions_data)
};

single_instruction_patch_array g_pr_0_single_instruction_patches =
{
	.elems = s_pr_0_single_instruction_patches,
	.length = RGT_C_ARRAY_SIZE(s_pr_0_single_instruction_patches)
};

byte_sequence_patch_array g_pr_byte_sequence_patches =
{
	.elems = s_pr_0_byte_sequence_patches_data,
	.length = RGT_C_ARRAY_SIZE(s_pr_0_byte_sequence_patches_data)
};

#endif