#include "video.h"

int main( void *pMBHeader )
{
    screen_clear();
    screen_setCursor( 0, 0 );

    screen_printString( "hello\t" );
    screen_printString( "world\n" );

    return 0xDEADBABA;
}
