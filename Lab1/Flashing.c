#include <8051.h>
#include <stdio.h>

void main()
{
	unsigned d1, d2, led;
	led = 0xef;
    P1 = 0xef;
    P2 = 0xff;
    P0 = 0xff;
    
	int count=0;
    while (1) {

        led = led >> 1;
        led = led + 0x80;
        
        if( led == 0xff)
        {
            count++;
            led = 0x7f;
        }
        
        if(count % 3 == 0)
        {
            P2 = 0xff;
            P1 = led;
        }
        else if(count % 3 == 1)
        {
            P1 = 0xff;
            P0 = led;
        }
        else
        {
            P0 = 0xff;
            P2 = led;
        }

        for (d1 = 0; d1 < 1024; d1 ++) {
			for (d2 = 0; d2 < 100; d2 ++) {
			}
		}
        
	}
}