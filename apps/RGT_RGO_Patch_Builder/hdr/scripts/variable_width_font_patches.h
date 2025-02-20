#ifndef VARIABLE_WIDTH_FONT_PATCHES_H
#define VARIABLE_WIDTH_FONT_PATCHES_H

#include "eboot_patch_structures.h"

static single_instruction_patch s_variable_width_font_patch_data[] =
{
	/* Main patch */
	{ 0x25CD8 + 0x000, 0x3C080980 },
	{ 0x25CD8 + 0x004, 0x8D0977E0 },
	{ 0x25CD8 + 0x008, 0xAD0577E0 },
	{ 0x25CD8 + 0x00C, 0x00A94823 },
	{ 0x25CD8 + 0x010, 0x2D29000A },
	{ 0x25CD8 + 0x014, 0x11200004 },
	{ 0x25CD8 + 0x018, 0x00000000 },
	{ 0x25CD8 + 0x01C, 0x8D0577E4 },
	{ 0x25CD8 + 0x020, 0x10000003 },
	{ 0x25CD8 + 0x024, 0x00000000 },
	{ 0x25CD8 + 0x028, 0xAD0577E4 },
	{ 0x25CD8 + 0x02C, 0xA10077E8 },
	{ 0x25CD8 + 0x030, 0x10C00002 },
	{ 0x25CD8 + 0x034, 0x00000000 },
	{ 0x25CD8 + 0x038, 0x34060003 },
	{ 0x25CD8 + 0x03C, 0x808B005A },
	{ 0x25CD8 + 0x040, 0x00A06021 },
	{ 0x25CD8 + 0x044, 0x340D0000 },
	{ 0x25CD8 + 0x048, 0x340E0000 },
	{ 0x25CD8 + 0x04C, 0x910977E8 },
	{ 0x25CD8 + 0x050, 0x000E7883 },
	{ 0x25CD8 + 0x054, 0x01E47821 },
	{ 0x25CD8 + 0x058, 0x91EF0000 },
	{ 0x25CD8 + 0x05C, 0x31D80003 },
	{ 0x25CD8 + 0x060, 0x13000005 },
	{ 0x25CD8 + 0x064, 0x00000000 },
	{ 0x25CD8 + 0x068, 0x000F7883 },
	{ 0x25CD8 + 0x06C, 0x2718FFFF },
	{ 0x25CD8 + 0x070, 0x1000FFFB },
	{ 0x25CD8 + 0x074, 0x00000000 },
	{ 0x25CD8 + 0x078, 0x31EF0003 },
	{ 0x25CD8 + 0x07C, 0x11E00002 },
	{ 0x25CD8 + 0x080, 0x00000000 },
	{ 0x25CD8 + 0x084, 0x01E67821 },
	{ 0x25CD8 + 0x088, 0x11200002 },
	{ 0x25CD8 + 0x08C, 0x00000000 },
	{ 0x25CD8 + 0x090, 0x000F7900 },
	{ 0x25CD8 + 0x094, 0x91990000 },
	{ 0x25CD8 + 0x098, 0x01F97825 },
	{ 0x25CD8 + 0x09C, 0xA18F0000 },
	{ 0x25CD8 + 0x0A0, 0x11200002 },
	{ 0x25CD8 + 0x0A4, 0x00000000 },
	{ 0x25CD8 + 0x0A8, 0x258C0001 },
	{ 0x25CD8 + 0x0AC, 0x39290001 },
	{ 0x25CD8 + 0x0B0, 0x25CE0001 },
	{ 0x25CD8 + 0x0B4, 0x01CB782B },
	{ 0x25CD8 + 0x0B8, 0x15E0FFE5 },
	{ 0x25CD8 + 0x0BC, 0x00000000 },
	{ 0x25CD8 + 0x0C0, 0x340E0000 },
	{ 0x25CD8 + 0x0C4, 0x24840005 },
	{ 0x25CD8 + 0x0C8, 0x00A72821 },
	{ 0x25CD8 + 0x0CC, 0x24A50009 },
	{ 0x25CD8 + 0x0D0, 0x00A06021 },
	{ 0x25CD8 + 0x0D4, 0x25AD0001 },
	{ 0x25CD8 + 0x0D8, 0x2DAF0012 },
	{ 0x25CD8 + 0x0DC, 0x15E0FFDB },
	{ 0x25CD8 + 0x0E0, 0x00000000 },
	{ 0x25CD8 + 0x0E4, 0x910C77E8 },
	{ 0x25CD8 + 0x0E8, 0x016C5821 },
	{ 0x25CD8 + 0x0EC, 0xA10977E8 },
	{ 0x25CD8 + 0x0F0, 0x000B5843 },
	{ 0x25CD8 + 0x0F4, 0x8D0C77E4 },
	{ 0x25CD8 + 0x0F8, 0x016C5821 },
	{ 0x25CD8 + 0x0FC, 0xAD0B77E4 },
	{ 0x25CD8 + 0x100, 0x03E00008 },
	{ 0x25CD8 + 0x104, 0x00000000 },

	/* Remove text overlapping speaker */
	{ 0x3D24, 0x24840012 },

	/* Remove text overlapping message */
	{ 0x7A9C, 0x00000000 },
	
	/* Remove text overlapping message (modified text size) */
	{ 0x7B4C, 0x00000000 },

	/* Remove text overlapping message log */
	{ 0x7C38, 0x00000000 },

	/* Remove text overlapping file select */
	{ 0x366E4, 0x26240012 },

	/* Remove auto newline for message */
	{ 0x3AC84, 0x10000012 },

	/* Draw in textbox in consistent position */
	{ 0x4D98, 0x3405007D },

	/* Center speaker field */
	{ 0x3C50, 0x24A50073 },
	{ 0x3C90, 0x00000000 },
	{ 0x3CB4, 0x24A50073 },
	{ 0x3A648 + 0x00, 0x00064040 },
	{ 0x3A648 + 0x04, 0x02084023 },
	{ 0x3A648 + 0x08, 0x340B0000 },
	{ 0x3A648 + 0x0C, 0x95090000 },
	{ 0x3A648 + 0x10, 0x340A005C },
	{ 0x3A648 + 0x14, 0x012A0018 },
	{ 0x3A648 + 0x18, 0x00004812 },
	{ 0x3A648 + 0x1C, 0x3C0A097B },
	{ 0x3A648 + 0x20, 0x254A7800 },
	{ 0x3A648 + 0x24, 0x012A4821 },
	{ 0x3A648 + 0x28, 0x9129005A },
	{ 0x3A648 + 0x2C, 0x01695821 },
	{ 0x3A648 + 0x30, 0x25080002 },
	{ 0x3A648 + 0x34, 0x1510FFF5 },
	{ 0x3A648 + 0x38, 0x00000000 },
	{ 0x3A648 + 0x3C, 0x34080076 },
	{ 0x3A648 + 0x40, 0x010B502A },
	{ 0x3A648 + 0x44, 0x15400005 },
	{ 0x3A648 + 0x48, 0x00000000 },
	{ 0x3A648 + 0x4C, 0x010B4023 },
	{ 0x3A648 + 0x50, 0x00081043 },
	{ 0x3A648 + 0x54, 0x03E00008 },
	{ 0x3A648 + 0x58, 0x00000000 },
	{ 0x3A648 + 0x5C, 0x34020000 },
	{ 0x3A648 + 0x60, 0x03E00008 },
	{ 0x3A648 + 0x64, 0x00000000 },

	/* Expand 7 character limit for speaker to 23 */
	{ 0x3A93C, 0x27BDFFB0 },
	{ 0x3A944, 0xAFB10048 },
	{ 0x3A954, 0xAFB00044 },
	{ 0x3A958, 0xAFB2004C },
	{ 0x3A95C, 0xAFBF0050 },
	{ 0x3A98C, 0x8FB00044 },
	{ 0x3A990, 0x8FB10048 },
	{ 0x3A994, 0x8FB2004C },
	{ 0x3A998, 0x8FBF0050 },
	{ 0x3A9A0, 0x27BD0050 },
	{ 0x3A9B8, 0x8FB00044 },
	{ 0x3A9BC, 0x8FB10048 },
	{ 0x3A9C0, 0x8FB2004C },
	{ 0x3A9C4, 0x8FBF0050 },
	{ 0x3A9CC, 0x27BD0050 },
	{ 0x3A9D8, 0x34060017 },
	{ 0x3A9F8, 0x8FB00044 },
	{ 0x3A9FC, 0x8FB10048 },
	{ 0x3AA00, 0x8FB2004C },
	{ 0x3AA04, 0x8FBF0050 },
	{ 0x3AA0C, 0x27BD0050 },

	/* Expand character limit for choices and left-align */
	{ 0x7868, 0x00000000 },
	{ 0x786C, 0x34040000 },
	{ 0x7940, 0x00000000 },

	/* Add space between first and last name on file select screen. */
	{ 0x362F4, 0x0A20A748 },
	{ 0x362F8, 0xA4800000 },
	{ 0x25DE0, 0x00A03021 },
	{ 0x25DE4, 0x34050000 },
	{ 0x25DE8, 0x24840002 },
	{ 0x25DEC, 0x0A20E88F },
	{ 0x25DF0, 0x26310002 }
};

single_instruction_patch_array g_variable_width_font_patch =
{
	.elems = s_variable_width_font_patch_data,
	.length = RGT_C_ARRAY_SIZE(s_variable_width_font_patch_data)
};

#endif