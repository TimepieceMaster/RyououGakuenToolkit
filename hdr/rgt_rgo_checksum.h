#ifndef RGT_RGO_CHECKSUM_H
#define RGT_RGO_CHECKSUM_H

#include "rgt_array.h"

#define RGT_CHECKSUM_SIZE 16

typedef struct _rgt_checksum
{
	u64 low;
	u64 high;
} rgt_checksum;

rgt_checksum rgt_initial_checksum(void);
rgt_checksum rgt_update_checksum(rgt_checksum current, rgt_u8_array data);

void
rgt_add_checksum_whole_file(rgt_u8_array data);

#endif