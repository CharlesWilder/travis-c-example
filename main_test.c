#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "some_lib.h"
#include "greatest.h"

TEST expect_some_value()
{
  int value = random_return();

  ASSERT( value == 1 );
  PASS();
}

SUITE( suite )
{
  int i = 0;

  srand( time( NULL ) );
  for( i = 0; i < 50; i++ )
    RUN_TEST( expect_some_value );
}

GREATEST_MAIN_DEFS();

int main( int argc, char** argv )
{
  GREATEST_MAIN_BEGIN();
  RUN_SUITE( suite );
  GREATEST_MAIN_END();
}
