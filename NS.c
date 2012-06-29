
#include "NS.h"

void func1 ( void )
{
  printf( "I am function 1.\n" );
}

int func2( char *word )
{
  
  /* Check Parameters */
  if ( word == NULL ) {
    
    printf ( "NULL word passed to func2.\n" );
    return -1;
  }
  
  printf( "The word of the day is %s.\n", word );

  return 0;
}
