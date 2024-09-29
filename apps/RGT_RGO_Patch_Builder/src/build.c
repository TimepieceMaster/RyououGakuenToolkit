#include "image_info/union_2528_1.h"
#include "image_info/union_2530_1.h"
#include "image_info/union_2531_1.h"
#include "image_info/union_2533_5.h"
#include "image_info/union_2533_7.h"
#include "image_info/union_2533_10.h"

#include "ryouou_gakuen_toolkit.h"
#include <stdlib.h>

typedef struct _image_replace_info
{
	const char *path;
	u16 replace_id;
	u64 replace_index;
} image_replace_info;

const image_replace_info g_images_to_replace[] =
{
	{ "resources\\images\\2528_1.png", 2528, 1 },
	{ "resources\\images\\2529_0.png", 2529, 0 },
	{ "resources\\images\\2530_0.png", 2530, 0 },
	{ "resources\\images\\2530_1.png", 2530, 1 },
	{ "resources\\images\\2531_0.png", 2531, 0 },
	{ "resources\\images\\2531_1.png", 2531, 1 },
	{ "resources\\images\\2532_0.png", 2532, 0 },
	{ "resources\\images\\2532_1.png", 2532, 1 },
	{ "resources\\images\\2533_0.png", 2533, 0 },
	{ "resources\\images\\2533_1.png", 2533, 1 },
	{ "resources\\images\\2533_2.png", 2533, 2 },
	{ "resources\\images\\2533_5.png", 2533, 5 },
	{ "resources\\images\\2533_7.png", 2533, 7 },
	{ "resources\\images\\2538_0.png", 2538, 0 },
	{ "resources\\images\\2538_1.png", 2538, 1 },
	{ "resources\\images\\2533_10.png", 2533, 10 },
	{ "resources\\images\\2533_11.png", 2533, 11 },
	{ "resources\\images\\2533_14.png", 2533, 14 },
	{ "resources\\images\\2533_15.png", 2533, 15 },
	{ "resources\\images\\2533_16.png", 2533, 16 },
	{ "resources\\images\\2533_17.png", 2533, 17 },
};

const texture_region_info_array *g_texture_regions_to_update[] =
{
	&g_union_2530_1_regions,
	&g_union_2521_1_regions,
	&g_union_2531_1_regions,
	&g_union_2533_7_regions,
	&g_union_2533_10_regions,
};

const single_instruction_patch_array *g_single_instruction_patches[] =
{
	&g_union_2521_1_instruction_patches,
	&g_union_2530_1_instruction_patches,
	&g_union_2533_5_instruction_patches
};

void
update_eboot_image_size_table
(
	u64 table_offset, u64 index_start, u64 index_end,
	u64 id, u16 new_size, rgt_u8_array eboot
)
{
	u64 eboot_offset = 
		table_offset
		+ 4 * (id - index_start);

	s16 old_size = 0;
	memcpy(&old_size, &eboot.elems[eboot_offset], 2);

	s16 size_diff = new_size - old_size;

	memcpy(&eboot.elems[eboot_offset], &new_size, 2);

	for (u64 i = id; i < index_end - 1; ++i)
	{
		u64 size_sum_offset = (eboot_offset + 2) + ((i - id) * 4);
		u16 new_sum = 0;

		memcpy(&new_sum, &eboot.elems[size_sum_offset], 2);
		new_sum += size_diff;

		memcpy(&eboot.elems[size_sum_offset], &new_sum, 2);
	}
}

void
update_eboot_patch_image
(
	u16 id, u64 index, u64 new_size, 
	rgt_u8_array eboot, rgt_rgo_image_array rgo_images 
)
{
	const u64 single_image_size_table_offset = 0xEBFF2;
	const u64 single_image_index_start = 824;
	const u64 single_image_index_end = 2527;
	const u64 multi_image_size_table_offset = 0x102FCA;
	const u64 multi_image_index_start = 2528;
	const u64 multi_image_index_end = 2539;

	const u64 multi_image_offsets_table_offsets[] =
	{
		0x103034, /* 2528 */
		0x103048, /* 2529 */
		0x10305c, /* 2530 */
		0x103070, /* 2531 */
		0x103088, /* 2532 */
		0x1030DC, /* 2533 */
		0x103144, /* 2534 */
		0x0,      /* 2535 consists of 2 PNGs we don't care to change. */
		0x103170, /* 2536 */
		0x0,      /* 2537 is an empty file */
		0x10317C, /* 2538 */
		0x103190, /* 2539 */
	};

	u16 size_2KB = (u16)(new_size / RGT_KILOBYTE(2));

	if (id < multi_image_index_start)
	{
		update_eboot_image_size_table
		(
			single_image_size_table_offset, single_image_index_start, 
			single_image_index_end, id, size_2KB, eboot
		);
	}
	else
	{
		update_eboot_image_size_table
		(
			multi_image_size_table_offset, multi_image_index_start,
			multi_image_index_end, id, size_2KB, eboot
		);

		/* 2530 is counted as having one more image than it really has
		 * due to one image having two palettes, so don't update the
		 * offset for the nonexistent image. */
		if (id == 2530)
		{
			--rgo_images.length;
		}

		for (u64 i = index + 1; i < rgo_images.length; ++i)
		{
			u64 eboot_offset = 
				multi_image_offsets_table_offsets
				[
					id - multi_image_index_start
				]
				+ i * 4; 
			u32 header_offset = (u32)rgo_images.elems[i].header.offset;

			memcpy
			(
				&eboot.elems[eboot_offset],
				&header_offset,
				4
			);
		}
	}
}

rgt_result
patch_union_image
(
	rgt_arena *union_arena, const char *png_path, 
	u16 replace_id, u64 replace_index, 
	rgt_cpk *union_cpk, rgt_u8_array eboot
)
{
	rgt_result result = RGT_SUCCESS;
	rgt_arena arena = {0};

	rgt_image image = {0};
	rgt_u8_array rgo_image_file = {0};
	rgt_rgo_image_array rgo_images = {0};
	rgt_u8_array new_rgo_image_file = {0};
	bool preserve_palette = false;

	RGT_CALL(rgt_create_arena(RGT_MEGABYTE(32), &arena));
	
	RGT_CALL(rgt_load_png(&arena, png_path, &image));
	RGT_CALL(rgt_get_cpk_file(*union_cpk, replace_id, &rgo_image_file));

	RGT_CALL(rgt_parse_rgo_image_file(&arena, rgo_image_file, &rgo_images));
	if (replace_id == 2530)
	{
		/* Options menu graphics switches palettes to highlight text,
		 * so we must preserve the original palette for the effect to work. */
		preserve_palette = true;
	}
	RGT_CALL
	(
		rgt_replace_rgo_image
		(
			&arena, &rgo_images, replace_index, preserve_palette, image
		)
	);
	RGT_CALL
	(
		rgt_build_rgo_image_file(&arena, rgo_images, &new_rgo_image_file)
	);
	
	RGT_CALL(rgt_remove_cpk_file(union_arena, union_cpk, replace_id));
	RGT_CALL
	(
		rgt_add_cpk_file(union_arena, union_cpk, replace_id, new_rgo_image_file)
	);

	update_eboot_patch_image
	(
		replace_id, replace_index, new_rgo_image_file.length, 
		eboot, rgo_images
	);

finish:

	rgt_destroy_arena(&arena);

	return result;
}

rgt_result 
patch_union(rgt_u8_array eboot)
{
	rgt_result result = RGT_SUCCESS;
	
	rgt_arena arena = {0};
	rgt_u8_array union_file = {0};
	rgt_cpk union_cpk = {0};

	rgt_u8_array new_union_file = {0};

	RGT_CALL(rgt_create_arena(RGT_GIGABYTE(2), &arena));
	RGT_CALL
	(
		rgt_load_file(&arena, "assets\\cpk\\union.cpk", &union_file)
	);
	RGT_CALL(rgt_parse_cpk(&arena, union_file, &union_cpk));

	for (u64 i = 0; i < RGT_C_ARRAY_SIZE(g_images_to_replace); ++i)
	{
		RGT_CALL
		(
			patch_union_image
			(
				&arena, 
				g_images_to_replace[i].path, 
				g_images_to_replace[i].replace_id,
				g_images_to_replace[i].replace_index, 
				&union_cpk,
				eboot
			)
		);
	}

	RGT_CALL(rgt_build_cpk(&arena, union_cpk, &new_union_file));
	RGT_CALL(rgt_save_file(new_union_file, "results\\union.cpk"));

finish:

	rgt_destroy_arena(&arena);

	return result;
}

void patch_image_regions(rgt_u8_array eboot)
{
	for (u64 i = 0; i < RGT_C_ARRAY_SIZE(g_texture_regions_to_update); ++i)
	{
		for (u64 j = 0; j < g_texture_regions_to_update[i]->length; ++j)
		{
			texture_region_info region = 
				g_texture_regions_to_update[i]->elems[j];

			if (region.read_top_left_offset != REGION_INFO_UNUSED)
			{
				if (region.read_top_left.x != REGION_INFO_IGNORE)
				{
					memcpy
					(
						&eboot.elems[region.read_top_left_offset], 
						&region.read_top_left.x, 2
					);
				}
				if (region.read_top_left.y != REGION_INFO_IGNORE)
				{
					memcpy
					(
						&eboot.elems[region.read_top_left_offset + 2], 
						&region.read_top_left.y, 2
					);
				}
			}
			if (region.write_top_left_offset != REGION_INFO_UNUSED)
			{
				if (region.write_top_left.x != REGION_INFO_IGNORE)
				{
					memcpy
					(
						&eboot.elems[region.write_top_left_offset],
						&region.write_top_left.x, 2
					);
				}
				if (region.write_top_left.y != REGION_INFO_IGNORE)
				{
					memcpy
					(
						&eboot.elems[region.write_top_left_offset + 2],
						&region.write_top_left.y, 2
					);
				}
			}
			if (region.read_size_offset != REGION_INFO_UNUSED)
			{
				if (region.read_size.width != REGION_INFO_IGNORE)
				{
					memcpy
					(
						&eboot.elems[region.read_size_offset],
						&region.read_size.width, 2
					);
				}
				if (region.read_size.height != REGION_INFO_IGNORE)
				{
					memcpy
					(
						&eboot.elems[region.read_size_offset + 2],
						&region.read_size.height, 2
					);
				}
			}
			if (region.write_size_offset != REGION_INFO_UNUSED)
			{
				if (region.write_size.width != REGION_INFO_IGNORE)
				{
					memcpy
					(
						&eboot.elems[region.write_size_offset],
						&region.write_size.width, 2
					);
				}
				if (region.write_size.height != REGION_INFO_IGNORE)
				{
					memcpy
					(
						&eboot.elems[region.write_size_offset + 2],
						&region.write_size.height, 2
					);
				}
			}
		}
	}
}

void apply_single_instruction_patches(rgt_u8_array eboot)
{
	for (u64 i = 0; i < RGT_C_ARRAY_SIZE(g_single_instruction_patches); ++i)
	{
		for (u64 j = 0; j < g_single_instruction_patches[i]->length; ++j)
		{
			single_instruction_patch patch =
				g_single_instruction_patches[i]->elems[j];

			memcpy(&eboot.elems[patch.offset], &patch.value, 4);
		}
	}
}

int 
main(void)
{
	rgt_result result = RGT_SUCCESS;
	rgt_arena arena = {0};
	rgt_u8_array eboot = {0};

	rgt_create_arena(RGT_MEGABYTE(4), &arena);
	RGT_CALL(rgt_load_file(&arena, "assets\\eboot\\EBOOT.bin", &eboot));

	RGT_CALL(patch_union(eboot));
	patch_image_regions(eboot);
	apply_single_instruction_patches(eboot);

	RGT_CALL(rgt_save_file(eboot, "results\\EBOOT.bin"));

	system("copy assets\\iso\\rgopsp.iso results\\rgopsp.iso");
	system
	(
		"UMD-replace.exe results\\rgopsp.iso "
		"PSP_GAME/PARAM.SFO resources\\param\\PARAM.SFO"
	);
	system
	(
		"UMD-replace.exe "
		"results\\rgopsp.iso "
		"PSP_GAME/USRDIR/DATA/union.cpk results\\union.cpk"
	);
	system
	(
		"UMD-replace.exe "
		"results\\rgopsp.iso "
		"PSP_GAME/SYSDIR/EBOOT.bin results\\EBOOT.bin"
	);

finish:

	rgt_destroy_arena(&arena);

	return result;
}
