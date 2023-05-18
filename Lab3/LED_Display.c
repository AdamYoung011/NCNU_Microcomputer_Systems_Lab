#include <8051.h>

#include "LED_Display.h"

void SetDisplay(unsigned *led, char flag) {
    for (int i = 3; i > 0; i--) {
        led[i] = led[i - 1];
    }
    led[0] = 0x00 + flag;
}

void LED_Display(unsigned *led) {
    P0 = led[0] | 0xE0;
    for (int j = 0; j < 256; j++) {
    }

    P0 = led[1] | 0xD0;
    for (int j = 0; j < 256; j++) {
    }

    P0 = led[2] | 0xB0;
    for (int j = 0; j < 256; j++) {
    }

    P0 = led[3] | 0x70;
    for (int j = 0; j < 256; j++) {
    }
}