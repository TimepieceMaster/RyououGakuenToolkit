#include "ryouou_gakuen_toolkit.h"

rgt_result
rgt_read_bytes(rgt_u8_array data, u64 *pos, u64 size, void *out)
{
	rgt_result result = RGT_SUCCESS;
	RGT_ASSERT(*pos + size <= data.length, RGT_OUT_OF_BOUNDS_ERROR);
	memcpy(out, &data.elems[*pos], size);
	*pos += size;

finish:

	return result;
}

rgt_result 
rgt_read_be_16(rgt_u8_array data, u64 *pos, u16 *out)
{
	rgt_result result = RGT_SUCCESS;
	RGT_ASSERT(*pos + 2 <= data.length, RGT_OUT_OF_BOUNDS_ERROR);
	*out = 0;
	*out += (u16)data.elems[*pos] << 8;
	*out += (u16)data.elems[*pos + 1];
	*pos += 2;

finish:

	return result;
}

rgt_result 
rgt_read_be_32(rgt_u8_array data, u64 *pos, u32 *out)
{
	rgt_result result = RGT_SUCCESS;
	RGT_ASSERT(*pos + 4 <= data.length, RGT_OUT_OF_BOUNDS_ERROR);
	*out = 0;
	*out += (u32)data.elems[*pos] << 24;
	*out += (u32)data.elems[*pos + 1] << 16;
	*out += (u32)data.elems[*pos + 2] << 8;
	*out += (u32)data.elems[*pos + 3];
	*pos += 4;

finish:

	return result;
}

rgt_result
rgt_read_be_64(rgt_u8_array data, u64 *pos, u64 *out)
{
	rgt_result result = RGT_SUCCESS;
	RGT_ASSERT(*pos + 8 <= data.length, RGT_OUT_OF_BOUNDS_ERROR);
	*out = 0;
	*out += (u64)data.elems[*pos] << 56;
	*out += (u64)data.elems[*pos + 1] << 48;
	*out += (u64)data.elems[*pos + 2] << 40;
	*out += (u64)data.elems[*pos + 3] << 32;
	*out += (u64)data.elems[*pos + 4] << 24;
	*out += (u64)data.elems[*pos + 5] << 16;
	*out += (u64)data.elems[*pos + 6] << 8;
	*out += (u64)data.elems[*pos + 7];
	*pos += 8;

finish:

	return result;
}

rgt_result
rgt_write_be_16(rgt_u8_array out, u64 *pos, u16 in)
{
	rgt_result result = RGT_SUCCESS;
	RGT_ASSERT(*pos + 2 <= out.length, RGT_OUT_OF_BOUNDS_ERROR);
	out.elems[*pos] = (in >> 8) & 0xFF;
	out.elems[*pos + 1] = in & 0xFF;
	*pos += 2;

finish:

	return result;
}

rgt_result
rgt_write_be_32(rgt_u8_array out, u64 *pos, u32 in)
{
	rgt_result result = RGT_SUCCESS;
	RGT_ASSERT(*pos + 4 <= out.length, RGT_OUT_OF_BOUNDS_ERROR);
	out.elems[*pos] = (in >> 24) & 0xFF;
	out.elems[*pos + 1] = (in >> 16) & 0xFF;
	out.elems[*pos + 2] = (in >> 8) & 0xFF;
	out.elems[*pos + 3] = in & 0xFF;
	*pos += 4;

finish:

	return result;
}

rgt_result
rgt_write_be_64(rgt_u8_array out, u64 *pos, u64 in)
{
	rgt_result result = RGT_SUCCESS;
	RGT_ASSERT(*pos + 8 <= out.length, RGT_OUT_OF_BOUNDS_ERROR);
	out.elems[*pos] = (in >> 56) & 0xFF;
	out.elems[*pos + 1] = (in >> 48) & 0xFF;
	out.elems[*pos + 2] = (in >> 40) & 0xFF;
	out.elems[*pos + 3] = (in >> 32) & 0xFF;
	out.elems[*pos + 4] = (in >> 24) & 0xFF;
	out.elems[*pos + 5] = (in >> 16) & 0xFF;
	out.elems[*pos + 6] = (in >> 8) & 0xFF;
	out.elems[*pos + 7] = in & 0xFF;
	*pos += 8;

finish:

	return result;
}

rgt_result
rgt_write_u8(rgt_u8_array out, u64 *pos, u8 in)
{
	rgt_result result = RGT_SUCCESS;
	RGT_ASSERT(*pos + 1 <= out.length, RGT_OUT_OF_BOUNDS_ERROR);
	memcpy(&out.elems[*pos], &in, 1);
	*pos += 1;

finish:

	return result;
}

rgt_result
rgt_write_u32(rgt_u8_array out, u64 *pos, u32 in)
{
	rgt_result result = RGT_SUCCESS;
	RGT_ASSERT(*pos + 4 <= out.length, RGT_OUT_OF_BOUNDS_ERROR);
	memcpy(&out.elems[*pos], &in, 4);
	*pos += 4;

finish:

	return result;
}

rgt_result
rgt_write_u64(rgt_u8_array out, u64 *pos, u64 in)
{
	rgt_result result = RGT_SUCCESS;
	RGT_ASSERT(*pos + 8 <= out.length, RGT_OUT_OF_BOUNDS_ERROR);
	memcpy(&out.elems[*pos], &in, 8);
	*pos += 8;

finish:

	return result;
}

rgt_result
rgt_copy_u8_array(rgt_u8_array out, u64 pos, rgt_u8_array in)
{
	rgt_result result = RGT_SUCCESS;
	RGT_ASSERT(pos + in.length <= out.length, RGT_OUT_OF_BOUNDS_ERROR);
	memcpy(&out.elems[pos], in.elems, in.length);

finish:

	return result;
}

u64
rgt_align(u64 val, u64 align)
{
	return (val + align - 1) / align * align;
}
