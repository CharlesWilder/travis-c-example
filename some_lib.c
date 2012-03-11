#include <stdlib.h>
#include "some_lib.h"

int random_return( void )
{
  int value = rand() % 10;

  if( value > 5 )
    return 1;
  else
    return 0;
}
