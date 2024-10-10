#ifndef PR_0_H
#define PR_0_H

#include "eboot_patch_structures.h"

static texture_region_info s_pr_0_regions_data[] =
{
	/* YES (index 0x1) */
	{
		.read_top_left_offset = 0x101EA4,
		.read_top_left = { 0, 16 },
		.read_size_offset = 0x101C40,
		.read_size = { 20, 16 },
		.write_size_offset = 0x101C44,
		.write_size = { 20, 16 }
	},

	/* NO (index 0x2) */
	{
		.read_top_left_offset = 0x101EA8,
		.read_top_left = { 20, 16 },
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
		"\x0D\x00\x4d\x00"
	),

	/* Save Episode+ progress? (region indices) */
	BUILD_BYTE_SEQUENCE_PATCH
	(
		0x1028BC,
		"\x28\x00\x4D\x00\x4D\x00\x4D\x00\x4D\x00"
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