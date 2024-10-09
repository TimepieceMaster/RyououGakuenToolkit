#ifndef RGO_PR_IMAGE_INFO_H
#define RGO_PR_IMAGE_INFO_H

#include "rgt_rgo_image.h"

static rgt_rgo_pr_image_info s_rgo_pr_image_infos_data[] =
{
	{
		.palette_offset = 0x39C00,
		.num_colors = 16,
		.pixel_offset = 0,
		.width = 512,
		.height = 256,
		.is_compressed = false
	},

	{
		.palette_offset = 0x39D00,
		.num_colors = 256,
		.pixel_offset = 0x10000,
		.width = 256,
		.height = 160,
		.is_compressed = false
	},

	{
		.palette_offset = 0x3A500,
		.num_colors = 16,
		.pixel_offset = 0x1A000,
		.width = 256,
		.is_compressed = true
	},

	{
		.palette_offset = 0x3A900,
		.num_colors = 256,
		.pixel_offset = 0x1B000,
		.width = 256,
		.is_compressed = true
	},

	{
		.palette_offset = 0x39800,
		.num_colors = 256,
		.pixel_offset = 0x1E800,
		.width = 256,
		.is_compressed = true
	},

	{
		.palette_offset = 0x3A100,
		.num_colors = 256,
		.pixel_offset = 0x20000,
		.width = 256,
		.height = 128,
		.is_compressed = false
	},

	{
		.palette_offset = 0x3A500,
		.num_colors = 16,
		.pixel_offset = 0x28000,
		.width = 256,
		.height = 256,
		.is_compressed = false
	},

	{
		.palette_offset = 0x3A500,
		.num_colors = 16,
		.pixel_offset = 0x30000,
		.width = 256,
		.height = 272,
		.is_compressed = false
	},

	{
		.palette_offset = 0x3A700,
		.num_colors = 16,
		.pixel_offset = 0x38800,
		.width = 128,
		.is_compressed = true
	},

	{
		.palette_offset = 0x3A800,
		.num_colors = 16,
		.pixel_offset = 0x39000,
		.width = 128,
		.is_compressed = true
	}
};

rgt_rgo_pr_image_info_array g_rgo_pr_image_infos =
{
	.elems = s_rgo_pr_image_infos_data,
	.length = RGT_C_ARRAY_SIZE(s_rgo_pr_image_infos_data)
};

#endif