#include <8051.h>
#define TIMER_VAL 15536

int count = 0;

void timer_isr (void) __interrupt (1) __using (1)
{
    TH0 = TIMER_VAL >> 8;
    TL0 = TIMER_VAL & 0xff;
    count++;
}

void main()
{
    TMOD = 0x01;
    TH0 = TIMER_VAL >> 8;
    TL0 = TIMER_VAL & 0xff;
    TR0 = 1; // start Timer 0
    ET0 = 1; // enable Timer 0 overflow interrupt
    EA = 1; //enable all interrupt

    while(1)
    {
        if(count % 10 == 0)
        {
            if(count > 990)
                count = 0;   
        }
        
        P0 = 0xE0 + (count / 10) % 10;

        for(int i = 0; i < 256; i++){
            //delay
        }
        
        P0 = 0xD0 + count / 100;

        for(int i = 0; i < 256; i++){
            //delay
        }
    }
}