#include "ryouou_gakuen_toolkit.h"

#define SCRIPT_CPK_JP "assets/sc_jp.cpk"
#define SCRIPT_CPK_ENG "assets/sc_eng.cpk"
#define GLYPH_STRINGS_JP "assets/glyph_strings_jp.txt"
#define GLYPH_STRINGS_ENG "assets/glyph_strings_eng.txt"
#define STRUCTURE_OUT "results/script_1_structure.h"
#define COMMANDS_OUT "results/script_1_commands.h"
#define TEXT_OUT "results/script_1_text.h"
#define SCRIPT_ID 1

typedef struct _speaker_name_string
{
	rgt_u8_array jp;
	rgt_u8_array eng;
} speaker_name_string;

typedef struct _speaker_name_utf8
{
	rgt_utf8_string jp;
	rgt_utf8_string eng;
} speaker_name_utf8;

RGT_DECLARE_ARRAY_TYPE(speaker_name_utf8, speaker_name_utf8_array)
#define STR_TO_ARR(str) \
	{ .elems = (str), .length = sizeof(str) - 1, .capacity = sizeof(str) - 1 }

speaker_name_string g_speaker_name_strings[] =
{
	{ STR_TO_ARR(u8""), STR_TO_ARR(u8"") },
	{ STR_TO_ARR(u8"/l/f"), STR_TO_ARR(u8"/l /f") },
	{ STR_TO_ARR(u8"？？？"), STR_TO_ARR(u8"???") },
	{ STR_TO_ARR(u8"みんな"), STR_TO_ARR(u8"Everyone") },
	{ STR_TO_ARR(u8"泉こなた"), STR_TO_ARR(u8"Konata Izumi") },
	{ STR_TO_ARR(u8"柊かがみ"), STR_TO_ARR(u8"Kagami Hiiragi") },
	{ STR_TO_ARR(u8"柊つかさ"), STR_TO_ARR(u8"Tsukasa Hiiragi") },
	{ STR_TO_ARR(u8"高良みゆき"), STR_TO_ARR(u8"Miyuki Takara") },
	{ STR_TO_ARR(u8"日下部みさお"), STR_TO_ARR(u8"Misao Kusakabe") },
	{ STR_TO_ARR(u8"峰岸あやの"), STR_TO_ARR(u8"Ayano Minegishi") },
	{ STR_TO_ARR(u8"八坂こう"), STR_TO_ARR(u8"Kou Yasaka") },
	{ STR_TO_ARR(u8"小早川ゆたか"), STR_TO_ARR(u8"Yutaka Kobayakawa") },
	{ STR_TO_ARR(u8"岩崎みなみ"), STR_TO_ARR(u8"Minami Iwasaki") },
	{ STR_TO_ARR(u8"田村ひより"), STR_TO_ARR(u8"Hiyori Tamura") },
	{ STR_TO_ARR(u8"パティ"), STR_TO_ARR(u8"Patty") },
	{ STR_TO_ARR(u8"永森やまと"), STR_TO_ARR(u8"Yamato Nagamori") },
	{ STR_TO_ARR(u8"黒井ななこ"), STR_TO_ARR(u8"Nanako Kuroi") },
	{ STR_TO_ARR(u8"桜庭ひかる"), STR_TO_ARR(u8"Hikaru Sakuraba") },
	{ STR_TO_ARR(u8"天原ふゆき"), STR_TO_ARR(u8"Fuyuki Amahara") },
	{ STR_TO_ARR(u8"成実ゆい"), STR_TO_ARR(u8"Yui Narumi") },
	{ STR_TO_ARR(u8"宮河ひかげ"), STR_TO_ARR(u8"Hikage Miyakawa") },
	{ STR_TO_ARR(u8"宮河ひなた"), STR_TO_ARR(u8"Hinata Miyakawa") },
	{ STR_TO_ARR(u8"泉そうじろう"), STR_TO_ARR(u8"Soujirou Izumi") },
	{ STR_TO_ARR(u8"かなた"), STR_TO_ARR(u8"Kanata") },
	{ STR_TO_ARR(u8"高良ゆかり"), STR_TO_ARR(u8"Yukari Takara") },
	{ STR_TO_ARR(u8"小神あきら"), STR_TO_ARR(u8"Akira Kogami") },
	{ STR_TO_ARR(u8"白石みのる"), STR_TO_ARR(u8"Minoru Shiraishi") },
	{ STR_TO_ARR(u8"兄沢命斗"), STR_TO_ARR(u8"Meito Anizawa")},
	{ STR_TO_ARR(u8"殿鬼ガイ"), STR_TO_ARR(u8"Guy Denki") },
	{ STR_TO_ARR(u8"チュン"), STR_TO_ARR(u8"Chun") },
	{ STR_TO_ARR(u8"サニー"), STR_TO_ARR(u8"Sunny") },
	{ STR_TO_ARR(u8"シャドウ"), STR_TO_ARR(u8"Shadow") },
	{ STR_TO_ARR(u8"魔王"), STR_TO_ARR(u8"Dark Lord") },
	{ STR_TO_ARR(u8"ルミナス"), STR_TO_ARR(u8"Luminous") },
	{ STR_TO_ARR(u8"母"), STR_TO_ARR(u8"Mom") },
	{ STR_TO_ARR(u8"チュンの手下"), STR_TO_ARR(u8"Chun's Henchman") },
	{ STR_TO_ARR(u8"チュンの手下２"), STR_TO_ARR(u8"Chun's Henchman 2") },
	{ STR_TO_ARR(u8"チュンの手下３"), STR_TO_ARR(u8"Chun's Henchman 3") },
	{ STR_TO_ARR(u8"ＰＣ"), STR_TO_ARR(u8"PC") },
	{ STR_TO_ARR(u8"コナタン"), STR_TO_ARR(u8"Konatan") },
	{ STR_TO_ARR(u8"車掌"), STR_TO_ARR(u8"Train Conductor") },
	{ STR_TO_ARR(u8"男性Ａ"), STR_TO_ARR(u8"Man A") },
	{ STR_TO_ARR(u8"男性Ｂ"), STR_TO_ARR(u8"Man B") },
	{ STR_TO_ARR(u8"司会"), STR_TO_ARR(u8"Host") },
	{ STR_TO_ARR(u8"男"), STR_TO_ARR(u8"Man") },
	{ STR_TO_ARR(u8"女"), STR_TO_ARR(u8"Woman") },
	{ STR_TO_ARR(u8"女の人"), STR_TO_ARR(u8"Woman") },
	{ STR_TO_ARR(u8"女の子"), STR_TO_ARR(u8"Girl") },
	{ STR_TO_ARR(u8"観衆"), STR_TO_ARR(u8"Audience") },
	{ STR_TO_ARR(u8"なつき"), STR_TO_ARR(u8"Natsuki") },
	{ STR_TO_ARR(u8"アナウンス"), STR_TO_ARR(u8"Announcer") },
	{ STR_TO_ARR(u8"ナレーション"), STR_TO_ARR(u8"Narrator") },
	{ STR_TO_ARR(u8"ナレーション女"), STR_TO_ARR(u8"Female Narrator") },
	{ STR_TO_ARR(u8"宅配業者"), STR_TO_ARR(u8"Delivery Man") },
	{ STR_TO_ARR(u8"無線"), STR_TO_ARR(u8"Radio") },
	{ STR_TO_ARR(u8"テレビ"), STR_TO_ARR(u8"TV") },

	/* Patty speaking English */
	{ STR_TO_ARR(u8"日本語訳"), STR_TO_ARR(u8"Patty") },


	{ STR_TO_ARR(u8"客"), STR_TO_ARR(u8"Customer") },
	{ STR_TO_ARR(u8"女性客"), STR_TO_ARR(u8"Female Customer") },
	{ STR_TO_ARR(u8"泥棒"), STR_TO_ARR(u8"Robber") },
	{ STR_TO_ARR(u8"バルディッシュ"), STR_TO_ARR(u8"Bardiche") },
	{ STR_TO_ARR(u8"ひかげ＆ひなた"), STR_TO_ARR(u8"Hikage & Hinata") },
	{ STR_TO_ARR(u8"ひなた＆ひかげ"), STR_TO_ARR(u8"Hinata & Hikage") },
	{ STR_TO_ARR(u8"ななこ＆ゆい"), STR_TO_ARR(u8"Nanako & Yui") },
	{ STR_TO_ARR(u8"ひより＆パティ"), STR_TO_ARR(u8"Hiyori & Patty") },
	{ STR_TO_ARR(u8"命斗＆ガイ"), STR_TO_ARR(u8"Meito & Guy") },
	{ STR_TO_ARR(u8"こなた＆こう"), STR_TO_ARR(u8"Konata & Kou") },
	{ STR_TO_ARR(u8"みなみ＆ゆたか"), STR_TO_ARR(u8"Minami & Yutaka") },
	{ STR_TO_ARR(u8"こなた＆命斗"), STR_TO_ARR(u8"Konata & Meito") },
	{ STR_TO_ARR(u8"ななこ＆ひかる"), STR_TO_ARR(u8"Nanako & Hikaru") },
	{ STR_TO_ARR(u8"こなた＆みゆき"), STR_TO_ARR(u8"Konata & Miyuki") },
	{ STR_TO_ARR(u8"こなた＆つかさ"), STR_TO_ARR(u8"Konata & Tsukasa") },
	{ STR_TO_ARR(u8"かがみ＆みゆき"), STR_TO_ARR(u8"Kagami & Miyuki") },
	{ STR_TO_ARR(u8"男性Ａ＆男性Ｂ"), STR_TO_ARR(u8"Man A & Man B") },
	{ STR_TO_ARR(u8"ひより＆こう"), STR_TO_ARR(u8"Hiyori & Kou") },
	{ STR_TO_ARR(u8"命斗＆ななこ"), STR_TO_ARR(u8"Meito & Nanako") },
	{ STR_TO_ARR(u8"こなた＆ゆたか"), STR_TO_ARR(u8"Konata & Yutaka") },
	{ STR_TO_ARR(u8"つかさ＆みゆき"), STR_TO_ARR(u8"Tsukasa & Miyuki") }
};

int 
main(void)
{
	rgt_result result = RGT_SUCCESS;
	rgt_arena arena = {0};
	rgt_u8_array cpk_jp_file = {0};
	rgt_u8_array cpk_eng_file = {0};
	rgt_cpk cpk_jp = {0};
	rgt_cpk cpk_eng = {0};
	rgt_u8_array script_jp_file = {0};
	rgt_u8_array script_eng_file = {0};
	rgt_rgo_script script_jp = {0};
	rgt_rgo_script script_eng = {0};
	rgt_u8_array glyph_strings_file_jp = {0};
	rgt_u8_array glyph_strings_file_eng = {0};
	rgt_string_array glyph_strings_jp = {0};
	rgt_string_array glyph_strings_eng = {0};
	rgt_utf8_string_array glyph_strings_utf8_jp = {0};
	rgt_utf8_string_array glyph_strings_utf8_eng = {0};
	speaker_name_utf8_array speaker_names = {0};

	RGT_CALL(rgt_create_arena(RGT_MEGABYTE(256), &arena));

	RGT_CALL(rgt_load_file(&arena, SCRIPT_CPK_JP, &cpk_jp_file));
	RGT_CALL(rgt_load_file(&arena, SCRIPT_CPK_ENG, &cpk_eng_file));
	RGT_CALL(rgt_parse_cpk(&arena, cpk_jp_file, &cpk_jp));
	RGT_CALL(rgt_parse_cpk(&arena, cpk_eng_file, &cpk_eng));
	RGT_CALL(rgt_get_cpk_file(cpk_jp, SCRIPT_ID, &script_jp_file));
	RGT_CALL(rgt_get_cpk_file(cpk_eng, SCRIPT_ID, &script_eng_file));
	RGT_CALL(rgt_parse_rgo_script(&arena, script_jp_file, &script_jp));
	RGT_CALL(rgt_parse_rgo_script(&arena, script_eng_file, &script_eng));
	RGT_CALL(rgt_load_file(&arena, GLYPH_STRINGS_JP, &glyph_strings_file_jp));
	RGT_CALL
	(
		rgt_load_file(&arena, GLYPH_STRINGS_ENG, &glyph_strings_file_eng)
	);
	RGT_CALL
	(
		rgt_text_to_lines(&arena, glyph_strings_file_jp, &glyph_strings_jp)
	);
	RGT_CALL
	(
		rgt_text_to_lines(&arena, glyph_strings_file_eng, &glyph_strings_eng)
	);
	RGT_CREATE_ARRAY(&arena, glyph_strings_jp.length, &glyph_strings_utf8_jp);
	for (u64 i = 0; i < glyph_strings_jp.length; ++i)
	{
		u64 pos = 0;
		RGT_CALL
		(
			rgt_read_utf8_string
			(
				&arena, glyph_strings_jp.elems[i], 
				&pos, &glyph_strings_utf8_jp.elems[i]
			)
		);
	}
	RGT_CREATE_ARRAY
	(
		&arena, glyph_strings_eng.length, &glyph_strings_utf8_eng
	);
	for (u64 i = 0; i < glyph_strings_eng.length; ++i)
	{
		u64 pos = 0;
		RGT_CALL
		(
			rgt_read_utf8_string
			(
				&arena, glyph_strings_eng.elems[i], 
				&pos, &glyph_strings_utf8_eng.elems[i]
			)
		);
	}
	RGT_CREATE_ARRAY(&arena, RGT_C_ARRAY_SIZE(g_speaker_name_strings), &speaker_names);
	for (u64 i = 0; i < RGT_C_ARRAY_SIZE(g_speaker_name_strings); ++i)
	{
		u64 pos = 0;
		RGT_CALL
		(
			rgt_read_utf8_string
			(	
				&arena, g_speaker_name_strings[i].jp, 
				&pos, &speaker_names.elems[i].jp
			)
		);
		pos = 0;
		RGT_CALL
		(
			rgt_read_utf8_string
			(
				&arena, g_speaker_name_strings[i].eng,
				&pos, &speaker_names.elems[i].eng
			)
		);
	}
	if (script_jp.dialogs.length != script_eng.dialogs.length)
	{
		printf
		(
			"ERROR:\n"
			"Japanese and English scripts have differing numbers of dialogs."
		);
		RGT_THROW(RGT_OUT_OF_BOUNDS_ERROR);
	}

	for (u64 i = 0; i < script_jp.dialogs.length; ++i)
	{
		rgt_utf8_string speaker_jp = {0};
		rgt_utf8_string speaker_eng = {0};
		rgt_utf8_char annotation_begin = {.elems = u8"（", .length = 3 };
		bool found_name = {0};
		RGT_CALL
		(
			rgt_glyph_indices_to_utf8
			(
				&arena, script_jp.dialogs.elems[i].speaker_glyph_indices,
				glyph_strings_utf8_jp, &speaker_jp
			)
		);
		for (u64 j = 0; j < speaker_jp.length; ++j)
		{
			if (rgt_utf8_char_equals(speaker_jp.elems[j], annotation_begin))
			{
				speaker_jp.length = j;
				break;
			}
		}

		for (u64 j = 0; !found_name && j < speaker_names.length; ++j)
		{
			if (rgt_utf8_string_equals(speaker_names.elems[j].jp, speaker_jp))
			{
				speaker_eng = speaker_names.elems[j].eng;
				found_name = true;
				break;
			}
		}
		if (!found_name)
		{
			printf
			(
				"Could not find translation for speaker of dialog %llu\n", i
			);
			RGT_THROW(RGT_OUT_OF_BOUNDS_ERROR);
		}
		RGT_CALL
		(
			rgt_utf8_to_glyph_indices
			(
				&arena, speaker_eng, glyph_strings_utf8_eng, 
				&script_eng.dialogs.elems[i].speaker_glyph_indices
			)
		);
	}

	RGT_CALL
	(
		rgt_rgo_script_to_headers
		(
			&arena, script_eng, SCRIPT_ID, glyph_strings_utf8_eng,
			STRUCTURE_OUT, COMMANDS_OUT, TEXT_OUT, false
		)
	);

finish:

	rgt_destroy_arena(&arena);

	return 0;
}