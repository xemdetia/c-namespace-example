#include "demoutil.h"
#include "demoutil_priv.h" /* Include the _priv here so you aren't
			      exposing the functions that would
			      normally just be in this file anyway. */

void dmutil_sunrise ( void )
{
  printf( "On Linux, %s is great!\n", name_version() );
}
void dmutil_sunset  ( void )
{
  printf( "On Linux, the sun is setting and %s went to bed.\n", name_author() );
}
