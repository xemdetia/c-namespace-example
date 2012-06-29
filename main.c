
#include "NS.h"

int main( int argc, char **argv )
{

  /* Let's try all the possible outcomes. */

  NS.func1(); /* Since func1() returns void you can assume it to be right */

  /* Call func2 and trigger error condition. */
  if ( NS.func2( NULL ) < 0 ) {

    printf( "Error detected in calling func2!\n" );
  }

  /* Call func2 with a word. */
  if ( NS.func2( "salt" ) < 0 ) {
    
    printf( "Error detected: We check the return value all the time to make sure its right.\n " );
  }

  return 0;
}
