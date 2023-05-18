all: Lab3-main.hex

Lab3-main.rel: Lab3-main.c
	sdcc -c Lab3-main.c

LED_Display.rel: LED_Display.c
	sdcc -c LED_Display.c

Keypad4x4.rel: Keypad4x4.c
	sdcc -c Keypad4x4.c 

myIO.lib: LED_Display.rel Keypad4x4.rel
	sdar -r myIO.lib LED_Display.rel Keypad4x4.rel
	
Lab3-main.ihx: Lab3-main.rel LED_Display.rel Keypad4x4.rel
	sdcc Lab3-main.rel LED_Display.rel Keypad4x4.rel

Lab3-main.hex: Lab3-main.ihx myIO.lib
	packihx Lab3-main.ihx > Lab3-main.hex

clean:
	rm *.rel *.lst *.rst  *.mem *.map *.sym *.lk *.ihx *.asm 