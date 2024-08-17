#include "ryouou_gakuen_toolkit.h"
#include "zlib.h"

rgt_result
rgt_decompress_gzip(rgt_u8_array in, rgt_u8_array populate)
{
	rgt_result result = RGT_SUCCESS;
	z_stream z_stream = {0};

	z_stream.next_in = in.elems;
	z_stream.avail_in = (uInt)in.length;
	z_stream.next_out = populate.elems;
	z_stream.avail_out = (uInt)populate.length;

	RGT_ASSERT
	(
		inflateInit2(&z_stream, 16 + MAX_WBITS) == Z_OK,
		RGT_GZIP_DECOMPRESS_ERROR
	);
	RGT_ASSERT
	(
		inflate(&z_stream, Z_FINISH) == Z_STREAM_END, 
		RGT_GZIP_DECOMPRESS_ERROR
	);
	RGT_ASSERT(inflateEnd(&z_stream) == Z_OK, RGT_GZIP_DECOMPRESS_ERROR);

finish:

	return result;
}

rgt_result
rgt_compress_gzip
(
	rgt_u8_array in, int compression_level, rgt_u8_array *populate
)
{
	rgt_result result = RGT_SUCCESS;

	z_stream z_stream = {0};

	z_stream.next_in = in.elems;
	z_stream.avail_in = (uInt)in.length;
	z_stream.next_out = populate->elems;
	z_stream.avail_out = (uInt)populate->length;

	RGT_ASSERT
	(
		deflateInit2
		(
			&z_stream, compression_level, Z_DEFLATED, 
			MAX_WBITS + 16, 9, Z_DEFAULT_STRATEGY
		) == Z_OK,
		RGT_GZIP_COMPRESS_ERROR
	);
	RGT_ASSERT
	(
		deflate(&z_stream, Z_FINISH) == Z_STREAM_END, RGT_GZIP_COMPRESS_ERROR
	);
	populate->length = z_stream.total_out;
	RGT_ASSERT(deflateEnd(&z_stream) == Z_OK, RGT_GZIP_COMPRESS_ERROR);

finish:

	return result;
}
