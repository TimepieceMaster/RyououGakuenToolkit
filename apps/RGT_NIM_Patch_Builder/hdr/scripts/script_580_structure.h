#ifndef RGT_RGO_SCRIPT_580_STRUCTURE_H
#define RGT_RGO_SCRIPT_580_STRUCTURE_H

#include "script_580_commands.h"
#include "script_580_text.h"
#include "ryouou_gakuen_toolkit.h"

static rgt_rgo_script_element s_script_580_elements_data[] =
{
	{
		.type = RGT_RGO_SCRIPT_MAGIC,
		.content =
		{
			.magic =
			{
				.value = 0x58FD
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
					.elems = s_commands_0_1_data,
					.length = RGT_C_ARRAY_SIZE(s_commands_0_1_data)
				}
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
};

rgt_rgo_script_element_array g_script_580_elements =
{
	.elems = s_script_580_elements_data,
	.length = RGT_C_ARRAY_SIZE(s_script_580_elements_data)
};
#endif