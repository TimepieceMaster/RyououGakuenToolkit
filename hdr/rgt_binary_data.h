#ifndef RGT_BINARY_DATA_H
#define RGT_BINARY_DATA_H

#include "rgt_result.h"
#include "rgt_sized_int.h"
#include "rgt_array.h"

rgt_result
rgt_read_bytes(rgt_u8_array data, u64 *pos, u64 size, void *out);

rgt_result 
rgt_read_be_16(rgt_u8_array data, u64 *pos, u16 *out);

rgt_result 
rgt_read_be_32(rgt_u8_array data, u64 *pos, u32 *out);

rgt_result
rgt_read_be_64(rgt_u8_array data, u64 *pos, u64 *out);

rgt_result
rgt_write_be_16(rgt_u8_array out, u64 *pos, u16 in);

rgt_result
rgt_write_be_32(rgt_u8_array out, u64 *pos, u32 in);

rgt_result
rgt_write_be_64(rgt_u8_array out, u64 *pos, u64 in);

rgt_result
rgt_write_u8(rgt_u8_array out, u64 *pos, u8 in);

rgt_result
rgt_write_u16(rgt_u8_array out, u64 *pos, u16 in);

rgt_result
rgt_write_u32(rgt_u8_array out, u64 *pos, u32 in);

rgt_result
rgt_write_u64(rgt_u8_array out, u64 *pos, u64 in);

rgt_result
rgt_copy_u8_array(rgt_u8_array out, u64 pos, rgt_u8_array in);

u64
rgt_align(u64 val, u64 align);

#endif