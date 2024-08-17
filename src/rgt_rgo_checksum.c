#include <string.h>

#include "ryouou_gakuen_toolkit.h"

rgt_checksum rgt_initial_checksum(void)
{
    return (rgt_checksum){ 0x1111111111111111, 0x1111111111111111 };
}

rgt_checksum rgt_update_checksum(rgt_checksum current, rgt_u8_array data)
{
    for (u32 i = 0; i < data.length - 16; i += 16) 
    {
        for (u32 j = 0; j < 8; ++j) 
        {
            current.low += ((u64)(data.elems[i+j]) << (8*j));
        }
        for (u32 j = 0; j < 8; ++j) 
        {
            current.high += ((u64)(data.elems[i+8+j]) << (8*j));
        }
    }
    return current;
}

void
rgt_add_checksum_whole_file(rgt_u8_array data)
{
    rgt_checksum checksum = rgt_update_checksum(rgt_initial_checksum(), data);

    for (u32 i = 0; i < 8; ++i) 
    {
        data.elems[data.length - 16 + i] = (checksum.low >> (8*i)) & 0xFF;
    }
    for (u32 i = 0; i < 8; ++i)  
    {
        data.elems[data.length - 8 + i] = (checksum.high >> (8*i)) & 0xFF;
    }
}
