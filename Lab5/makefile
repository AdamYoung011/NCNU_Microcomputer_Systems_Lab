OBJS = *.asm *.hex *.ihx *.lk *.lst *.map *.mem *.rst *.sym *.rel
music.o :
	sdcc music.c
	packihx music.ihx > music.hex
clean :
	del $(OBJS)
