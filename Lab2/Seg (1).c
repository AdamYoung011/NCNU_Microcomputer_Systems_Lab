#include <8051.h>

void main(){
    unsigned seg, d1, d2, check1, check2;
    seg = 0x50;    
    check1 = 0x01;
    check2 = 0x01;

    while(1){       
        P0 = 0x70 + (seg >> 4);
        for (d1 = 0; d1 < 64; d1++){
            for (d2 = 0; d2 < 100; d2++){
            } 
        }
        P0 = 0xb0 + (seg % 16);
        for (d1 = 0; d1 < 64; d1++){
            for (d2 = 0; d2 < 100; d2++){
            } 
        }

        if(P1 == 7 && check1){
            if( (seg % 16) < 0x09)
                seg += 0x01;
            else if(seg != 0x99){
                seg += 0x07;
            }
            check1 = 0x00;
        }
        else if(P1 == 11 && check2){
            if( (seg % 16) > 0x00)
                seg -= 0x01;
            else if(seg > 0x00){
                seg -= 0x07;
            }
            check2 = 0x00;
        }
        if(P1 != 7 && P1 != 11)
        {
            check1 = 0x01;
            check2 = 0x01;
        }

       
    }
}