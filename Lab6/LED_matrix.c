#include "8051.h"

unsigned row[8] = {0x7f, 0xbf, 0xdf, 0xef, 0xf7, 0xfb, 0xfd, 0xfe};
unsigned col[8] = {0xe7, 0xdb, 0xbd, 0xbd, 0x81, 0xbd, 0xbd, 0xbd};

void main(){
    int n = 0;
    while(1){
        for(int count = 0; count < 300; count++){
            for(int i = 0; i < 8; i++){
                P0 = row[i];
                P1 = col[(n+i)%8];        
                for(int j = 0; j < 32; j++){            
                    
                }
            }   
        }  
        n++;  
    }    
}