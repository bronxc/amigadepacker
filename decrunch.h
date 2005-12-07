/* Based on the decr. code of:
 *
 * Extended Module Player
 * Copyright (C) 1996-1999 Claudio Matsuoka and Hipolito Carraro Jr
 *
 * modified for uade by mld
 *
 * This file is part of the Extended Module Player and is distributed
 * under the terms of the GNU General Public License. See doc/COPYING
 * for more information.
 */

/* uncomment for support for the external XPK Linux for Unix */
//#define HAVE_XPKLIB 1

#ifndef _DECRUNCH_H_
#define _DECRUNCH_H_

#include <stdio.h>

int decrunch (FILE *out, FILE *in, char *s);

#endif
