//
// C++ Interface: sha1
//
// Description:
//
//
/*
 *  FIPS-180-1 compliant SHA-1 implementation
 *
 *  Copyright (C) 2001-2003  Christophe Devine
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
//
// Copyright: See COPYING file that comes with this distribution
//
//
#include "sections.h"

#ifndef _SHA1_H
#define _SHA1_H

#ifndef uint8
#define uint8  unsigned char
#endif

#ifndef uint32
#define uint32 unsigned long int
#endif

typedef struct
{
	uint32 total[2];
	uint32 state[5];
	uint8 buffer[64];
}
sha1_context;
void sha1_process( sha1_context *ctx, uint8 data[64] ) __attribute__ ((section ("diafns")));
void sha1_starts( sha1_context *ctx ) __attribute__ ((section ("diafns")));
void sha1_update( sha1_context *ctx, uint8 *input, uint32 length ) __attribute__ ((section ("diafns")));
void sha1_finish( sha1_context *ctx, uint8 digest[20] ) __attribute__ ((section ("diafns")));

#endif /* sha1.h */

