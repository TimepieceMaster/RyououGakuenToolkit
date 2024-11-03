#ifndef RGT_RGO_SCRIPT_1_STRUCTURE_H
#define RGT_RGO_SCRIPT_1_STRUCTURE_H

#include "script_1_commands.h"
#include "script_1_text.h"
#include "ryouou_gakuen_toolkit.h"

static rgt_rgo_script_element s_script_1_elements_data[] =
{
	{
		.type = RGT_RGO_SCRIPT_MAGIC,
		.content =
		{
			.magic =
			{
				.value = 0x3EFD
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_JUMP,
		.content =
		{
			.jump =
			{
				.id = 0
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_0_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_0_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_0_speaker_data,
				.message = s_dialogs_0_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1_speaker_data,
				.message = s_dialogs_1_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_2_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_2_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_2_speaker_data,
				.message = s_dialogs_2_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_3_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_3_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_3_speaker_data,
				.message = s_dialogs_3_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_4_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_4_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_4_speaker_data,
				.message = s_dialogs_4_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_5_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_5_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_5_speaker_data,
				.message = s_dialogs_5_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_6_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_6_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_6_speaker_data,
				.message = s_dialogs_6_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_7_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_7_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_7_speaker_data,
				.message = s_dialogs_7_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_8_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_8_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_8_speaker_data,
				.message = s_dialogs_8_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_9_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_9_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_9_speaker_data,
				.message = s_dialogs_9_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_10_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_10_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_10_speaker_data,
				.message = s_dialogs_10_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_11_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_11_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_11_speaker_data,
				.message = s_dialogs_11_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_12_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_12_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_12_speaker_data,
				.message = s_dialogs_12_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_13_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_13_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_13_speaker_data,
				.message = s_dialogs_13_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_14_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_14_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_14_speaker_data,
				.message = s_dialogs_14_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_15_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_15_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_15_speaker_data,
				.message = s_dialogs_15_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_16_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_16_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_16_speaker_data,
				.message = s_dialogs_16_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_17_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_17_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_17_speaker_data,
				.message = s_dialogs_17_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_18_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_18_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_18_speaker_data,
				.message = s_dialogs_18_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_19_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_19_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_JUMP,
		.content =
		{
			.jump =
			{
				.id = 1
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_19_1_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_19_1_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_19_speaker_data,
				.message = s_dialogs_19_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_20_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_20_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_20_speaker_data,
				.message = s_dialogs_20_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_21_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_21_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_21_speaker_data,
				.message = s_dialogs_21_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_22_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_22_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_22_speaker_data,
				.message = s_dialogs_22_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_23_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_23_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_23_speaker_data,
				.message = s_dialogs_23_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_24_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_24_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_24_speaker_data,
				.message = s_dialogs_24_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_25_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_25_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_25_speaker_data,
				.message = s_dialogs_25_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_26_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_26_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_26_speaker_data,
				.message = s_dialogs_26_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_27_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_27_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_27_speaker_data,
				.message = s_dialogs_27_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_28_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_28_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_28_speaker_data,
				.message = s_dialogs_28_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_29_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_29_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_29_speaker_data,
				.message = s_dialogs_29_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_30_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_30_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_30_speaker_data,
				.message = s_dialogs_30_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_31_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_31_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_31_speaker_data,
				.message = s_dialogs_31_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_32_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_32_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_32_speaker_data,
				.message = s_dialogs_32_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_33_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_33_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_33_speaker_data,
				.message = s_dialogs_33_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_34_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_34_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_34_speaker_data,
				.message = s_dialogs_34_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_35_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_35_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_35_speaker_data,
				.message = s_dialogs_35_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_36_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_36_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_36_speaker_data,
				.message = s_dialogs_36_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_37_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_37_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_37_speaker_data,
				.message = s_dialogs_37_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_38_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_38_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_38_speaker_data,
				.message = s_dialogs_38_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_39_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_39_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_39_speaker_data,
				.message = s_dialogs_39_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_40_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_40_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_40_speaker_data,
				.message = s_dialogs_40_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_41_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_41_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_41_speaker_data,
				.message = s_dialogs_41_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_42_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_42_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_42_speaker_data,
				.message = s_dialogs_42_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_43_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_43_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_43_speaker_data,
				.message = s_dialogs_43_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_44_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_44_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_44_speaker_data,
				.message = s_dialogs_44_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_45_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_45_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_45_speaker_data,
				.message = s_dialogs_45_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_46_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_46_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_46_speaker_data,
				.message = s_dialogs_46_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_47_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_47_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_47_speaker_data,
				.message = s_dialogs_47_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_48_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_48_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_48_speaker_data,
				.message = s_dialogs_48_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_49_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_49_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_49_speaker_data,
				.message = s_dialogs_49_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_50_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_50_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_50_speaker_data,
				.message = s_dialogs_50_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_51_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_51_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_51_speaker_data,
				.message = s_dialogs_51_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_52_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_52_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_52_speaker_data,
				.message = s_dialogs_52_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_53_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_53_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_53_speaker_data,
				.message = s_dialogs_53_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_54_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_54_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_54_speaker_data,
				.message = s_dialogs_54_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_55_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_55_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_55_speaker_data,
				.message = s_dialogs_55_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_56_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_56_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_56_speaker_data,
				.message = s_dialogs_56_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_57_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_57_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_57_speaker_data,
				.message = s_dialogs_57_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_58_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_58_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_58_speaker_data,
				.message = s_dialogs_58_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_59_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_59_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_59_speaker_data,
				.message = s_dialogs_59_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_60_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_60_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_60_speaker_data,
				.message = s_dialogs_60_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_61_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_61_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_61_speaker_data,
				.message = s_dialogs_61_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_62_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_62_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_62_speaker_data,
				.message = s_dialogs_62_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_63_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_63_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_63_speaker_data,
				.message = s_dialogs_63_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_64_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_64_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_64_speaker_data,
				.message = s_dialogs_64_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_65_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_65_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_65_speaker_data,
				.message = s_dialogs_65_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_66_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_66_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_66_speaker_data,
				.message = s_dialogs_66_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_67_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_67_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_67_speaker_data,
				.message = s_dialogs_67_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_68_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_68_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_68_speaker_data,
				.message = s_dialogs_68_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_69_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_69_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_69_speaker_data,
				.message = s_dialogs_69_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_70_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_70_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_70_speaker_data,
				.message = s_dialogs_70_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_71_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_71_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_71_speaker_data,
				.message = s_dialogs_71_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_72_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_72_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_72_speaker_data,
				.message = s_dialogs_72_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_73_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_73_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_73_speaker_data,
				.message = s_dialogs_73_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_74_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_74_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_74_speaker_data,
				.message = s_dialogs_74_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_75_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_75_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_75_speaker_data,
				.message = s_dialogs_75_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_76_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_76_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_76_speaker_data,
				.message = s_dialogs_76_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_77_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_77_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_77_speaker_data,
				.message = s_dialogs_77_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_78_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_78_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_78_speaker_data,
				.message = s_dialogs_78_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_79_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_79_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_79_speaker_data,
				.message = s_dialogs_79_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_80_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_80_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_80_speaker_data,
				.message = s_dialogs_80_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_81_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_81_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_81_speaker_data,
				.message = s_dialogs_81_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_82_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_82_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_82_speaker_data,
				.message = s_dialogs_82_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_83_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_83_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_83_speaker_data,
				.message = s_dialogs_83_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_84_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_84_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_84_speaker_data,
				.message = s_dialogs_84_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_85_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_85_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_85_speaker_data,
				.message = s_dialogs_85_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_86_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_86_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_86_speaker_data,
				.message = s_dialogs_86_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_87_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_87_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_87_speaker_data,
				.message = s_dialogs_87_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_88_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_88_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_88_speaker_data,
				.message = s_dialogs_88_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_89_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_89_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_89_speaker_data,
				.message = s_dialogs_89_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_90_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_90_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_90_speaker_data,
				.message = s_dialogs_90_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_91_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_91_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_91_speaker_data,
				.message = s_dialogs_91_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_92_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_92_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_92_speaker_data,
				.message = s_dialogs_92_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_93_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_93_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_93_speaker_data,
				.message = s_dialogs_93_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_94_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_94_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_94_speaker_data,
				.message = s_dialogs_94_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_95_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_95_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_95_speaker_data,
				.message = s_dialogs_95_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_96_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_96_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_96_speaker_data,
				.message = s_dialogs_96_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_97_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_97_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_97_speaker_data,
				.message = s_dialogs_97_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_98_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_98_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_98_speaker_data,
				.message = s_dialogs_98_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_99_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_99_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_99_speaker_data,
				.message = s_dialogs_99_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_100_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_100_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_100_speaker_data,
				.message = s_dialogs_100_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_101_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_101_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_101_speaker_data,
				.message = s_dialogs_101_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_102_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_102_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_102_speaker_data,
				.message = s_dialogs_102_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_103_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_103_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_103_speaker_data,
				.message = s_dialogs_103_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_104_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_104_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_104_speaker_data,
				.message = s_dialogs_104_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_105_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_105_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_105_speaker_data,
				.message = s_dialogs_105_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_106_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_106_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_106_speaker_data,
				.message = s_dialogs_106_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_107_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_107_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_107_speaker_data,
				.message = s_dialogs_107_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_108_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_108_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_108_speaker_data,
				.message = s_dialogs_108_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_109_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_109_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_109_speaker_data,
				.message = s_dialogs_109_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_110_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_110_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_110_speaker_data,
				.message = s_dialogs_110_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_111_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_111_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_111_speaker_data,
				.message = s_dialogs_111_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_112_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_112_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_112_speaker_data,
				.message = s_dialogs_112_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_113_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_113_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_113_speaker_data,
				.message = s_dialogs_113_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_114_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_114_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_114_speaker_data,
				.message = s_dialogs_114_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_115_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_115_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_115_speaker_data,
				.message = s_dialogs_115_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_116_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_116_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_116_speaker_data,
				.message = s_dialogs_116_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_117_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_117_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_117_speaker_data,
				.message = s_dialogs_117_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_118_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_118_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_118_speaker_data,
				.message = s_dialogs_118_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_119_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_119_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_119_speaker_data,
				.message = s_dialogs_119_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_120_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_120_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_120_speaker_data,
				.message = s_dialogs_120_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_121_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_121_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_121_speaker_data,
				.message = s_dialogs_121_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_122_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_122_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_122_speaker_data,
				.message = s_dialogs_122_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_123_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_123_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_123_speaker_data,
				.message = s_dialogs_123_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_124_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_124_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_124_speaker_data,
				.message = s_dialogs_124_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_125_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_125_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_125_speaker_data,
				.message = s_dialogs_125_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_126_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_126_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_126_speaker_data,
				.message = s_dialogs_126_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_127_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_127_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_127_speaker_data,
				.message = s_dialogs_127_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_128_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_128_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_128_speaker_data,
				.message = s_dialogs_128_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_129_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_129_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_129_speaker_data,
				.message = s_dialogs_129_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_130_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_130_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_130_speaker_data,
				.message = s_dialogs_130_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_131_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_131_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_131_speaker_data,
				.message = s_dialogs_131_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_132_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_132_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_132_speaker_data,
				.message = s_dialogs_132_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_133_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_133_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_133_speaker_data,
				.message = s_dialogs_133_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_134_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_134_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_134_speaker_data,
				.message = s_dialogs_134_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_135_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_135_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_135_speaker_data,
				.message = s_dialogs_135_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_136_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_136_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_136_speaker_data,
				.message = s_dialogs_136_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_137_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_137_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_137_speaker_data,
				.message = s_dialogs_137_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_138_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_138_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_138_speaker_data,
				.message = s_dialogs_138_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_139_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_139_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_139_speaker_data,
				.message = s_dialogs_139_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_140_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_140_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_140_speaker_data,
				.message = s_dialogs_140_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_141_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_141_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_141_speaker_data,
				.message = s_dialogs_141_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_142_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_142_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_142_speaker_data,
				.message = s_dialogs_142_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_143_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_143_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_143_speaker_data,
				.message = s_dialogs_143_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_144_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_144_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_144_speaker_data,
				.message = s_dialogs_144_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_145_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_145_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_145_speaker_data,
				.message = s_dialogs_145_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_146_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_146_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_146_speaker_data,
				.message = s_dialogs_146_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_147_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_147_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_147_speaker_data,
				.message = s_dialogs_147_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_148_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_148_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_148_speaker_data,
				.message = s_dialogs_148_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_149_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_149_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_149_speaker_data,
				.message = s_dialogs_149_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_150_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_150_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_150_speaker_data,
				.message = s_dialogs_150_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_151_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_151_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_151_speaker_data,
				.message = s_dialogs_151_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_152_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_152_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_152_speaker_data,
				.message = s_dialogs_152_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_153_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_153_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_153_speaker_data,
				.message = s_dialogs_153_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_154_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_154_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_154_speaker_data,
				.message = s_dialogs_154_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_155_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_155_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_155_speaker_data,
				.message = s_dialogs_155_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_156_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_156_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_156_speaker_data,
				.message = s_dialogs_156_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_157_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_157_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_157_speaker_data,
				.message = s_dialogs_157_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_158_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_158_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_158_speaker_data,
				.message = s_dialogs_158_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_159_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_159_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_159_speaker_data,
				.message = s_dialogs_159_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_160_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_160_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_160_speaker_data,
				.message = s_dialogs_160_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_161_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_161_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_161_speaker_data,
				.message = s_dialogs_161_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_162_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_162_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_162_speaker_data,
				.message = s_dialogs_162_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_163_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_163_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_163_speaker_data,
				.message = s_dialogs_163_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_164_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_164_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_164_speaker_data,
				.message = s_dialogs_164_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_165_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_165_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_165_speaker_data,
				.message = s_dialogs_165_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_166_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_166_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_166_speaker_data,
				.message = s_dialogs_166_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_167_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_167_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_167_speaker_data,
				.message = s_dialogs_167_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_168_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_168_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_168_speaker_data,
				.message = s_dialogs_168_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_169_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_169_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_169_speaker_data,
				.message = s_dialogs_169_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_170_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_170_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_170_speaker_data,
				.message = s_dialogs_170_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_171_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_171_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_171_speaker_data,
				.message = s_dialogs_171_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_172_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_172_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_172_speaker_data,
				.message = s_dialogs_172_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_173_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_173_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_173_speaker_data,
				.message = s_dialogs_173_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_174_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_174_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_174_speaker_data,
				.message = s_dialogs_174_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_175_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_175_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_175_speaker_data,
				.message = s_dialogs_175_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_176_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_176_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_176_speaker_data,
				.message = s_dialogs_176_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_177_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_177_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_177_speaker_data,
				.message = s_dialogs_177_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_178_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_178_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_178_speaker_data,
				.message = s_dialogs_178_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_179_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_179_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_179_speaker_data,
				.message = s_dialogs_179_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_180_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_180_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_180_speaker_data,
				.message = s_dialogs_180_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_181_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_181_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_181_speaker_data,
				.message = s_dialogs_181_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_182_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_182_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_182_speaker_data,
				.message = s_dialogs_182_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_183_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_183_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_183_speaker_data,
				.message = s_dialogs_183_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_184_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_184_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_184_speaker_data,
				.message = s_dialogs_184_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_185_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_185_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_185_speaker_data,
				.message = s_dialogs_185_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_186_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_186_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_186_speaker_data,
				.message = s_dialogs_186_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_187_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_187_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_187_speaker_data,
				.message = s_dialogs_187_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_188_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_188_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_188_speaker_data,
				.message = s_dialogs_188_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_189_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_189_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_189_speaker_data,
				.message = s_dialogs_189_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_190_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_190_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_190_speaker_data,
				.message = s_dialogs_190_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_191_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_191_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_191_speaker_data,
				.message = s_dialogs_191_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_192_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_192_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_192_speaker_data,
				.message = s_dialogs_192_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_193_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_193_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_193_speaker_data,
				.message = s_dialogs_193_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_194_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_194_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_194_speaker_data,
				.message = s_dialogs_194_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_195_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_195_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_195_speaker_data,
				.message = s_dialogs_195_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_196_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_196_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_196_speaker_data,
				.message = s_dialogs_196_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_197_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_197_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_197_speaker_data,
				.message = s_dialogs_197_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_198_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_198_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_198_speaker_data,
				.message = s_dialogs_198_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_199_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_199_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_199_speaker_data,
				.message = s_dialogs_199_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_200_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_200_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_200_speaker_data,
				.message = s_dialogs_200_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_201_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_201_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_201_speaker_data,
				.message = s_dialogs_201_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_202_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_202_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_202_speaker_data,
				.message = s_dialogs_202_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_203_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_203_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_203_speaker_data,
				.message = s_dialogs_203_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_204_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_204_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_204_speaker_data,
				.message = s_dialogs_204_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_205_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_205_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_205_speaker_data,
				.message = s_dialogs_205_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_206_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_206_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_206_speaker_data,
				.message = s_dialogs_206_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_207_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_207_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_207_speaker_data,
				.message = s_dialogs_207_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_208_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_208_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_208_speaker_data,
				.message = s_dialogs_208_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_209_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_209_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_209_speaker_data,
				.message = s_dialogs_209_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_210_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_210_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_210_speaker_data,
				.message = s_dialogs_210_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_211_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_211_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_211_speaker_data,
				.message = s_dialogs_211_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_212_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_212_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_212_speaker_data,
				.message = s_dialogs_212_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_213_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_213_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_213_speaker_data,
				.message = s_dialogs_213_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_214_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_214_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_214_speaker_data,
				.message = s_dialogs_214_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_215_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_215_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_215_speaker_data,
				.message = s_dialogs_215_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_216_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_216_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_216_speaker_data,
				.message = s_dialogs_216_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_217_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_217_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_217_speaker_data,
				.message = s_dialogs_217_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_218_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_218_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_218_speaker_data,
				.message = s_dialogs_218_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_219_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_219_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_219_speaker_data,
				.message = s_dialogs_219_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_220_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_220_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_220_speaker_data,
				.message = s_dialogs_220_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_221_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_221_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_221_speaker_data,
				.message = s_dialogs_221_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_222_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_222_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_222_speaker_data,
				.message = s_dialogs_222_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_223_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_223_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_223_speaker_data,
				.message = s_dialogs_223_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_224_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_224_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_224_speaker_data,
				.message = s_dialogs_224_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_225_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_225_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_225_speaker_data,
				.message = s_dialogs_225_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_226_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_226_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_226_speaker_data,
				.message = s_dialogs_226_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_227_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_227_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_227_speaker_data,
				.message = s_dialogs_227_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_228_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_228_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_228_speaker_data,
				.message = s_dialogs_228_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_229_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_229_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_229_speaker_data,
				.message = s_dialogs_229_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_230_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_230_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_230_speaker_data,
				.message = s_dialogs_230_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_231_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_231_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_231_speaker_data,
				.message = s_dialogs_231_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_232_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_232_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_232_speaker_data,
				.message = s_dialogs_232_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_233_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_233_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_233_speaker_data,
				.message = s_dialogs_233_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_234_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_234_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_234_speaker_data,
				.message = s_dialogs_234_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_235_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_235_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_235_speaker_data,
				.message = s_dialogs_235_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_236_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_236_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_236_speaker_data,
				.message = s_dialogs_236_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_237_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_237_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_237_speaker_data,
				.message = s_dialogs_237_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_238_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_238_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_238_speaker_data,
				.message = s_dialogs_238_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_239_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_239_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_239_speaker_data,
				.message = s_dialogs_239_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_240_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_240_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_240_speaker_data,
				.message = s_dialogs_240_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_241_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_241_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_241_speaker_data,
				.message = s_dialogs_241_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_242_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_242_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_242_speaker_data,
				.message = s_dialogs_242_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_243_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_243_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_243_speaker_data,
				.message = s_dialogs_243_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_244_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_244_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_244_speaker_data,
				.message = s_dialogs_244_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_245_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_245_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_245_speaker_data,
				.message = s_dialogs_245_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_246_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_246_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_246_speaker_data,
				.message = s_dialogs_246_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_247_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_247_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_247_speaker_data,
				.message = s_dialogs_247_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_248_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_248_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_248_speaker_data,
				.message = s_dialogs_248_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_249_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_249_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_249_speaker_data,
				.message = s_dialogs_249_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_250_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_250_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_250_speaker_data,
				.message = s_dialogs_250_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_251_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_251_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_251_speaker_data,
				.message = s_dialogs_251_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_252_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_252_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_252_speaker_data,
				.message = s_dialogs_252_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_253_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_253_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_253_speaker_data,
				.message = s_dialogs_253_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_254_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_254_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_254_speaker_data,
				.message = s_dialogs_254_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_255_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_255_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_255_speaker_data,
				.message = s_dialogs_255_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_256_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_256_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_256_speaker_data,
				.message = s_dialogs_256_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_257_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_257_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_257_speaker_data,
				.message = s_dialogs_257_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_258_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_258_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_258_speaker_data,
				.message = s_dialogs_258_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_259_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_259_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_259_speaker_data,
				.message = s_dialogs_259_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_260_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_260_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_260_speaker_data,
				.message = s_dialogs_260_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_261_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_261_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_261_speaker_data,
				.message = s_dialogs_261_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_262_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_262_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_262_speaker_data,
				.message = s_dialogs_262_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_263_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_263_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_263_speaker_data,
				.message = s_dialogs_263_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_264_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_264_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_264_speaker_data,
				.message = s_dialogs_264_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_265_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_265_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_265_speaker_data,
				.message = s_dialogs_265_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_266_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_266_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_266_speaker_data,
				.message = s_dialogs_266_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_267_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_267_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_267_speaker_data,
				.message = s_dialogs_267_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_268_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_268_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_268_speaker_data,
				.message = s_dialogs_268_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_269_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_269_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_269_speaker_data,
				.message = s_dialogs_269_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_270_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_270_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_270_speaker_data,
				.message = s_dialogs_270_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_271_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_271_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_271_speaker_data,
				.message = s_dialogs_271_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_272_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_272_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_272_speaker_data,
				.message = s_dialogs_272_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_273_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_273_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_273_speaker_data,
				.message = s_dialogs_273_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_274_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_274_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_274_speaker_data,
				.message = s_dialogs_274_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_275_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_275_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_275_speaker_data,
				.message = s_dialogs_275_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_276_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_276_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_276_speaker_data,
				.message = s_dialogs_276_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_277_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_277_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_277_speaker_data,
				.message = s_dialogs_277_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_278_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_278_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_278_speaker_data,
				.message = s_dialogs_278_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_279_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_279_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_279_speaker_data,
				.message = s_dialogs_279_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_280_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_280_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_280_speaker_data,
				.message = s_dialogs_280_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_281_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_281_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_281_speaker_data,
				.message = s_dialogs_281_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_282_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_282_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_282_speaker_data,
				.message = s_dialogs_282_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_283_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_283_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_283_speaker_data,
				.message = s_dialogs_283_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_284_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_284_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_284_speaker_data,
				.message = s_dialogs_284_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_285_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_285_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_JUMP,
		.content =
		{
			.jump =
			{
				.id = 2
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_285_1_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_285_1_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_285_speaker_data,
				.message = s_dialogs_285_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_286_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_286_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_286_speaker_data,
				.message = s_dialogs_286_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_287_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_287_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_287_speaker_data,
				.message = s_dialogs_287_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_288_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_288_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_288_speaker_data,
				.message = s_dialogs_288_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_289_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_289_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_289_speaker_data,
				.message = s_dialogs_289_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_290_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_290_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_290_speaker_data,
				.message = s_dialogs_290_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_291_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_291_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_291_speaker_data,
				.message = s_dialogs_291_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_292_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_292_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_292_speaker_data,
				.message = s_dialogs_292_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_293_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_293_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_293_speaker_data,
				.message = s_dialogs_293_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_294_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_294_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_294_speaker_data,
				.message = s_dialogs_294_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_295_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_295_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_295_speaker_data,
				.message = s_dialogs_295_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_296_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_296_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_296_speaker_data,
				.message = s_dialogs_296_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_297_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_297_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_297_speaker_data,
				.message = s_dialogs_297_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_298_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_298_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_298_speaker_data,
				.message = s_dialogs_298_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_299_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_299_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_299_speaker_data,
				.message = s_dialogs_299_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_300_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_300_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_300_speaker_data,
				.message = s_dialogs_300_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_301_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_301_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_301_speaker_data,
				.message = s_dialogs_301_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_302_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_302_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_302_speaker_data,
				.message = s_dialogs_302_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_303_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_303_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_303_speaker_data,
				.message = s_dialogs_303_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_304_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_304_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_304_speaker_data,
				.message = s_dialogs_304_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_305_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_305_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_305_speaker_data,
				.message = s_dialogs_305_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_306_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_306_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_306_speaker_data,
				.message = s_dialogs_306_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_307_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_307_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_307_speaker_data,
				.message = s_dialogs_307_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_308_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_308_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_308_speaker_data,
				.message = s_dialogs_308_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_309_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_309_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_309_speaker_data,
				.message = s_dialogs_309_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_310_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_310_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_310_speaker_data,
				.message = s_dialogs_310_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_311_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_311_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_311_speaker_data,
				.message = s_dialogs_311_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_312_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_312_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_312_speaker_data,
				.message = s_dialogs_312_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_313_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_313_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_313_speaker_data,
				.message = s_dialogs_313_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_314_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_314_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_314_speaker_data,
				.message = s_dialogs_314_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_315_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_315_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_315_speaker_data,
				.message = s_dialogs_315_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_316_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_316_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_316_speaker_data,
				.message = s_dialogs_316_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_317_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_317_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_317_speaker_data,
				.message = s_dialogs_317_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_318_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_318_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_318_speaker_data,
				.message = s_dialogs_318_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_319_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_319_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_319_speaker_data,
				.message = s_dialogs_319_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_320_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_320_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_320_speaker_data,
				.message = s_dialogs_320_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_321_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_321_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_321_speaker_data,
				.message = s_dialogs_321_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_322_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_322_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_322_speaker_data,
				.message = s_dialogs_322_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_323_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_323_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_323_speaker_data,
				.message = s_dialogs_323_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_324_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_324_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_324_speaker_data,
				.message = s_dialogs_324_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_325_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_325_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_325_speaker_data,
				.message = s_dialogs_325_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_326_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_326_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_326_speaker_data,
				.message = s_dialogs_326_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_327_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_327_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_327_speaker_data,
				.message = s_dialogs_327_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_328_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_328_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_328_speaker_data,
				.message = s_dialogs_328_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_329_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_329_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_329_speaker_data,
				.message = s_dialogs_329_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_330_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_330_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_330_speaker_data,
				.message = s_dialogs_330_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_331_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_331_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_331_speaker_data,
				.message = s_dialogs_331_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_332_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_332_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_332_speaker_data,
				.message = s_dialogs_332_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_333_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_333_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_333_speaker_data,
				.message = s_dialogs_333_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_334_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_334_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_334_speaker_data,
				.message = s_dialogs_334_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_335_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_335_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_335_speaker_data,
				.message = s_dialogs_335_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_336_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_336_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_336_speaker_data,
				.message = s_dialogs_336_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_337_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_337_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_337_speaker_data,
				.message = s_dialogs_337_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_338_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_338_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_338_speaker_data,
				.message = s_dialogs_338_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_339_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_339_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_339_speaker_data,
				.message = s_dialogs_339_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_340_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_340_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_340_speaker_data,
				.message = s_dialogs_340_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_341_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_341_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_341_speaker_data,
				.message = s_dialogs_341_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_342_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_342_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_342_speaker_data,
				.message = s_dialogs_342_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_343_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_343_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_343_speaker_data,
				.message = s_dialogs_343_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_344_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_344_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_344_speaker_data,
				.message = s_dialogs_344_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_345_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_345_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_345_speaker_data,
				.message = s_dialogs_345_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_346_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_346_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_346_speaker_data,
				.message = s_dialogs_346_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_347_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_347_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_347_speaker_data,
				.message = s_dialogs_347_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_348_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_348_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_348_speaker_data,
				.message = s_dialogs_348_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_349_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_349_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_349_speaker_data,
				.message = s_dialogs_349_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_350_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_350_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_350_speaker_data,
				.message = s_dialogs_350_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_351_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_351_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_351_speaker_data,
				.message = s_dialogs_351_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_352_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_352_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_352_speaker_data,
				.message = s_dialogs_352_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_353_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_353_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_353_speaker_data,
				.message = s_dialogs_353_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_354_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_354_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_354_speaker_data,
				.message = s_dialogs_354_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_355_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_355_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_355_speaker_data,
				.message = s_dialogs_355_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_356_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_356_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_356_speaker_data,
				.message = s_dialogs_356_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_357_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_357_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_357_speaker_data,
				.message = s_dialogs_357_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_358_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_358_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_358_speaker_data,
				.message = s_dialogs_358_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_359_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_359_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_359_speaker_data,
				.message = s_dialogs_359_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_360_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_360_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_360_speaker_data,
				.message = s_dialogs_360_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_361_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_361_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_361_speaker_data,
				.message = s_dialogs_361_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_362_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_362_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_362_speaker_data,
				.message = s_dialogs_362_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_363_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_363_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_363_speaker_data,
				.message = s_dialogs_363_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_364_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_364_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_364_speaker_data,
				.message = s_dialogs_364_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_365_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_365_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_365_speaker_data,
				.message = s_dialogs_365_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_366_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_366_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_366_speaker_data,
				.message = s_dialogs_366_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_367_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_367_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_367_speaker_data,
				.message = s_dialogs_367_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_368_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_368_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_368_speaker_data,
				.message = s_dialogs_368_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_369_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_369_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_369_speaker_data,
				.message = s_dialogs_369_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_370_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_370_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_370_speaker_data,
				.message = s_dialogs_370_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_371_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_371_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_371_speaker_data,
				.message = s_dialogs_371_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_372_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_372_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_372_speaker_data,
				.message = s_dialogs_372_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_373_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_373_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_373_speaker_data,
				.message = s_dialogs_373_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_374_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_374_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_374_speaker_data,
				.message = s_dialogs_374_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_375_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_375_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_375_speaker_data,
				.message = s_dialogs_375_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_376_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_376_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_376_speaker_data,
				.message = s_dialogs_376_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_377_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_377_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_377_speaker_data,
				.message = s_dialogs_377_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_378_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_378_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_378_speaker_data,
				.message = s_dialogs_378_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_379_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_379_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_379_speaker_data,
				.message = s_dialogs_379_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_380_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_380_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_380_speaker_data,
				.message = s_dialogs_380_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_381_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_381_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_381_speaker_data,
				.message = s_dialogs_381_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_382_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_382_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_382_speaker_data,
				.message = s_dialogs_382_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_383_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_383_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_383_speaker_data,
				.message = s_dialogs_383_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_384_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_384_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_384_speaker_data,
				.message = s_dialogs_384_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_385_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_385_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_385_speaker_data,
				.message = s_dialogs_385_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_386_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_386_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_386_speaker_data,
				.message = s_dialogs_386_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_387_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_387_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_387_speaker_data,
				.message = s_dialogs_387_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_388_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_388_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_388_speaker_data,
				.message = s_dialogs_388_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_389_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_389_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_389_speaker_data,
				.message = s_dialogs_389_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_390_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_390_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_390_speaker_data,
				.message = s_dialogs_390_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_391_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_391_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_391_speaker_data,
				.message = s_dialogs_391_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_392_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_392_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_392_speaker_data,
				.message = s_dialogs_392_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_393_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_393_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_393_speaker_data,
				.message = s_dialogs_393_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_394_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_394_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_394_speaker_data,
				.message = s_dialogs_394_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_395_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_395_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_395_speaker_data,
				.message = s_dialogs_395_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_396_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_396_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_396_speaker_data,
				.message = s_dialogs_396_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_397_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_397_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_397_speaker_data,
				.message = s_dialogs_397_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_398_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_398_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_398_speaker_data,
				.message = s_dialogs_398_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_399_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_399_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_399_speaker_data,
				.message = s_dialogs_399_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_400_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_400_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_400_speaker_data,
				.message = s_dialogs_400_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_401_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_401_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_401_speaker_data,
				.message = s_dialogs_401_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_402_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_402_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_402_speaker_data,
				.message = s_dialogs_402_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_403_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_403_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_403_speaker_data,
				.message = s_dialogs_403_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_404_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_404_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_404_speaker_data,
				.message = s_dialogs_404_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_405_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_405_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_405_speaker_data,
				.message = s_dialogs_405_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_406_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_406_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_406_speaker_data,
				.message = s_dialogs_406_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_407_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_407_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_407_speaker_data,
				.message = s_dialogs_407_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_408_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_408_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_408_speaker_data,
				.message = s_dialogs_408_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_409_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_409_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_409_speaker_data,
				.message = s_dialogs_409_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_410_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_410_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_410_speaker_data,
				.message = s_dialogs_410_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_411_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_411_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_411_speaker_data,
				.message = s_dialogs_411_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_412_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_412_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_412_speaker_data,
				.message = s_dialogs_412_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_413_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_413_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_413_speaker_data,
				.message = s_dialogs_413_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_414_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_414_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_414_speaker_data,
				.message = s_dialogs_414_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_415_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_415_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_415_speaker_data,
				.message = s_dialogs_415_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_416_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_416_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_416_speaker_data,
				.message = s_dialogs_416_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_417_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_417_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_417_speaker_data,
				.message = s_dialogs_417_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_418_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_418_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_418_speaker_data,
				.message = s_dialogs_418_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_419_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_419_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_419_speaker_data,
				.message = s_dialogs_419_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_420_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_420_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_420_speaker_data,
				.message = s_dialogs_420_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_421_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_421_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_421_speaker_data,
				.message = s_dialogs_421_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_422_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_422_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_422_speaker_data,
				.message = s_dialogs_422_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_423_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_423_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_423_speaker_data,
				.message = s_dialogs_423_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_424_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_424_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_424_speaker_data,
				.message = s_dialogs_424_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_425_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_425_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_425_speaker_data,
				.message = s_dialogs_425_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_426_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_426_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_426_speaker_data,
				.message = s_dialogs_426_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_427_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_427_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_427_speaker_data,
				.message = s_dialogs_427_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_428_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_428_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_428_speaker_data,
				.message = s_dialogs_428_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_429_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_429_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_429_speaker_data,
				.message = s_dialogs_429_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_430_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_430_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_430_speaker_data,
				.message = s_dialogs_430_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_431_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_431_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_431_speaker_data,
				.message = s_dialogs_431_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_432_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_432_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_432_speaker_data,
				.message = s_dialogs_432_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_433_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_433_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_433_speaker_data,
				.message = s_dialogs_433_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_434_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_434_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_434_speaker_data,
				.message = s_dialogs_434_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_435_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_435_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_435_speaker_data,
				.message = s_dialogs_435_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_436_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_436_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_436_speaker_data,
				.message = s_dialogs_436_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_437_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_437_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_437_speaker_data,
				.message = s_dialogs_437_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_438_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_438_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_438_speaker_data,
				.message = s_dialogs_438_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_439_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_439_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_439_speaker_data,
				.message = s_dialogs_439_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_440_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_440_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_440_speaker_data,
				.message = s_dialogs_440_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_441_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_441_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_441_speaker_data,
				.message = s_dialogs_441_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_442_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_442_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_442_speaker_data,
				.message = s_dialogs_442_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_443_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_443_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_443_speaker_data,
				.message = s_dialogs_443_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_444_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_444_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_444_speaker_data,
				.message = s_dialogs_444_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_445_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_445_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_445_speaker_data,
				.message = s_dialogs_445_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_446_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_446_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_446_speaker_data,
				.message = s_dialogs_446_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_447_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_447_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_447_speaker_data,
				.message = s_dialogs_447_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_448_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_448_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_448_speaker_data,
				.message = s_dialogs_448_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_449_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_449_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_449_speaker_data,
				.message = s_dialogs_449_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_450_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_450_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_450_speaker_data,
				.message = s_dialogs_450_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_451_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_451_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_451_speaker_data,
				.message = s_dialogs_451_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_452_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_452_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_452_speaker_data,
				.message = s_dialogs_452_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_453_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_453_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_453_speaker_data,
				.message = s_dialogs_453_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_454_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_454_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_454_speaker_data,
				.message = s_dialogs_454_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_455_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_455_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_455_speaker_data,
				.message = s_dialogs_455_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_456_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_456_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_456_speaker_data,
				.message = s_dialogs_456_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_457_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_457_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_457_speaker_data,
				.message = s_dialogs_457_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_458_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_458_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_458_speaker_data,
				.message = s_dialogs_458_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_459_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_459_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_459_speaker_data,
				.message = s_dialogs_459_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_460_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_460_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_460_speaker_data,
				.message = s_dialogs_460_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_461_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_461_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_461_speaker_data,
				.message = s_dialogs_461_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_462_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_462_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_462_speaker_data,
				.message = s_dialogs_462_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_463_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_463_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_463_speaker_data,
				.message = s_dialogs_463_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_464_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_464_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_464_speaker_data,
				.message = s_dialogs_464_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_465_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_465_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_465_speaker_data,
				.message = s_dialogs_465_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_466_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_466_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_466_speaker_data,
				.message = s_dialogs_466_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_467_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_467_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_467_speaker_data,
				.message = s_dialogs_467_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_468_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_468_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_468_speaker_data,
				.message = s_dialogs_468_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_469_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_469_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_469_speaker_data,
				.message = s_dialogs_469_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_470_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_470_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_470_speaker_data,
				.message = s_dialogs_470_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_471_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_471_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_471_speaker_data,
				.message = s_dialogs_471_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_472_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_472_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_472_speaker_data,
				.message = s_dialogs_472_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_473_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_473_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_473_speaker_data,
				.message = s_dialogs_473_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_474_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_474_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_474_speaker_data,
				.message = s_dialogs_474_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_475_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_475_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_475_speaker_data,
				.message = s_dialogs_475_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_476_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_476_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_476_speaker_data,
				.message = s_dialogs_476_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_477_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_477_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_477_speaker_data,
				.message = s_dialogs_477_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_478_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_478_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_478_speaker_data,
				.message = s_dialogs_478_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_479_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_479_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_479_speaker_data,
				.message = s_dialogs_479_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_480_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_480_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_480_speaker_data,
				.message = s_dialogs_480_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_481_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_481_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_481_speaker_data,
				.message = s_dialogs_481_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_482_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_482_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_482_speaker_data,
				.message = s_dialogs_482_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_483_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_483_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_483_speaker_data,
				.message = s_dialogs_483_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_484_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_484_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_484_speaker_data,
				.message = s_dialogs_484_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_485_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_485_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_485_speaker_data,
				.message = s_dialogs_485_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_486_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_486_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_486_speaker_data,
				.message = s_dialogs_486_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_487_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_487_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_487_speaker_data,
				.message = s_dialogs_487_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_488_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_488_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_488_speaker_data,
				.message = s_dialogs_488_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_489_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_489_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_489_speaker_data,
				.message = s_dialogs_489_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_490_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_490_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_490_speaker_data,
				.message = s_dialogs_490_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_491_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_491_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_491_speaker_data,
				.message = s_dialogs_491_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_492_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_492_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_492_speaker_data,
				.message = s_dialogs_492_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_493_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_493_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_493_speaker_data,
				.message = s_dialogs_493_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_494_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_494_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_494_speaker_data,
				.message = s_dialogs_494_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_495_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_495_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_495_speaker_data,
				.message = s_dialogs_495_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_496_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_496_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_496_speaker_data,
				.message = s_dialogs_496_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_497_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_497_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_497_speaker_data,
				.message = s_dialogs_497_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_498_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_498_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_498_speaker_data,
				.message = s_dialogs_498_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_499_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_499_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_499_speaker_data,
				.message = s_dialogs_499_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_500_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_500_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_500_speaker_data,
				.message = s_dialogs_500_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_501_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_501_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_501_speaker_data,
				.message = s_dialogs_501_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_502_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_502_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_502_speaker_data,
				.message = s_dialogs_502_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_503_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_503_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_503_speaker_data,
				.message = s_dialogs_503_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_504_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_504_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_504_speaker_data,
				.message = s_dialogs_504_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_505_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_505_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_505_speaker_data,
				.message = s_dialogs_505_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_506_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_506_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_506_speaker_data,
				.message = s_dialogs_506_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_507_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_507_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_507_speaker_data,
				.message = s_dialogs_507_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_508_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_508_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_508_speaker_data,
				.message = s_dialogs_508_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_509_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_509_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_509_speaker_data,
				.message = s_dialogs_509_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_510_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_510_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_510_speaker_data,
				.message = s_dialogs_510_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_511_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_511_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_511_speaker_data,
				.message = s_dialogs_511_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_512_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_512_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_512_speaker_data,
				.message = s_dialogs_512_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_513_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_513_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_513_speaker_data,
				.message = s_dialogs_513_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_514_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_514_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_514_speaker_data,
				.message = s_dialogs_514_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_515_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_515_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_515_speaker_data,
				.message = s_dialogs_515_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_516_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_516_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_516_speaker_data,
				.message = s_dialogs_516_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_517_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_517_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_517_speaker_data,
				.message = s_dialogs_517_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_518_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_518_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_518_speaker_data,
				.message = s_dialogs_518_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_519_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_519_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_519_speaker_data,
				.message = s_dialogs_519_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_520_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_520_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_520_speaker_data,
				.message = s_dialogs_520_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_521_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_521_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_521_speaker_data,
				.message = s_dialogs_521_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_522_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_522_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_522_speaker_data,
				.message = s_dialogs_522_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_523_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_523_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_523_speaker_data,
				.message = s_dialogs_523_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_524_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_524_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_524_speaker_data,
				.message = s_dialogs_524_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_525_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_525_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_525_speaker_data,
				.message = s_dialogs_525_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_526_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_526_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_526_speaker_data,
				.message = s_dialogs_526_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_527_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_527_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_527_speaker_data,
				.message = s_dialogs_527_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_528_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_528_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_528_speaker_data,
				.message = s_dialogs_528_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_529_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_529_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_529_speaker_data,
				.message = s_dialogs_529_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_530_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_530_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_530_speaker_data,
				.message = s_dialogs_530_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_531_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_531_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_531_speaker_data,
				.message = s_dialogs_531_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_532_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_532_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_532_speaker_data,
				.message = s_dialogs_532_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_533_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_533_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_533_speaker_data,
				.message = s_dialogs_533_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_534_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_534_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_534_speaker_data,
				.message = s_dialogs_534_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_535_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_535_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_535_speaker_data,
				.message = s_dialogs_535_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_536_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_536_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_536_speaker_data,
				.message = s_dialogs_536_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_537_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_537_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_537_speaker_data,
				.message = s_dialogs_537_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_538_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_538_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_538_speaker_data,
				.message = s_dialogs_538_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_539_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_539_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_539_speaker_data,
				.message = s_dialogs_539_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_540_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_540_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_540_speaker_data,
				.message = s_dialogs_540_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_541_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_541_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_541_speaker_data,
				.message = s_dialogs_541_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_542_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_542_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_542_speaker_data,
				.message = s_dialogs_542_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_543_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_543_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_543_speaker_data,
				.message = s_dialogs_543_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_544_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_544_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_544_speaker_data,
				.message = s_dialogs_544_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_545_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_545_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_545_speaker_data,
				.message = s_dialogs_545_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_546_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_546_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_546_speaker_data,
				.message = s_dialogs_546_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_547_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_547_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_547_speaker_data,
				.message = s_dialogs_547_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_548_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_548_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_548_speaker_data,
				.message = s_dialogs_548_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_549_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_549_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_549_speaker_data,
				.message = s_dialogs_549_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_550_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_550_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_550_speaker_data,
				.message = s_dialogs_550_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_551_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_551_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_551_speaker_data,
				.message = s_dialogs_551_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_552_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_552_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_552_speaker_data,
				.message = s_dialogs_552_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_553_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_553_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_553_speaker_data,
				.message = s_dialogs_553_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_554_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_554_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_554_speaker_data,
				.message = s_dialogs_554_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_555_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_555_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_555_speaker_data,
				.message = s_dialogs_555_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_556_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_556_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_556_speaker_data,
				.message = s_dialogs_556_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_557_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_557_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_557_speaker_data,
				.message = s_dialogs_557_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_558_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_558_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_558_speaker_data,
				.message = s_dialogs_558_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_559_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_559_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_559_speaker_data,
				.message = s_dialogs_559_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_560_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_560_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_560_speaker_data,
				.message = s_dialogs_560_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_561_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_561_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_561_speaker_data,
				.message = s_dialogs_561_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_562_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_562_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_562_speaker_data,
				.message = s_dialogs_562_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_563_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_563_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_563_speaker_data,
				.message = s_dialogs_563_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_564_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_564_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_564_speaker_data,
				.message = s_dialogs_564_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_565_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_565_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_565_speaker_data,
				.message = s_dialogs_565_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_566_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_566_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_566_speaker_data,
				.message = s_dialogs_566_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_567_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_567_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_567_speaker_data,
				.message = s_dialogs_567_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_568_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_568_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_568_speaker_data,
				.message = s_dialogs_568_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_569_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_569_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_569_speaker_data,
				.message = s_dialogs_569_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_570_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_570_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_570_speaker_data,
				.message = s_dialogs_570_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_571_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_571_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_571_speaker_data,
				.message = s_dialogs_571_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_572_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_572_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_572_speaker_data,
				.message = s_dialogs_572_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_573_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_573_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_573_speaker_data,
				.message = s_dialogs_573_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_574_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_574_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_574_speaker_data,
				.message = s_dialogs_574_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_575_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_575_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_575_speaker_data,
				.message = s_dialogs_575_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_576_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_576_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_576_speaker_data,
				.message = s_dialogs_576_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_577_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_577_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_577_speaker_data,
				.message = s_dialogs_577_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_578_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_578_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_578_speaker_data,
				.message = s_dialogs_578_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_579_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_579_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_579_speaker_data,
				.message = s_dialogs_579_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_580_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_580_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_580_speaker_data,
				.message = s_dialogs_580_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_581_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_581_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_581_speaker_data,
				.message = s_dialogs_581_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_582_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_582_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_582_speaker_data,
				.message = s_dialogs_582_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_583_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_583_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_583_speaker_data,
				.message = s_dialogs_583_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_584_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_584_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_584_speaker_data,
				.message = s_dialogs_584_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_585_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_585_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_585_speaker_data,
				.message = s_dialogs_585_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_586_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_586_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_586_speaker_data,
				.message = s_dialogs_586_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_587_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_587_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_587_speaker_data,
				.message = s_dialogs_587_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_588_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_588_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_588_speaker_data,
				.message = s_dialogs_588_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_589_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_589_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_589_speaker_data,
				.message = s_dialogs_589_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_590_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_590_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_590_speaker_data,
				.message = s_dialogs_590_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_591_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_591_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_591_speaker_data,
				.message = s_dialogs_591_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_592_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_592_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_592_speaker_data,
				.message = s_dialogs_592_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_593_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_593_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_593_speaker_data,
				.message = s_dialogs_593_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_594_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_594_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_594_speaker_data,
				.message = s_dialogs_594_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_595_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_595_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_JUMP,
		.content =
		{
			.jump =
			{
				.id = 3
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_595_1_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_595_1_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_595_speaker_data,
				.message = s_dialogs_595_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_596_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_596_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_596_speaker_data,
				.message = s_dialogs_596_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_597_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_597_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_597_speaker_data,
				.message = s_dialogs_597_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_598_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_598_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_598_speaker_data,
				.message = s_dialogs_598_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_599_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_599_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_599_speaker_data,
				.message = s_dialogs_599_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_600_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_600_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_600_speaker_data,
				.message = s_dialogs_600_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_601_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_601_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_601_speaker_data,
				.message = s_dialogs_601_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_602_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_602_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_602_speaker_data,
				.message = s_dialogs_602_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_603_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_603_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_603_speaker_data,
				.message = s_dialogs_603_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_604_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_604_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_604_speaker_data,
				.message = s_dialogs_604_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_605_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_605_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_605_speaker_data,
				.message = s_dialogs_605_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_606_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_606_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_606_speaker_data,
				.message = s_dialogs_606_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_607_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_607_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_607_speaker_data,
				.message = s_dialogs_607_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_608_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_608_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_608_speaker_data,
				.message = s_dialogs_608_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_609_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_609_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_609_speaker_data,
				.message = s_dialogs_609_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_610_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_610_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_610_speaker_data,
				.message = s_dialogs_610_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_611_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_611_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_611_speaker_data,
				.message = s_dialogs_611_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_612_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_612_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_612_speaker_data,
				.message = s_dialogs_612_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_613_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_613_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_613_speaker_data,
				.message = s_dialogs_613_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_614_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_614_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_614_speaker_data,
				.message = s_dialogs_614_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_615_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_615_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_615_speaker_data,
				.message = s_dialogs_615_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_616_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_616_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_616_speaker_data,
				.message = s_dialogs_616_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_617_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_617_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_617_speaker_data,
				.message = s_dialogs_617_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_618_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_618_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_618_speaker_data,
				.message = s_dialogs_618_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_619_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_619_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_619_speaker_data,
				.message = s_dialogs_619_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_620_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_620_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_620_speaker_data,
				.message = s_dialogs_620_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_621_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_621_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_621_speaker_data,
				.message = s_dialogs_621_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_622_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_622_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_622_speaker_data,
				.message = s_dialogs_622_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_623_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_623_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_623_speaker_data,
				.message = s_dialogs_623_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_624_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_624_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_624_speaker_data,
				.message = s_dialogs_624_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_625_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_625_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_625_speaker_data,
				.message = s_dialogs_625_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_626_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_626_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_626_speaker_data,
				.message = s_dialogs_626_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_627_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_627_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_627_speaker_data,
				.message = s_dialogs_627_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_628_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_628_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_628_speaker_data,
				.message = s_dialogs_628_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_629_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_629_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_629_speaker_data,
				.message = s_dialogs_629_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_630_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_630_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_630_speaker_data,
				.message = s_dialogs_630_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_631_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_631_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_631_speaker_data,
				.message = s_dialogs_631_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_632_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_632_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_632_speaker_data,
				.message = s_dialogs_632_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_633_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_633_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_633_speaker_data,
				.message = s_dialogs_633_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_634_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_634_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_634_speaker_data,
				.message = s_dialogs_634_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_635_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_635_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_635_speaker_data,
				.message = s_dialogs_635_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_636_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_636_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_636_speaker_data,
				.message = s_dialogs_636_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_637_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_637_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_637_speaker_data,
				.message = s_dialogs_637_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_638_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_638_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_638_speaker_data,
				.message = s_dialogs_638_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_639_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_639_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_639_speaker_data,
				.message = s_dialogs_639_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_640_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_640_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_640_speaker_data,
				.message = s_dialogs_640_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_641_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_641_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_641_speaker_data,
				.message = s_dialogs_641_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_642_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_642_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_642_speaker_data,
				.message = s_dialogs_642_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_643_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_643_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_643_speaker_data,
				.message = s_dialogs_643_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_644_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_644_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_644_speaker_data,
				.message = s_dialogs_644_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_645_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_645_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_645_speaker_data,
				.message = s_dialogs_645_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_646_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_646_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_646_speaker_data,
				.message = s_dialogs_646_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_647_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_647_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_647_speaker_data,
				.message = s_dialogs_647_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_648_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_648_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_648_speaker_data,
				.message = s_dialogs_648_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_649_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_649_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_649_speaker_data,
				.message = s_dialogs_649_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_650_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_650_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_650_speaker_data,
				.message = s_dialogs_650_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_651_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_651_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_651_speaker_data,
				.message = s_dialogs_651_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_652_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_652_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_652_speaker_data,
				.message = s_dialogs_652_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_653_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_653_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_653_speaker_data,
				.message = s_dialogs_653_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_654_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_654_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_654_speaker_data,
				.message = s_dialogs_654_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_655_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_655_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_655_speaker_data,
				.message = s_dialogs_655_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_656_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_656_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_656_speaker_data,
				.message = s_dialogs_656_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_657_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_657_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_657_speaker_data,
				.message = s_dialogs_657_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_658_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_658_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_658_speaker_data,
				.message = s_dialogs_658_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_659_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_659_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_659_speaker_data,
				.message = s_dialogs_659_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_660_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_660_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_660_speaker_data,
				.message = s_dialogs_660_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_661_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_661_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_661_speaker_data,
				.message = s_dialogs_661_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_662_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_662_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_662_speaker_data,
				.message = s_dialogs_662_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_663_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_663_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_663_speaker_data,
				.message = s_dialogs_663_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_664_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_664_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_664_speaker_data,
				.message = s_dialogs_664_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_665_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_665_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_665_speaker_data,
				.message = s_dialogs_665_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_666_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_666_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_666_speaker_data,
				.message = s_dialogs_666_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_667_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_667_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_667_speaker_data,
				.message = s_dialogs_667_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_668_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_668_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_668_speaker_data,
				.message = s_dialogs_668_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_669_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_669_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_669_speaker_data,
				.message = s_dialogs_669_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_670_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_670_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_670_speaker_data,
				.message = s_dialogs_670_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_671_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_671_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_671_speaker_data,
				.message = s_dialogs_671_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_672_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_672_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_672_speaker_data,
				.message = s_dialogs_672_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_673_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_673_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_673_speaker_data,
				.message = s_dialogs_673_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_674_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_674_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_674_speaker_data,
				.message = s_dialogs_674_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_675_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_675_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_675_speaker_data,
				.message = s_dialogs_675_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_676_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_676_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_676_speaker_data,
				.message = s_dialogs_676_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_677_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_677_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_677_speaker_data,
				.message = s_dialogs_677_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_678_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_678_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_678_speaker_data,
				.message = s_dialogs_678_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_679_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_679_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_679_speaker_data,
				.message = s_dialogs_679_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_680_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_680_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_680_speaker_data,
				.message = s_dialogs_680_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_681_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_681_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_681_speaker_data,
				.message = s_dialogs_681_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_682_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_682_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_682_speaker_data,
				.message = s_dialogs_682_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_683_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_683_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_683_speaker_data,
				.message = s_dialogs_683_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_684_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_684_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_684_speaker_data,
				.message = s_dialogs_684_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_685_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_685_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_685_speaker_data,
				.message = s_dialogs_685_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_686_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_686_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_686_speaker_data,
				.message = s_dialogs_686_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_687_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_687_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_687_speaker_data,
				.message = s_dialogs_687_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_688_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_688_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_688_speaker_data,
				.message = s_dialogs_688_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_689_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_689_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_689_speaker_data,
				.message = s_dialogs_689_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_690_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_690_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_690_speaker_data,
				.message = s_dialogs_690_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_691_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_691_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_691_speaker_data,
				.message = s_dialogs_691_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_692_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_692_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_692_speaker_data,
				.message = s_dialogs_692_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_693_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_693_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_693_speaker_data,
				.message = s_dialogs_693_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_694_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_694_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_694_speaker_data,
				.message = s_dialogs_694_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_695_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_695_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_695_speaker_data,
				.message = s_dialogs_695_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_696_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_696_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_696_speaker_data,
				.message = s_dialogs_696_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_697_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_697_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_697_speaker_data,
				.message = s_dialogs_697_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_698_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_698_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_698_speaker_data,
				.message = s_dialogs_698_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_699_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_699_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_699_speaker_data,
				.message = s_dialogs_699_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_700_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_700_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_700_speaker_data,
				.message = s_dialogs_700_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_701_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_701_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_701_speaker_data,
				.message = s_dialogs_701_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_702_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_702_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_702_speaker_data,
				.message = s_dialogs_702_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_703_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_703_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_703_speaker_data,
				.message = s_dialogs_703_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_704_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_704_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_704_speaker_data,
				.message = s_dialogs_704_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_705_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_705_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_705_speaker_data,
				.message = s_dialogs_705_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_706_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_706_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_706_speaker_data,
				.message = s_dialogs_706_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_707_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_707_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_707_speaker_data,
				.message = s_dialogs_707_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_708_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_708_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_708_speaker_data,
				.message = s_dialogs_708_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_709_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_709_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_709_speaker_data,
				.message = s_dialogs_709_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_710_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_710_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_710_speaker_data,
				.message = s_dialogs_710_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_711_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_711_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_711_speaker_data,
				.message = s_dialogs_711_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_712_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_712_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_712_speaker_data,
				.message = s_dialogs_712_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_713_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_713_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_713_speaker_data,
				.message = s_dialogs_713_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_714_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_714_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_714_speaker_data,
				.message = s_dialogs_714_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_715_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_715_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_715_speaker_data,
				.message = s_dialogs_715_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_716_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_716_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_716_speaker_data,
				.message = s_dialogs_716_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_717_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_717_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_717_speaker_data,
				.message = s_dialogs_717_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_718_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_718_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_718_speaker_data,
				.message = s_dialogs_718_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_719_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_719_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_719_speaker_data,
				.message = s_dialogs_719_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_720_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_720_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_720_speaker_data,
				.message = s_dialogs_720_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_721_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_721_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_721_speaker_data,
				.message = s_dialogs_721_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_722_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_722_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_722_speaker_data,
				.message = s_dialogs_722_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_723_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_723_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_723_speaker_data,
				.message = s_dialogs_723_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_724_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_724_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_724_speaker_data,
				.message = s_dialogs_724_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_725_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_725_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_725_speaker_data,
				.message = s_dialogs_725_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_726_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_726_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_726_speaker_data,
				.message = s_dialogs_726_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_727_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_727_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_727_speaker_data,
				.message = s_dialogs_727_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_728_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_728_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_728_speaker_data,
				.message = s_dialogs_728_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_729_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_729_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_729_speaker_data,
				.message = s_dialogs_729_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_730_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_730_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_730_speaker_data,
				.message = s_dialogs_730_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_731_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_731_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_731_speaker_data,
				.message = s_dialogs_731_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_732_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_732_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_732_speaker_data,
				.message = s_dialogs_732_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_733_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_733_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_733_speaker_data,
				.message = s_dialogs_733_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_734_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_734_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_734_speaker_data,
				.message = s_dialogs_734_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_735_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_735_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_735_speaker_data,
				.message = s_dialogs_735_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_736_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_736_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_736_speaker_data,
				.message = s_dialogs_736_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_737_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_737_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_737_speaker_data,
				.message = s_dialogs_737_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_738_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_738_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_738_speaker_data,
				.message = s_dialogs_738_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_739_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_739_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_739_speaker_data,
				.message = s_dialogs_739_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_740_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_740_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_740_speaker_data,
				.message = s_dialogs_740_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_741_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_741_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_741_speaker_data,
				.message = s_dialogs_741_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_742_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_742_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_742_speaker_data,
				.message = s_dialogs_742_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_743_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_743_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_743_speaker_data,
				.message = s_dialogs_743_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_744_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_744_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_744_speaker_data,
				.message = s_dialogs_744_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_745_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_745_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_745_speaker_data,
				.message = s_dialogs_745_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_746_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_746_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_746_speaker_data,
				.message = s_dialogs_746_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_747_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_747_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_747_speaker_data,
				.message = s_dialogs_747_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_748_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_748_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_748_speaker_data,
				.message = s_dialogs_748_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_749_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_749_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_749_speaker_data,
				.message = s_dialogs_749_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_750_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_750_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_750_speaker_data,
				.message = s_dialogs_750_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_751_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_751_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_751_speaker_data,
				.message = s_dialogs_751_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_752_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_752_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_752_speaker_data,
				.message = s_dialogs_752_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_753_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_753_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_753_speaker_data,
				.message = s_dialogs_753_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_754_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_754_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_754_speaker_data,
				.message = s_dialogs_754_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_755_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_755_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_755_speaker_data,
				.message = s_dialogs_755_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_756_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_756_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_756_speaker_data,
				.message = s_dialogs_756_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_757_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_757_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_757_speaker_data,
				.message = s_dialogs_757_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_758_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_758_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_758_speaker_data,
				.message = s_dialogs_758_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_759_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_759_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_759_speaker_data,
				.message = s_dialogs_759_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_760_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_760_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_760_speaker_data,
				.message = s_dialogs_760_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_761_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_761_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_761_speaker_data,
				.message = s_dialogs_761_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_762_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_762_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_762_speaker_data,
				.message = s_dialogs_762_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_763_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_763_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_763_speaker_data,
				.message = s_dialogs_763_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_764_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_764_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_764_speaker_data,
				.message = s_dialogs_764_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_765_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_765_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_765_speaker_data,
				.message = s_dialogs_765_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_766_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_766_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_766_speaker_data,
				.message = s_dialogs_766_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_767_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_767_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_767_speaker_data,
				.message = s_dialogs_767_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_768_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_768_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_768_speaker_data,
				.message = s_dialogs_768_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_769_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_769_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_769_speaker_data,
				.message = s_dialogs_769_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_770_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_770_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_770_speaker_data,
				.message = s_dialogs_770_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_771_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_771_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_771_speaker_data,
				.message = s_dialogs_771_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_772_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_772_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_772_speaker_data,
				.message = s_dialogs_772_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_773_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_773_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_773_speaker_data,
				.message = s_dialogs_773_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_774_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_774_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_774_speaker_data,
				.message = s_dialogs_774_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_775_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_775_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_775_speaker_data,
				.message = s_dialogs_775_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_776_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_776_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_776_speaker_data,
				.message = s_dialogs_776_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_777_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_777_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_777_speaker_data,
				.message = s_dialogs_777_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_778_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_778_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_778_speaker_data,
				.message = s_dialogs_778_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_779_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_779_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_779_speaker_data,
				.message = s_dialogs_779_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_780_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_780_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_780_speaker_data,
				.message = s_dialogs_780_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_781_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_781_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_781_speaker_data,
				.message = s_dialogs_781_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_782_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_782_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_782_speaker_data,
				.message = s_dialogs_782_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_783_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_783_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_783_speaker_data,
				.message = s_dialogs_783_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_784_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_784_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_784_speaker_data,
				.message = s_dialogs_784_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_785_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_785_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_785_speaker_data,
				.message = s_dialogs_785_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_786_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_786_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_786_speaker_data,
				.message = s_dialogs_786_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_787_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_787_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_787_speaker_data,
				.message = s_dialogs_787_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_788_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_788_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_788_speaker_data,
				.message = s_dialogs_788_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_789_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_789_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_789_speaker_data,
				.message = s_dialogs_789_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_790_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_790_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_790_speaker_data,
				.message = s_dialogs_790_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_791_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_791_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_791_speaker_data,
				.message = s_dialogs_791_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_792_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_792_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_792_speaker_data,
				.message = s_dialogs_792_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_793_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_793_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_793_speaker_data,
				.message = s_dialogs_793_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_794_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_794_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_794_speaker_data,
				.message = s_dialogs_794_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_795_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_795_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_795_speaker_data,
				.message = s_dialogs_795_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_796_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_796_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_796_speaker_data,
				.message = s_dialogs_796_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_797_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_797_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_797_speaker_data,
				.message = s_dialogs_797_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_798_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_798_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_798_speaker_data,
				.message = s_dialogs_798_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_799_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_799_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_799_speaker_data,
				.message = s_dialogs_799_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_800_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_800_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_800_speaker_data,
				.message = s_dialogs_800_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_801_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_801_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_801_speaker_data,
				.message = s_dialogs_801_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_802_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_802_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_802_speaker_data,
				.message = s_dialogs_802_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_803_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_803_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_803_speaker_data,
				.message = s_dialogs_803_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_804_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_804_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_804_speaker_data,
				.message = s_dialogs_804_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_805_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_805_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_805_speaker_data,
				.message = s_dialogs_805_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_806_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_806_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_806_speaker_data,
				.message = s_dialogs_806_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_807_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_807_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_807_speaker_data,
				.message = s_dialogs_807_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_808_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_808_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_808_speaker_data,
				.message = s_dialogs_808_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_809_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_809_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_809_speaker_data,
				.message = s_dialogs_809_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_810_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_810_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_810_speaker_data,
				.message = s_dialogs_810_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_811_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_811_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_811_speaker_data,
				.message = s_dialogs_811_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_812_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_812_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_812_speaker_data,
				.message = s_dialogs_812_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_813_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_813_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_813_speaker_data,
				.message = s_dialogs_813_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_814_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_814_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_814_speaker_data,
				.message = s_dialogs_814_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_815_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_815_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_815_speaker_data,
				.message = s_dialogs_815_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_816_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_816_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_816_speaker_data,
				.message = s_dialogs_816_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_817_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_817_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_817_speaker_data,
				.message = s_dialogs_817_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_818_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_818_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_818_speaker_data,
				.message = s_dialogs_818_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_819_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_819_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_819_speaker_data,
				.message = s_dialogs_819_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_820_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_820_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_820_speaker_data,
				.message = s_dialogs_820_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_821_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_821_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_821_speaker_data,
				.message = s_dialogs_821_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_822_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_822_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_822_speaker_data,
				.message = s_dialogs_822_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_823_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_823_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_823_speaker_data,
				.message = s_dialogs_823_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_824_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_824_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_824_speaker_data,
				.message = s_dialogs_824_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_825_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_825_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_825_speaker_data,
				.message = s_dialogs_825_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_826_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_826_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_826_speaker_data,
				.message = s_dialogs_826_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_827_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_827_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_827_speaker_data,
				.message = s_dialogs_827_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_828_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_828_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_828_speaker_data,
				.message = s_dialogs_828_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_829_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_829_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_829_speaker_data,
				.message = s_dialogs_829_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_830_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_830_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_830_speaker_data,
				.message = s_dialogs_830_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_831_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_831_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_831_speaker_data,
				.message = s_dialogs_831_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_832_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_832_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_832_speaker_data,
				.message = s_dialogs_832_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_833_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_833_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_833_speaker_data,
				.message = s_dialogs_833_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_834_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_834_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_834_speaker_data,
				.message = s_dialogs_834_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_835_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_835_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_835_speaker_data,
				.message = s_dialogs_835_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_836_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_836_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_836_speaker_data,
				.message = s_dialogs_836_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_837_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_837_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_837_speaker_data,
				.message = s_dialogs_837_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_838_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_838_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_838_speaker_data,
				.message = s_dialogs_838_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_839_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_839_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_839_speaker_data,
				.message = s_dialogs_839_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_840_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_840_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_840_speaker_data,
				.message = s_dialogs_840_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_841_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_841_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_841_speaker_data,
				.message = s_dialogs_841_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_842_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_842_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_842_speaker_data,
				.message = s_dialogs_842_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_843_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_843_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_843_speaker_data,
				.message = s_dialogs_843_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_844_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_844_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_844_speaker_data,
				.message = s_dialogs_844_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_845_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_845_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_845_speaker_data,
				.message = s_dialogs_845_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_846_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_846_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_846_speaker_data,
				.message = s_dialogs_846_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_847_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_847_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_847_speaker_data,
				.message = s_dialogs_847_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_848_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_848_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_848_speaker_data,
				.message = s_dialogs_848_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_849_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_849_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_849_speaker_data,
				.message = s_dialogs_849_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_850_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_850_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_850_speaker_data,
				.message = s_dialogs_850_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_851_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_851_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_851_speaker_data,
				.message = s_dialogs_851_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_852_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_852_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_852_speaker_data,
				.message = s_dialogs_852_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_853_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_853_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_853_speaker_data,
				.message = s_dialogs_853_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_854_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_854_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_854_speaker_data,
				.message = s_dialogs_854_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_855_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_855_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_855_speaker_data,
				.message = s_dialogs_855_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_856_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_856_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_856_speaker_data,
				.message = s_dialogs_856_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_857_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_857_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_857_speaker_data,
				.message = s_dialogs_857_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_858_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_858_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_858_speaker_data,
				.message = s_dialogs_858_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_859_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_859_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_859_speaker_data,
				.message = s_dialogs_859_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_860_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_860_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_860_speaker_data,
				.message = s_dialogs_860_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_861_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_861_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_861_speaker_data,
				.message = s_dialogs_861_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_862_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_862_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_862_speaker_data,
				.message = s_dialogs_862_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_863_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_863_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_863_speaker_data,
				.message = s_dialogs_863_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_864_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_864_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_864_speaker_data,
				.message = s_dialogs_864_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_865_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_865_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_865_speaker_data,
				.message = s_dialogs_865_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_866_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_866_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_866_speaker_data,
				.message = s_dialogs_866_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_867_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_867_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_867_speaker_data,
				.message = s_dialogs_867_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_868_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_868_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_868_speaker_data,
				.message = s_dialogs_868_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_869_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_869_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_869_speaker_data,
				.message = s_dialogs_869_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_870_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_870_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_870_speaker_data,
				.message = s_dialogs_870_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_871_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_871_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_871_speaker_data,
				.message = s_dialogs_871_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_872_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_872_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_872_speaker_data,
				.message = s_dialogs_872_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_873_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_873_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_873_speaker_data,
				.message = s_dialogs_873_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_874_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_874_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_874_speaker_data,
				.message = s_dialogs_874_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_875_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_875_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_875_speaker_data,
				.message = s_dialogs_875_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_876_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_876_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_876_speaker_data,
				.message = s_dialogs_876_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_877_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_877_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_877_speaker_data,
				.message = s_dialogs_877_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_878_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_878_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_878_speaker_data,
				.message = s_dialogs_878_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_879_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_879_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_879_speaker_data,
				.message = s_dialogs_879_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_880_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_880_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_880_speaker_data,
				.message = s_dialogs_880_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_881_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_881_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_881_speaker_data,
				.message = s_dialogs_881_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_882_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_882_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_882_speaker_data,
				.message = s_dialogs_882_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_883_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_883_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_883_speaker_data,
				.message = s_dialogs_883_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_884_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_884_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_884_speaker_data,
				.message = s_dialogs_884_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_885_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_885_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_885_speaker_data,
				.message = s_dialogs_885_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_886_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_886_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_886_speaker_data,
				.message = s_dialogs_886_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_887_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_887_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_887_speaker_data,
				.message = s_dialogs_887_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_888_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_888_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_888_speaker_data,
				.message = s_dialogs_888_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_889_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_889_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_889_speaker_data,
				.message = s_dialogs_889_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_890_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_890_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_890_speaker_data,
				.message = s_dialogs_890_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_891_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_891_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_891_speaker_data,
				.message = s_dialogs_891_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_892_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_892_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_892_speaker_data,
				.message = s_dialogs_892_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_893_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_893_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_893_speaker_data,
				.message = s_dialogs_893_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_894_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_894_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_894_speaker_data,
				.message = s_dialogs_894_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_895_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_895_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_895_speaker_data,
				.message = s_dialogs_895_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_896_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_896_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_896_speaker_data,
				.message = s_dialogs_896_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_897_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_897_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_897_speaker_data,
				.message = s_dialogs_897_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_898_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_898_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_898_speaker_data,
				.message = s_dialogs_898_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_899_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_899_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_899_speaker_data,
				.message = s_dialogs_899_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_900_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_900_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_900_speaker_data,
				.message = s_dialogs_900_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_901_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_901_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_901_speaker_data,
				.message = s_dialogs_901_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_902_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_902_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_902_speaker_data,
				.message = s_dialogs_902_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_903_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_903_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_903_speaker_data,
				.message = s_dialogs_903_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_904_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_904_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_904_speaker_data,
				.message = s_dialogs_904_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_905_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_905_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_905_speaker_data,
				.message = s_dialogs_905_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_906_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_906_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_906_speaker_data,
				.message = s_dialogs_906_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_907_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_907_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_907_speaker_data,
				.message = s_dialogs_907_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_908_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_908_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_908_speaker_data,
				.message = s_dialogs_908_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_909_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_909_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_909_speaker_data,
				.message = s_dialogs_909_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_910_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_910_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_910_speaker_data,
				.message = s_dialogs_910_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_911_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_911_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_911_speaker_data,
				.message = s_dialogs_911_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_912_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_912_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_912_speaker_data,
				.message = s_dialogs_912_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_913_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_913_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_913_speaker_data,
				.message = s_dialogs_913_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_914_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_914_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_914_speaker_data,
				.message = s_dialogs_914_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_915_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_915_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_915_speaker_data,
				.message = s_dialogs_915_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_916_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_916_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_916_speaker_data,
				.message = s_dialogs_916_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_917_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_917_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_917_speaker_data,
				.message = s_dialogs_917_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_918_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_918_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_918_speaker_data,
				.message = s_dialogs_918_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_919_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_919_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_919_speaker_data,
				.message = s_dialogs_919_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_920_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_920_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_920_speaker_data,
				.message = s_dialogs_920_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_921_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_921_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_921_speaker_data,
				.message = s_dialogs_921_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_922_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_922_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_922_speaker_data,
				.message = s_dialogs_922_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_923_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_923_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_923_speaker_data,
				.message = s_dialogs_923_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_924_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_924_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_924_speaker_data,
				.message = s_dialogs_924_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_925_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_925_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_925_speaker_data,
				.message = s_dialogs_925_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_926_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_926_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_926_speaker_data,
				.message = s_dialogs_926_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_927_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_927_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_JUMP,
		.content =
		{
			.jump =
			{
				.id = 4
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_927_1_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_927_1_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_927_speaker_data,
				.message = s_dialogs_927_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_928_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_928_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_928_speaker_data,
				.message = s_dialogs_928_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_929_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_929_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_929_speaker_data,
				.message = s_dialogs_929_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_930_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_930_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_930_speaker_data,
				.message = s_dialogs_930_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_931_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_931_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_931_speaker_data,
				.message = s_dialogs_931_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_932_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_932_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_932_speaker_data,
				.message = s_dialogs_932_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_933_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_933_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_933_speaker_data,
				.message = s_dialogs_933_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_934_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_934_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_934_speaker_data,
				.message = s_dialogs_934_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_935_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_935_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_935_speaker_data,
				.message = s_dialogs_935_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_936_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_936_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_936_speaker_data,
				.message = s_dialogs_936_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_937_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_937_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_937_speaker_data,
				.message = s_dialogs_937_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_938_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_938_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_938_speaker_data,
				.message = s_dialogs_938_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_939_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_939_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_939_speaker_data,
				.message = s_dialogs_939_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_940_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_940_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_940_speaker_data,
				.message = s_dialogs_940_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_941_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_941_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_941_speaker_data,
				.message = s_dialogs_941_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_942_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_942_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_942_speaker_data,
				.message = s_dialogs_942_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_943_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_943_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_943_speaker_data,
				.message = s_dialogs_943_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_944_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_944_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_944_speaker_data,
				.message = s_dialogs_944_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_945_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_945_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_945_speaker_data,
				.message = s_dialogs_945_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_946_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_946_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_946_speaker_data,
				.message = s_dialogs_946_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_947_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_947_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_947_speaker_data,
				.message = s_dialogs_947_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_948_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_948_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_948_speaker_data,
				.message = s_dialogs_948_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_949_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_949_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_949_speaker_data,
				.message = s_dialogs_949_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_950_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_950_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_950_speaker_data,
				.message = s_dialogs_950_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_951_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_951_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_951_speaker_data,
				.message = s_dialogs_951_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_952_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_952_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_952_speaker_data,
				.message = s_dialogs_952_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_953_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_953_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_953_speaker_data,
				.message = s_dialogs_953_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_954_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_954_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_954_speaker_data,
				.message = s_dialogs_954_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_955_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_955_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_955_speaker_data,
				.message = s_dialogs_955_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_956_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_956_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_956_speaker_data,
				.message = s_dialogs_956_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_957_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_957_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_957_speaker_data,
				.message = s_dialogs_957_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_958_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_958_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_958_speaker_data,
				.message = s_dialogs_958_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_959_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_959_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_959_speaker_data,
				.message = s_dialogs_959_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_960_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_960_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_960_speaker_data,
				.message = s_dialogs_960_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_961_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_961_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_961_speaker_data,
				.message = s_dialogs_961_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_962_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_962_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_962_speaker_data,
				.message = s_dialogs_962_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_963_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_963_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_963_speaker_data,
				.message = s_dialogs_963_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_964_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_964_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_964_speaker_data,
				.message = s_dialogs_964_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_965_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_965_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_965_speaker_data,
				.message = s_dialogs_965_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_966_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_966_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_966_speaker_data,
				.message = s_dialogs_966_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_967_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_967_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_967_speaker_data,
				.message = s_dialogs_967_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_968_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_968_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_968_speaker_data,
				.message = s_dialogs_968_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_969_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_969_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_969_speaker_data,
				.message = s_dialogs_969_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_970_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_970_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_970_speaker_data,
				.message = s_dialogs_970_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_971_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_971_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_971_speaker_data,
				.message = s_dialogs_971_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_972_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_972_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_972_speaker_data,
				.message = s_dialogs_972_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_973_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_973_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_973_speaker_data,
				.message = s_dialogs_973_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_974_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_974_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_974_speaker_data,
				.message = s_dialogs_974_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_975_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_975_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_975_speaker_data,
				.message = s_dialogs_975_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_976_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_976_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_976_speaker_data,
				.message = s_dialogs_976_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_977_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_977_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_977_speaker_data,
				.message = s_dialogs_977_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_978_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_978_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_978_speaker_data,
				.message = s_dialogs_978_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_979_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_979_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_979_speaker_data,
				.message = s_dialogs_979_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_980_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_980_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_980_speaker_data,
				.message = s_dialogs_980_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_981_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_981_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_981_speaker_data,
				.message = s_dialogs_981_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_982_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_982_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_982_speaker_data,
				.message = s_dialogs_982_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_983_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_983_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_983_speaker_data,
				.message = s_dialogs_983_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_984_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_984_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_984_speaker_data,
				.message = s_dialogs_984_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_985_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_985_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_985_speaker_data,
				.message = s_dialogs_985_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_986_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_986_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_986_speaker_data,
				.message = s_dialogs_986_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_987_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_987_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_987_speaker_data,
				.message = s_dialogs_987_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_988_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_988_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_988_speaker_data,
				.message = s_dialogs_988_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_989_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_989_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_989_speaker_data,
				.message = s_dialogs_989_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_990_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_990_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_990_speaker_data,
				.message = s_dialogs_990_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_991_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_991_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_991_speaker_data,
				.message = s_dialogs_991_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_992_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_992_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_992_speaker_data,
				.message = s_dialogs_992_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_993_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_993_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_993_speaker_data,
				.message = s_dialogs_993_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_994_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_994_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_994_speaker_data,
				.message = s_dialogs_994_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_995_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_995_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_995_speaker_data,
				.message = s_dialogs_995_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_996_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_996_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_996_speaker_data,
				.message = s_dialogs_996_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_997_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_997_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_997_speaker_data,
				.message = s_dialogs_997_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_998_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_998_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_998_speaker_data,
				.message = s_dialogs_998_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_999_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_999_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_999_speaker_data,
				.message = s_dialogs_999_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1000_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1000_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1000_speaker_data,
				.message = s_dialogs_1000_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1001_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1001_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1001_speaker_data,
				.message = s_dialogs_1001_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1002_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1002_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1002_speaker_data,
				.message = s_dialogs_1002_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1003_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1003_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1003_speaker_data,
				.message = s_dialogs_1003_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1004_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1004_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1004_speaker_data,
				.message = s_dialogs_1004_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1005_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1005_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1005_speaker_data,
				.message = s_dialogs_1005_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1006_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1006_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1006_speaker_data,
				.message = s_dialogs_1006_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1007_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1007_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1007_speaker_data,
				.message = s_dialogs_1007_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1008_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1008_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1008_speaker_data,
				.message = s_dialogs_1008_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1009_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1009_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1009_speaker_data,
				.message = s_dialogs_1009_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1010_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1010_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1010_speaker_data,
				.message = s_dialogs_1010_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1011_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1011_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1011_speaker_data,
				.message = s_dialogs_1011_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1012_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1012_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1012_speaker_data,
				.message = s_dialogs_1012_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1013_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1013_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1013_speaker_data,
				.message = s_dialogs_1013_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1014_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1014_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1014_speaker_data,
				.message = s_dialogs_1014_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1015_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1015_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1015_speaker_data,
				.message = s_dialogs_1015_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1016_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1016_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1016_speaker_data,
				.message = s_dialogs_1016_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1017_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1017_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1017_speaker_data,
				.message = s_dialogs_1017_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1018_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1018_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1018_speaker_data,
				.message = s_dialogs_1018_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1019_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1019_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1019_speaker_data,
				.message = s_dialogs_1019_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1020_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1020_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1020_speaker_data,
				.message = s_dialogs_1020_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1021_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1021_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1021_speaker_data,
				.message = s_dialogs_1021_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1022_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1022_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1022_speaker_data,
				.message = s_dialogs_1022_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1023_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1023_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1023_speaker_data,
				.message = s_dialogs_1023_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1024_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1024_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1024_speaker_data,
				.message = s_dialogs_1024_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1025_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1025_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1025_speaker_data,
				.message = s_dialogs_1025_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1026_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1026_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1026_speaker_data,
				.message = s_dialogs_1026_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1027_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1027_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1027_speaker_data,
				.message = s_dialogs_1027_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1028_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1028_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1028_speaker_data,
				.message = s_dialogs_1028_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1029_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1029_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1029_speaker_data,
				.message = s_dialogs_1029_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1030_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1030_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1030_speaker_data,
				.message = s_dialogs_1030_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1031_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1031_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1031_speaker_data,
				.message = s_dialogs_1031_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1032_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1032_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1032_speaker_data,
				.message = s_dialogs_1032_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1033_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1033_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1033_speaker_data,
				.message = s_dialogs_1033_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1034_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1034_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1034_speaker_data,
				.message = s_dialogs_1034_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1035_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1035_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1035_speaker_data,
				.message = s_dialogs_1035_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1036_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1036_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1036_speaker_data,
				.message = s_dialogs_1036_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1037_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1037_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1037_speaker_data,
				.message = s_dialogs_1037_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1038_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1038_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1038_speaker_data,
				.message = s_dialogs_1038_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1039_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1039_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1039_speaker_data,
				.message = s_dialogs_1039_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1040_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1040_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1040_speaker_data,
				.message = s_dialogs_1040_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1041_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1041_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1041_speaker_data,
				.message = s_dialogs_1041_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1042_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1042_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1042_speaker_data,
				.message = s_dialogs_1042_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1043_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1043_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1043_speaker_data,
				.message = s_dialogs_1043_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1044_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1044_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1044_speaker_data,
				.message = s_dialogs_1044_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1045_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1045_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1045_speaker_data,
				.message = s_dialogs_1045_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1046_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1046_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1046_speaker_data,
				.message = s_dialogs_1046_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1047_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1047_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1047_speaker_data,
				.message = s_dialogs_1047_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1048_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1048_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1048_speaker_data,
				.message = s_dialogs_1048_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1049_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1049_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1049_speaker_data,
				.message = s_dialogs_1049_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1050_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1050_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1050_speaker_data,
				.message = s_dialogs_1050_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1051_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1051_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1051_speaker_data,
				.message = s_dialogs_1051_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1052_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1052_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1052_speaker_data,
				.message = s_dialogs_1052_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1053_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1053_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1053_speaker_data,
				.message = s_dialogs_1053_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1054_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1054_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1054_speaker_data,
				.message = s_dialogs_1054_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1055_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1055_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1055_speaker_data,
				.message = s_dialogs_1055_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1056_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1056_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1056_speaker_data,
				.message = s_dialogs_1056_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1057_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1057_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1057_speaker_data,
				.message = s_dialogs_1057_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1058_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1058_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1058_speaker_data,
				.message = s_dialogs_1058_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1059_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1059_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1059_speaker_data,
				.message = s_dialogs_1059_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1060_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1060_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1060_speaker_data,
				.message = s_dialogs_1060_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1061_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1061_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1061_speaker_data,
				.message = s_dialogs_1061_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1062_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1062_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1062_speaker_data,
				.message = s_dialogs_1062_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1063_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1063_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1063_speaker_data,
				.message = s_dialogs_1063_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1064_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1064_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1064_speaker_data,
				.message = s_dialogs_1064_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1065_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1065_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1065_speaker_data,
				.message = s_dialogs_1065_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1066_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1066_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1066_speaker_data,
				.message = s_dialogs_1066_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1067_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1067_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1067_speaker_data,
				.message = s_dialogs_1067_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1068_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1068_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1068_speaker_data,
				.message = s_dialogs_1068_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1069_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1069_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1069_speaker_data,
				.message = s_dialogs_1069_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1070_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1070_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1070_speaker_data,
				.message = s_dialogs_1070_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1071_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1071_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1071_speaker_data,
				.message = s_dialogs_1071_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1072_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1072_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1072_speaker_data,
				.message = s_dialogs_1072_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1073_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1073_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1073_speaker_data,
				.message = s_dialogs_1073_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1074_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1074_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1074_speaker_data,
				.message = s_dialogs_1074_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1075_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1075_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1075_speaker_data,
				.message = s_dialogs_1075_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1076_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1076_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1076_speaker_data,
				.message = s_dialogs_1076_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1077_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1077_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1077_speaker_data,
				.message = s_dialogs_1077_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1078_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1078_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1078_speaker_data,
				.message = s_dialogs_1078_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1079_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1079_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1079_speaker_data,
				.message = s_dialogs_1079_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1080_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1080_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1080_speaker_data,
				.message = s_dialogs_1080_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1081_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1081_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1081_speaker_data,
				.message = s_dialogs_1081_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1082_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1082_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1082_speaker_data,
				.message = s_dialogs_1082_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1083_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1083_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1083_speaker_data,
				.message = s_dialogs_1083_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1084_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1084_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1084_speaker_data,
				.message = s_dialogs_1084_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1085_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1085_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1085_speaker_data,
				.message = s_dialogs_1085_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1086_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1086_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1086_speaker_data,
				.message = s_dialogs_1086_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1087_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1087_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1087_speaker_data,
				.message = s_dialogs_1087_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1088_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1088_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1088_speaker_data,
				.message = s_dialogs_1088_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1089_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1089_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1089_speaker_data,
				.message = s_dialogs_1089_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1090_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1090_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1090_speaker_data,
				.message = s_dialogs_1090_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1091_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1091_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1091_speaker_data,
				.message = s_dialogs_1091_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1092_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1092_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1092_speaker_data,
				.message = s_dialogs_1092_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1093_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1093_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1093_speaker_data,
				.message = s_dialogs_1093_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1094_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1094_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1094_speaker_data,
				.message = s_dialogs_1094_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1095_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1095_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1095_speaker_data,
				.message = s_dialogs_1095_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1096_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1096_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1096_speaker_data,
				.message = s_dialogs_1096_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1097_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1097_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1097_speaker_data,
				.message = s_dialogs_1097_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1098_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1098_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1098_speaker_data,
				.message = s_dialogs_1098_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1099_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1099_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1099_speaker_data,
				.message = s_dialogs_1099_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1100_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1100_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1100_speaker_data,
				.message = s_dialogs_1100_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1101_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1101_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1101_speaker_data,
				.message = s_dialogs_1101_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1102_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1102_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1102_speaker_data,
				.message = s_dialogs_1102_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1103_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1103_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1103_speaker_data,
				.message = s_dialogs_1103_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1104_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1104_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1104_speaker_data,
				.message = s_dialogs_1104_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1105_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1105_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1105_speaker_data,
				.message = s_dialogs_1105_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1106_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1106_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1106_speaker_data,
				.message = s_dialogs_1106_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1107_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1107_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1107_speaker_data,
				.message = s_dialogs_1107_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1108_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1108_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1108_speaker_data,
				.message = s_dialogs_1108_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1109_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1109_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1109_speaker_data,
				.message = s_dialogs_1109_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1110_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1110_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1110_speaker_data,
				.message = s_dialogs_1110_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1111_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1111_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1111_speaker_data,
				.message = s_dialogs_1111_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1112_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1112_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1112_speaker_data,
				.message = s_dialogs_1112_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1113_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1113_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1113_speaker_data,
				.message = s_dialogs_1113_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1114_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1114_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1114_speaker_data,
				.message = s_dialogs_1114_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1115_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1115_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1115_speaker_data,
				.message = s_dialogs_1115_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1116_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1116_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1116_speaker_data,
				.message = s_dialogs_1116_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1117_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1117_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1117_speaker_data,
				.message = s_dialogs_1117_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1118_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1118_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1118_speaker_data,
				.message = s_dialogs_1118_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1119_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1119_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1119_speaker_data,
				.message = s_dialogs_1119_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1120_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1120_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1120_speaker_data,
				.message = s_dialogs_1120_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1121_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1121_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1121_speaker_data,
				.message = s_dialogs_1121_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1122_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1122_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1122_speaker_data,
				.message = s_dialogs_1122_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1123_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1123_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1123_speaker_data,
				.message = s_dialogs_1123_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1124_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1124_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1124_speaker_data,
				.message = s_dialogs_1124_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1125_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1125_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1125_speaker_data,
				.message = s_dialogs_1125_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1126_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1126_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1126_speaker_data,
				.message = s_dialogs_1126_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1127_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1127_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1127_speaker_data,
				.message = s_dialogs_1127_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1128_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1128_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1128_speaker_data,
				.message = s_dialogs_1128_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1129_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1129_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1129_speaker_data,
				.message = s_dialogs_1129_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1130_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1130_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1130_speaker_data,
				.message = s_dialogs_1130_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1131_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1131_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1131_speaker_data,
				.message = s_dialogs_1131_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1132_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1132_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1132_speaker_data,
				.message = s_dialogs_1132_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1133_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1133_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1133_speaker_data,
				.message = s_dialogs_1133_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1134_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1134_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1134_speaker_data,
				.message = s_dialogs_1134_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1135_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1135_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1135_speaker_data,
				.message = s_dialogs_1135_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1136_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1136_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1136_speaker_data,
				.message = s_dialogs_1136_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1137_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1137_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1137_speaker_data,
				.message = s_dialogs_1137_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1138_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1138_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1138_speaker_data,
				.message = s_dialogs_1138_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1139_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1139_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1139_speaker_data,
				.message = s_dialogs_1139_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1140_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1140_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1140_speaker_data,
				.message = s_dialogs_1140_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1141_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1141_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1141_speaker_data,
				.message = s_dialogs_1141_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1142_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1142_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1142_speaker_data,
				.message = s_dialogs_1142_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1143_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1143_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1143_speaker_data,
				.message = s_dialogs_1143_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1144_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1144_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1144_speaker_data,
				.message = s_dialogs_1144_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1145_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1145_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1145_speaker_data,
				.message = s_dialogs_1145_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1146_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1146_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1146_speaker_data,
				.message = s_dialogs_1146_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1147_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1147_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1147_speaker_data,
				.message = s_dialogs_1147_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1148_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1148_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1148_speaker_data,
				.message = s_dialogs_1148_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1149_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1149_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1149_speaker_data,
				.message = s_dialogs_1149_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1150_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1150_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1150_speaker_data,
				.message = s_dialogs_1150_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1151_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1151_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1151_speaker_data,
				.message = s_dialogs_1151_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1152_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1152_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1152_speaker_data,
				.message = s_dialogs_1152_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1153_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1153_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1153_speaker_data,
				.message = s_dialogs_1153_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1154_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1154_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1154_speaker_data,
				.message = s_dialogs_1154_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1155_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1155_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1155_speaker_data,
				.message = s_dialogs_1155_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1156_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1156_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1156_speaker_data,
				.message = s_dialogs_1156_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1157_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1157_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1157_speaker_data,
				.message = s_dialogs_1157_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1158_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1158_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1158_speaker_data,
				.message = s_dialogs_1158_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1159_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1159_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1159_speaker_data,
				.message = s_dialogs_1159_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1160_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1160_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1160_speaker_data,
				.message = s_dialogs_1160_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1161_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1161_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1161_speaker_data,
				.message = s_dialogs_1161_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1162_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1162_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1162_speaker_data,
				.message = s_dialogs_1162_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1163_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1163_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1163_speaker_data,
				.message = s_dialogs_1163_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1164_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1164_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1164_speaker_data,
				.message = s_dialogs_1164_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1165_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1165_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1165_speaker_data,
				.message = s_dialogs_1165_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1166_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1166_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1166_speaker_data,
				.message = s_dialogs_1166_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1167_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1167_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1167_speaker_data,
				.message = s_dialogs_1167_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1168_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1168_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1168_speaker_data,
				.message = s_dialogs_1168_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1169_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1169_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1169_speaker_data,
				.message = s_dialogs_1169_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1170_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1170_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1170_speaker_data,
				.message = s_dialogs_1170_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1171_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1171_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1171_speaker_data,
				.message = s_dialogs_1171_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1172_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1172_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1172_speaker_data,
				.message = s_dialogs_1172_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1173_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1173_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1173_speaker_data,
				.message = s_dialogs_1173_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1174_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1174_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1174_speaker_data,
				.message = s_dialogs_1174_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1175_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1175_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1175_speaker_data,
				.message = s_dialogs_1175_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1176_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1176_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1176_speaker_data,
				.message = s_dialogs_1176_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1177_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1177_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1177_speaker_data,
				.message = s_dialogs_1177_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1178_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1178_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1178_speaker_data,
				.message = s_dialogs_1178_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1179_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1179_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1179_speaker_data,
				.message = s_dialogs_1179_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1180_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1180_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1180_speaker_data,
				.message = s_dialogs_1180_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1181_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1181_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1181_speaker_data,
				.message = s_dialogs_1181_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1182_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1182_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1182_speaker_data,
				.message = s_dialogs_1182_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1183_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1183_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1183_speaker_data,
				.message = s_dialogs_1183_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1184_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1184_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1184_speaker_data,
				.message = s_dialogs_1184_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1185_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1185_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1185_speaker_data,
				.message = s_dialogs_1185_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1186_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1186_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1186_speaker_data,
				.message = s_dialogs_1186_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1187_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1187_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1187_speaker_data,
				.message = s_dialogs_1187_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1188_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1188_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1188_speaker_data,
				.message = s_dialogs_1188_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1189_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1189_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1189_speaker_data,
				.message = s_dialogs_1189_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1190_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1190_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1190_speaker_data,
				.message = s_dialogs_1190_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1191_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1191_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1191_speaker_data,
				.message = s_dialogs_1191_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1192_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1192_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1192_speaker_data,
				.message = s_dialogs_1192_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1193_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1193_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1193_speaker_data,
				.message = s_dialogs_1193_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1194_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1194_0_data)
				}
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_DIALOG,
		.content =
		{
			.dialog =
			{
				.speaker = s_dialogs_1194_speaker_data,
				.message = s_dialogs_1194_message_data
			}
		}
	},
	{
		.type = RGT_RGO_SCRIPT_COMMAND_SECTION,
		.content =
		{
			.command_section =
			{
				.commands =
				{
					.elems = s_commands_1195_0_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_1195_0_data)
				}
			}
		}
	},
};

rgt_rgo_script_element_array g_script_1_elements =
{
	.elems = s_script_1_elements_data,
	.length = RGT_C_ARRAY_SIZE(s_script_1_elements_data)
};
#endif