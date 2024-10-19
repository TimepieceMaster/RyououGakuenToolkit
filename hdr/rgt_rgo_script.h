#ifndef RGT_RGO_SCRIPT_H
#define RGT_RGO_SCRIPT_H

#define RGT_RGO_SCRIPT_MAX_CHOICES 7

typedef struct _rgt_rgo_script_dialog
{
	u32 offset;
	u16 id;
	rgt_u16_array speaker_glyph_indices;
	rgt_u16_array message_glyph_indices;
} rgt_rgo_script_dialog;

RGT_DECLARE_ARRAY_TYPE(rgt_rgo_script_dialog, rgt_rgo_script_dialog_array)

typedef struct _rgt_rgo_script_choice
{
	u32 offset;
	rgt_u16_array glyph_indices;
} rgt_rgo_script_choice;

typedef struct _rgt_rgo_script_choice_group
{
	u32 jump_id;
	rgt_rgo_script_choice choices[RGT_RGO_SCRIPT_MAX_CHOICES];
} rgt_rgo_script_choice_group;

RGT_DECLARE_ARRAY_TYPE
(
	rgt_rgo_script_choice_group, rgt_rgo_script_choice_group_array
)

typedef struct _rgt_rgo_script_command_section
{
	u32 offset;
	rgt_u16_array commands; 
} rgt_rgo_script_command_section;

RGT_DECLARE_ARRAY_TYPE
(
	rgt_rgo_script_command_section, rgt_rgo_script_command_section_array
)

typedef struct _rgt_rgo_script
{
	u16 magic;
	u32 dialog_offset_table_offset;
	u32 choice_group_offset_table_offset;
	rgt_rgo_script_dialog_array dialogs;
	rgt_rgo_script_choice_group_array choice_groups;
	rgt_u32_array jumps;
	rgt_rgo_script_command_section_array command_sections;
} rgt_rgo_script;

typedef enum _rgt_rgo_script_element_type
{
	RGT_RGO_SCRIPT_MAGIC,
	RGT_RGO_SCRIPT_DIALOG,
	RGT_RGO_SCRIPT_CHOICE,
	RGT_RGO_SCRIPT_CHOICE_GROUP,
	RGT_RGO_SCRIPT_COMMAND_SECTION,
	RGT_RGO_SCRIPT_JUMP
} rgt_rgo_script_element_type;

typedef struct _rgt_rgo_script_element_magic
{
	u16 value;
} rgt_rgo_script_element_magic;

typedef struct _rgt_rgo_script_element_dialog
{
	char *speaker;
	char *message;
} rgt_rgo_script_element_dialog;

typedef struct _rgt_rgo_script_element_choice
{
	const char *text;
} rgt_rgo_script_element_choice;

typedef struct _rgt_rgo_script_element_choice_group
{
	u32 jump_id;
} rgt_rgo_script_element_choice_group;

typedef struct _rgt_rgo_script_element_command_section
{
	rgt_u16_array commands;
} rgt_rgo_script_element_command_section;

typedef struct _rgt_rgo_script_element_jump
{
	u32 id;
	u32 offset;
} rgt_rgo_script_element_jump;

typedef union _rgt_rgo_script_element_content
{
	rgt_rgo_script_element_magic magic;
	rgt_rgo_script_element_dialog dialog;
	rgt_rgo_script_element_choice choice;
	rgt_rgo_script_element_choice_group choice_group;
	rgt_rgo_script_element_command_section command_section;
	rgt_rgo_script_element_jump jump;
} rgt_rgo_script_element_content;

typedef struct _rgt_rgo_script_element
{
	rgt_rgo_script_element_type type;
	rgt_rgo_script_element_content content;
} rgt_rgo_script_element;

RGT_DECLARE_ARRAY_TYPE(rgt_rgo_script_element, rgt_rgo_script_element_array)

rgt_result
rgt_parse_rgo_script
(
	rgt_arena *arena, rgt_u8_array in, rgt_rgo_script *create
);

rgt_result
rgt_build_rgo_script
(
	rgt_arena *arena, rgt_rgo_script script, rgt_u8_array *create
);

rgt_result
rgt_rgo_script_to_headers
(
	rgt_arena *arena, rgt_rgo_script script, u64 id,
	rgt_utf8_string_array glyph_strings,
	const char *out_path_structure, const char *out_path_commands, 
	const char *out_path_text, bool no_text
);

rgt_result
rgt_rgo_script_elements_to_script
(
	rgt_arena *arena, rgt_rgo_script_element_array elements,
	rgt_utf8_string_array glyph_strings, rgt_rgo_script *create
);

#endif