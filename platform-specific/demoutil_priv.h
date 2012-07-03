
#ifndef __DEMOUTIL_PRIV_H__
#define __DEMOUTIL_PRIV_H__

#include <stdio.h>

/*
 * This is a listing of functions that are shared in both the win32
 * and linux contexts, but are not exposed to the end user. This
 * allows them not to be needlessly replicated or cut-and-pasted
 * across files.
 *
 * Both these functions are admittedly pretty awful examples as
 * functions, but are good examples if they *were* sensible to be
 * across both win32 and linux.
 */

extern char* name_version ( void ); 
extern char* name_author  ( void );

#endif /* __DEMOUTIL_PRIV_H__ */
