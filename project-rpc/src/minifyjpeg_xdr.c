/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "minifyjpeg.h"

bool_t
xdr_image (XDR *xdrs, image *objp)
{
	register int32_t *buf;

	 if (!xdr_bytes (xdrs, (char **)&objp->buffer.buffer_val, (u_int *) &objp->buffer.buffer_len, ~0))
		 return FALSE;
	return TRUE;
}
