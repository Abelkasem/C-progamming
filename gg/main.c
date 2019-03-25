/*
 */

#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
DDRD=0xF0;
    // Insert code

    while(1){
        PORTD^=0xF0;
		_delay_ms(1000);
    }
    return 0;
}
