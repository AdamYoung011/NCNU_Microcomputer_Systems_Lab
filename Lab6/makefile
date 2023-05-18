OBJS = *.asm *.hex *.ihx *.lk *.lst *.map *.mem *.rst *.sym *.rel
LED_matrix.o :
	sdcc LED_matrix.c
	packihx LED_matrix.ihx > LED_matrix.hex
clean :
	rm $(OBJS)
