#ifndef RGT_GZIP_H
#define RGT_GZIP_H

#include "rgt_result.h"
#include "rgt_array.h"

rgt_result
rgt_decompress_gzip(rgt_u8_array in, rgt_u8_array populate);

rgt_result
rgt_compress_gzip
(
	rgt_u8_array in, int compression_level, rgt_u8_array *populate
);

#endif