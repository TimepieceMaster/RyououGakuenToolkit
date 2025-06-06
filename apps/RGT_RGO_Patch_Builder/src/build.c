#define _CRT_SECURE_NO_WARNINGS

#include "header_data.h"

#include "ryouou_gakuen_toolkit.h"
#include <stdlib.h>

typedef struct _image_replace_info
{
	const char *path;
	u16 replace_id;
	u64 replace_index;
} image_replace_info;

typedef struct _script_replace_info
{
	rgt_rgo_script_element_array *script_elements;
	u16 replace_id;
} script_replace_info;

const image_replace_info g_union_images_to_replace[] =
{
	/* Story CGs */
	{ "resources\\images\\873_0.png", 873, 0 },
	{ "resources\\images\\984_0.png", 984, 0 },
	{ "resources\\images\\1028_0.png", 1028, 0 },
	{ "resources\\images\\1029_0.png", 1029, 0 },
	{ "resources\\images\\1044_0.png", 1044, 0 },
	{ "resources\\images\\1045_0.png", 1045, 0 },
	{ "resources\\images\\1048_0.png", 1048, 0 },
	{ "resources\\images\\1049_0.png", 1049, 0 },
	{ "resources\\images\\1050_0.png", 1050, 0 },
	{ "resources\\images\\1051_0.png", 1051, 0 },
	{ "resources\\images\\1052_0.png", 1052, 0 },
	{ "resources\\images\\1053_0.png", 1053, 0 },
	{ "resources\\images\\1054_0.png", 1054, 0 },
	{ "resources\\images\\1055_0.png", 1055, 0 },
	{ "resources\\images\\1056_0.png", 1056, 0 },
	{ "resources\\images\\1057_0.png", 1057, 0 },
	{ "resources\\images\\1058_0.png", 1058, 0 },
	{ "resources\\images\\1059_0.png", 1059, 0 },
	{ "resources\\images\\1063_0.png", 1063, 0 },
	{ "resources\\images\\1068_0.png", 1068, 0 },
	{ "resources\\images\\1070_0.png", 1070, 0 },
	{ "resources\\images\\1071_0.png", 1071, 0 },
	{ "resources\\images\\1072_0.png", 1072, 0 },
	{ "resources\\images\\1073_0.png", 1073, 0 },
	{ "resources\\images\\1074_0.png", 1074, 0 },
	{ "resources\\images\\1075_0.png", 1075, 0 },
	{ "resources\\images\\1084_0.png", 1084, 0 },
	{ "resources\\images\\1085_0.png", 1085, 0 },
	{ "resources\\images\\1106_0.png", 1106, 0 },
	{ "resources\\images\\1108_0.png", 1108, 0 },
	{ "resources\\images\\1111_0.png", 1111, 0 },
	{ "resources\\images\\1115_0.png", 1115, 0 },
	{ "resources\\images\\1118_0.png", 1118, 0 },
	{ "resources\\images\\1119_0.png", 1119, 0 },
	{ "resources\\images\\1120_0.png", 1120, 0 },
	{ "resources\\images\\1124_0.png", 1124, 0 },
	{ "resources\\images\\1135_0.png", 1135, 0 },
	{ "resources\\images\\1138_0.png", 1138, 0 },
	{ "resources\\images\\1143_0.png", 1143, 0 },
	{ "resources\\images\\1145_0.png", 1145, 0 },
	{ "resources\\images\\1146_0.png", 1146, 0 },
	{ "resources\\images\\1147_0.png", 1147, 0 },
	{ "resources\\images\\1149_0.png", 1149, 0 },
	{ "resources\\images\\1150_0.png", 1150, 0 },
	{ "resources\\images\\1155_0.png", 1155, 0 },
	{ "resources\\images\\1156_0.png", 1156, 0 },
	{ "resources\\images\\1157_0.png", 1157, 0 },
	{ "resources\\images\\1158_0.png", 1158, 0 },
	{ "resources\\images\\1159_0.png", 1159, 0 },
	{ "resources\\images\\1160_0.png", 1160, 0 },
	{ "resources\\images\\1161_0.png", 1161, 0 },
	{ "resources\\images\\1162_0.png", 1162, 0 },
	{ "resources\\images\\1163_0.png", 1163, 0 },
	{ "resources\\images\\1165_0.png", 1165, 0 },
	{ "resources\\images\\1166_0.png", 1166, 0 },
	{ "resources\\images\\1167_0.png", 1167, 0 },
	{ "resources\\images\\1168_0.png", 1168, 0 },
	{ "resources\\images\\1169_0.png", 1169, 0 },
	{ "resources\\images\\1170_0.png", 1170, 0 },
	{ "resources\\images\\1171_0.png", 1171, 0 },
	{ "resources\\images\\1175_0.png", 1175, 0 },
	{ "resources\\images\\1176_0.png", 1176, 0 },
	{ "resources\\images\\1180_0.png", 1180, 0 },
	{ "resources\\images\\1193_0.png", 1193, 0 },
	{ "resources\\images\\1199_0.png", 1199, 0 },
	{ "resources\\images\\1200_0.png", 1200, 0 },
	{ "resources\\images\\1201_0.png", 1201, 0 },
	{ "resources\\images\\1206_0.png", 1206, 0 },
	{ "resources\\images\\1226_0.png", 1226, 0 },
	{ "resources\\images\\1292_0.png", 1292, 0 },
	{ "resources\\images\\1296_0.png", 1296, 0 },
	{ "resources\\images\\1298_0.png", 1298, 0 },
	{ "resources\\images\\1299_0.png", 1299, 0 },
	{ "resources\\images\\1300_0.png", 1300, 0 },
	{ "resources\\images\\1301_0.png", 1301, 0 },
	{ "resources\\images\\1304_0.png", 1304, 0 },
	{ "resources\\images\\1330_0.png", 1330, 0 },
	{ "resources\\images\\1337_0.png", 1337, 0 },
	{ "resources\\images\\1343_0.png", 1343, 0 },
	{ "resources\\images\\1344_0.png", 1344, 0 },
	{ "resources\\images\\1415_0.png", 1415, 0 },
	{ "resources\\images\\1416_0.png", 1416, 0 },
	{ "resources\\images\\1418_0.png", 1418, 0 },
	{ "resources\\images\\1419_0.png", 1419, 0 },
	{ "resources\\images\\1424_0.png", 1424, 0 },
	{ "resources\\images\\1425_0.png", 1425, 0 },
	{ "resources\\images\\1426_0.png", 1426, 0 },
	{ "resources\\images\\1427_0.png", 1427, 0 },
	{ "resources\\images\\1428_0.png", 1428, 0 },
	{ "resources\\images\\1436_0.png", 1436, 0 },
	{ "resources\\images\\1454_0.png", 1454, 0 },
	{ "resources\\images\\1455_0.png", 1455, 0 },
	{ "resources\\images\\1456_0.png", 1456, 0 },
	{ "resources\\images\\1457_0.png", 1457, 0 },

	/* Trading Cards */
	{ "resources\\images\\1477_0.png", 1477, 0 },
	{ "resources\\images\\1478_0.png", 1478, 0 },
	{ "resources\\images\\1479_0.png", 1479, 0 },
	{ "resources\\images\\1480_0.png", 1480, 0 },
	{ "resources\\images\\1481_0.png", 1481, 0 },

	{ "resources\\images\\1482_0.png", 1482, 0 },
	{ "resources\\images\\1483_0.png", 1483, 0 },
	{ "resources\\images\\1484_0.png", 1484, 0 },
	{ "resources\\images\\1485_0.png", 1485, 0 },
	{ "resources\\images\\1486_0.png", 1486, 0 },

	{ "resources\\images\\1487_0.png", 1487, 0 },
	{ "resources\\images\\1488_0.png", 1488, 0 },
	{ "resources\\images\\1489_0.png", 1489, 0 },
	{ "resources\\images\\1490_0.png", 1490, 0 },
	{ "resources\\images\\1491_0.png", 1491, 0 },

	{ "resources\\images\\1492_0.png", 1492, 0 },
	{ "resources\\images\\1493_0.png", 1493, 0 },
	{ "resources\\images\\1494_0.png", 1494, 0 },
	{ "resources\\images\\1495_0.png", 1495, 0 },
	{ "resources\\images\\1496_0.png", 1496, 0 },

	{ "resources\\images\\1497_0.png", 1497, 0 },
	{ "resources\\images\\1498_0.png", 1498, 0 },
	{ "resources\\images\\1499_0.png", 1499, 0 },
	{ "resources\\images\\1500_0.png", 1500, 0 },
	{ "resources\\images\\1501_0.png", 1501, 0 },

	{ "resources\\images\\1502_0.png", 1502, 0 },
	{ "resources\\images\\1503_0.png", 1503, 0 },
	{ "resources\\images\\1504_0.png", 1504, 0 },
	{ "resources\\images\\1505_0.png", 1505, 0 },
	{ "resources\\images\\1506_0.png", 1506, 0 },

	{ "resources\\images\\1507_0.png", 1507, 0 },
	{ "resources\\images\\1508_0.png", 1508, 0 },
	{ "resources\\images\\1509_0.png", 1509, 0 },
	{ "resources\\images\\1510_0.png", 1510, 0 },
	{ "resources\\images\\1511_0.png", 1511, 0 },

	{ "resources\\images\\1512_0.png", 1512, 0 },
	{ "resources\\images\\1513_0.png", 1513, 0 },
	{ "resources\\images\\1514_0.png", 1514, 0 },
	{ "resources\\images\\1515_0.png", 1515, 0 },
	{ "resources\\images\\1516_0.png", 1516, 0 },

	{ "resources\\images\\1517_0.png", 1517, 0 },
	{ "resources\\images\\1518_0.png", 1518, 0 },
	{ "resources\\images\\1519_0.png", 1519, 0 },
	{ "resources\\images\\1520_0.png", 1520, 0 },
	{ "resources\\images\\1521_0.png", 1521, 0 },

	{ "resources\\images\\1522_0.png", 1522, 0 },
	{ "resources\\images\\1523_0.png", 1523, 0 },
	{ "resources\\images\\1524_0.png", 1524, 0 },
	{ "resources\\images\\1525_0.png", 1525, 0 },
	{ "resources\\images\\1526_0.png", 1526, 0 },

	/* PSP Prologues (after trading cards) */
	{ "resources\\images\\1527_0.png", 1527, 0 },
	{ "resources\\images\\1528_0.png", 1528, 0 },
	{ "resources\\images\\1529_0.png", 1529, 0 },
	{ "resources\\images\\1530_0.png", 1530, 0 },
	{ "resources\\images\\1531_0.png", 1531, 0 },
	{ "resources\\images\\1532_0.png", 1532, 0 },
	{ "resources\\images\\1533_0.png", 1533, 0 },
	{ "resources\\images\\1554_0.png", 1554, 0 },
	{ "resources\\images\\1555_0.png", 1555, 0 },
	{ "resources\\images\\1557_0.png", 1557, 0 },
	{ "resources\\images\\1558_0.png", 1558, 0 },
	{ "resources\\images\\1559_0.png", 1559, 0 },
	{ "resources\\images\\1560_0.png", 1560, 0 },
	{ "resources\\images\\1561_0.png", 1561, 0 },

	/* Backgrounds */
	{ "resources\\images\\1653_0.png", 1653, 0 },
	{ "resources\\images\\1690_0.png", 1690, 0 },
	{ "resources\\images\\1691_0.png", 1691, 0 },
	{ "resources\\images\\1692_0.png", 1692, 0 },

	/* Menus */

	{ "resources\\images\\1701_0.png", 1701, 0 },
	{ "resources\\images\\2528_1.png", 2528, 1 },
	{ "resources\\images\\2529_0.png", 2529, 0 },
	{ "resources\\images\\2529_1.png", 2529, 1 },
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
	{ "resources\\images\\2533_8.png", 2533, 8 },
	{ "resources\\images\\2533_9.png", 2533, 9 },
	{ "resources\\images\\2538_0.png", 2538, 0 },
	{ "resources\\images\\2538_1.png", 2538, 1 },
	{ "resources\\images\\2533_10.png", 2533, 10 },
	{ "resources\\images\\2533_11.png", 2533, 11 },
	{ "resources\\images\\2533_12.png", 2533, 12 },
	{ "resources\\images\\2533_13.png", 2533, 13 },
	{ "resources\\images\\2533_14.png", 2533, 14 },
	{ "resources\\images\\2533_15.png", 2533, 15 },
	{ "resources\\images\\2533_16.png", 2533, 16 },
	{ "resources\\images\\2533_17.png", 2533, 17 },
	{ "resources\\images\\2534_1.png", 2534, 1 },
	{ "resources\\images\\2534_7.png", 2534, 7 }
};

const image_replace_info g_pr_images_to_replace[] =
{
	{ "resources\\images\\pr_0.png", 0, 0 },
	{ "resources\\images\\pr_1.png", 0, 1 },
	{ "resources\\images\\pr_3.png", 0, 3 },
	{ "resources\\images\\pr_4.png", 0, 4 }
};

const script_replace_info g_scripts_to_replace[] =
{
	{ &g_script_0_elements, 0 },
	{ &g_script_1_elements, 1 }
};

const texture_region_info_array *g_texture_regions_to_update[] =
{
	&g_union_2530_1_regions,
	&g_union_2521_1_regions,
	&g_union_2531_1_regions,
	&g_union_2533_7_regions,
	&g_union_2533_8_regions,
	&g_union_2533_9_regions,
	&g_union_2533_10_regions,
	&g_pr_0_regions,
	&g_pr_4_regions
};

const single_instruction_patch_array *g_single_instruction_patches[] =
{
	&g_union_2529_0_instruction_patches,
	&g_union_2521_1_instruction_patches,
	&g_union_2530_1_instruction_patches,
	&g_union_2533_5_instruction_patches,
	&g_pr_0_single_instruction_patches,
	&g_pr_4_single_instruction_patches,
	&g_variable_width_font_patch
};

const byte_sequence_patch_array *g_byte_sequence_patches[] =
{
	&g_union_2529_0_byte_sequence_patches,
	&g_pr_byte_sequence_patches
};

void
update_eboot_file_size_table
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
		update_eboot_file_size_table
		(
			single_image_size_table_offset, single_image_index_start, 
			single_image_index_end, id, size_2KB, eboot
		);
	}
	else
	{
		update_eboot_file_size_table
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

	/* quick fix because these are 64KB+ images in RGO JP
	 * but the English version compresses below 64KB and
	 * RGO doesn't like that for some reason despite the
	 * fact it should be fine. */
	if 
	(
		replace_id == 1115
		|| replace_id == 1120
		|| replace_id == 1143
		|| replace_id == 1155
		|| replace_id == 1156
		|| replace_id == 1200
		|| replace_id == 1201
		|| replace_id == 1298
		|| replace_id == 1299
		|| replace_id == 1436
	)
	{
		rgt_u8_array temp = {0};
		RGT_CREATE_ARRAY(&arena, RGT_KILOBYTE(80), &temp);
		memcpy
		(
			temp.elems, new_rgo_image_file.elems, 
			new_rgo_image_file.length - RGT_CHECKSUM_SIZE
		);
		rgt_add_checksum_whole_file(temp);
		new_rgo_image_file = temp;
	}
	
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
patch_pr_image
(
	rgt_arena *pr_arena, const char *png_path, 
	bool is_compressed, rgt_rgo_image *pr_image
)
{
	rgt_result result = RGT_SUCCESS;

	rgt_arena arena = {0};
	rgt_image image = {0};

	RGT_CALL(rgt_create_arena(RGT_MEGABYTE(2), &arena));
	RGT_CALL(rgt_load_png(&arena, png_path, &image));

	RGT_CALL
	(
		rgt_replace_rgo_pr_image
		(
			pr_arena, pr_image, true, is_compressed, image
		)
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

	for (u64 i = 0; i < RGT_C_ARRAY_SIZE(g_union_images_to_replace); ++i)
	{
		RGT_CALL
		(
			patch_union_image
			(
				&arena,
				g_union_images_to_replace[i].path,
				g_union_images_to_replace[i].replace_id,
				g_union_images_to_replace[i].replace_index,
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

rgt_result
patch_pr(void)
{
	rgt_result result = RGT_SUCCESS;

	rgt_arena arena = {0};
	rgt_u8_array pr_file = {0};
	rgt_rgo_image_array pr_images = {0};

	RGT_CALL(rgt_create_arena(RGT_MEGABYTE(2), &arena));
	RGT_CALL(rgt_load_file(&arena, "assets\\pr\\pr.bin", &pr_file));
	RGT_CALL(rgt_parse_rgo_pr_file(&arena, pr_file, g_rgo_pr_image_infos, &pr_images));

	for (u64 i = 0; i < RGT_C_ARRAY_SIZE(g_pr_images_to_replace); ++i)
	{
		u64 replace_index = g_pr_images_to_replace[i].replace_index;

		RGT_CALL
		(
			patch_pr_image
			(
				&arena,
				g_pr_images_to_replace[i].path,
				g_rgo_pr_image_infos.elems[replace_index].is_compressed,
				&pr_images.elems[replace_index]
			)
		);
	}

	for (u64 i = 0; i < g_rgo_pr_image_infos.length; ++i)
	{
		RGT_CALL
		(
			rgt_overwrite_pr_image
			(
				pr_file, pr_images.elems[i], 
				g_rgo_pr_image_infos.elems[i].pixel_offset,
				g_rgo_pr_image_infos.elems[i].is_compressed
			)
		);
	}

	rgt_add_checksum_whole_file(pr_file);

	RGT_CALL(rgt_save_file(pr_file, "results\\pr.bin"));

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

rgt_result 
patch_scripts(rgt_u8_array eboot)
{
	const heap_size_high_addr = 0x15B54;
	const heap_size_low_addr = 0x15B58;

	rgt_result result = RGT_SUCCESS;
	rgt_arena arena = {0};
	rgt_u8_array font_strings_file = {0};
	rgt_string_array font_strings = {0};
	rgt_utf8_string_array font_strings_utf8 = {0};

	rgt_u8_array cpk_file = {0};
	rgt_cpk cpk = {0};
	rgt_u8_array new_cpk_file = {0};

	u32 script_heap_size = {0};

	{
		u16 heap_size_low = 0;
		u16 heap_size_high = 0;

		memcpy(&heap_size_low, &eboot.elems[heap_size_low_addr], 2);
		memcpy(&heap_size_high, &eboot.elems[heap_size_high_addr], 2);
		script_heap_size = (u32)(heap_size_high << 16) | (u32)heap_size_low;
	}

	RGT_CALL(rgt_create_arena(RGT_GIGABYTE(1), &arena));

	RGT_CALL
	(
		rgt_load_file
		(
			&arena, "resources/font/english_font_strings.txt", 
			&font_strings_file
		)
	);
	RGT_CALL(rgt_text_to_lines(&arena, font_strings_file, &font_strings));
	RGT_CREATE_ARRAY(&arena, font_strings.length, &font_strings_utf8);
	for (u64 i = 0; i < font_strings.length; ++i)
	{
		u64 pos = 0;
		RGT_CALL
		(
			rgt_read_utf8_string
			(
				&arena, font_strings.elems[i], &pos, &font_strings_utf8.elems[i]
			)
		);
	}

	RGT_CALL(rgt_load_file(&arena, "assets/cpk/sc.cpk", &cpk_file));
	RGT_CALL(rgt_parse_cpk(&arena, cpk_file, &cpk));

	for (u64 i = 0; i < RGT_C_ARRAY_SIZE(g_scripts_to_replace); ++i)
	{
		rgt_rgo_script script = {0};
		rgt_u8_array script_file = {0};
		u16 id = g_scripts_to_replace[i].replace_id;
		RGT_CALL
		(
			rgt_rgo_script_elements_to_script
			(
				&arena, *g_scripts_to_replace[i].script_elements,
				font_strings_utf8, &script
			)
		);
		RGT_CALL(rgt_build_rgo_script(&arena, script, &script_file));
		RGT_CALL(rgt_remove_cpk_file(&arena, &cpk, id));
		RGT_CALL(rgt_add_cpk_file(&arena, &cpk, id, script_file));
		update_eboot_file_size_table
		(
			0x10319E, 0, 11, id, 
			(u16)(script_file.length / RGT_KILOBYTE(2)), eboot
		);
		if (script_file.length > script_heap_size)
		{
			u16 length_low = (u16)(script_file.length & 0xFFFF);
			u16 length_high = (u16)((script_file.length & 0xFFFF0000) >> 16);
			++length_high;

			memcpy(&eboot.elems[heap_size_low_addr], &length_low, 2);
			memcpy(&eboot.elems[heap_size_high_addr], &length_high, 2);
			script_heap_size = (u32)script_file.length;
		}
	}

	RGT_CALL(rgt_build_cpk(&arena, cpk, &new_cpk_file));
	RGT_CALL(rgt_save_file(new_cpk_file, "results/sc.cpk"));

finish:

	rgt_destroy_arena(&arena);

	return result;
}

void 
apply_single_instruction_patches(rgt_u8_array eboot)
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

void 
apply_byte_sequence_patches(rgt_u8_array eboot)
{
	for (u64 i = 0; i < RGT_C_ARRAY_SIZE(g_byte_sequence_patches); ++i)
	{
		for (u64 j = 0; j < g_byte_sequence_patches[i]->length; ++j)
		{
			byte_sequence_patch patch =
				g_byte_sequence_patches[i]->elems[j];

			memcpy(&eboot.elems[patch.offset], patch.bytes, patch.length);
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
	RGT_CALL(patch_pr());
	RGT_CALL(patch_scripts(eboot));
	patch_image_regions(eboot);
	apply_single_instruction_patches(eboot);
	apply_byte_sequence_patches(eboot);

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
		"PSP_GAME/USRDIR/DATA/lt.bin resources\\font\\lt.bin"
	);
	system
	(
		"UMD-replace.exe "
		"results\\rgopsp.iso "
		"PSP_GAME/USRDIR/DATA/sc.cpk results\\sc.cpk"
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
		"PSP_GAME/USRDIR/DATA/pr.bin results\\pr.bin"
	);
	system
	(
		"UMD-replace.exe "
		"results\\rgopsp.iso "
		"PSP_GAME/USRDIR/DATA/op.pmf resources\\movies\\op.pmf"
	);
	system /* Star Wars Text Crawl */
	(
		"UMD-replace.exe "
		"results\\rgopsp.iso "
		"PSP_GAME/USRDIR/DATA/titlein.pmf resources\\movies\\titlein.pmf"
	);
	system /* True ending ED */
	(
		"UMD-replace.exe "
		"results\\rgopsp.iso "
		"PSP_GAME/USRDIR/DATA/ed.pmf resources\\movies\\ed.pmf"
	);
	system /* Bad ending ED */
	(
		"UMD-replace.exe "
		"results\\rgopsp.iso "
		"PSP_GAME/USRDIR/DATA/mov_10.pmf resources\\movies\\mov_10.pmf"
	);
	system /* Good ending ED */
	(
		"UMD-replace.exe "
		"results\\rgopsp.iso "
		"PSP_GAME/USRDIR/DATA/mov_11.pmf resources\\movies\\mov_11.pmf"
	);
	system /* Konata Accelerator */
	(
		"UMD-replace.exe "
		"results\\rgopsp.iso "
		"PSP_GAME/USRDIR/DATA/mov_09.pmf resources\\movies\\mov_09.pmf"
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
