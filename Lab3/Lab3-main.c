#include <8051.h>
#include <stdio.h>
#include "LED_Display.h"
#include "Keypad4x4.h"

void main() {
    int flag = 0;
    int x = 0;
    unsigned led[4] = {0x0f, 0x0f, 0x0f, 0x0f};
    int check = 0;
    int debounce = 1;
    P0 = 0xff;
    while (1) {
        if (check >= 0) {
            do {
                x = Keypad4x4();
                if (x >= 0 && x <= 15) {
                    if(debounce!=0) {
                        flag = x;
                    }
                    debounce = 0;
                } else {
                    debounce++;
                    break;
                }
            } while (x >= 0 && x <= 15);
        }
        check++;
        if (check > 0) {
            if (flag >= 0 && flag <= 15 && debounce == 1) {
                SetDisplay(led, flag);
            }
            check = -10;
        }
        LED_Display(led);
    }
}