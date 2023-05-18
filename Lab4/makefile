OBJS = *.asm *.hex *.ihx *.lk *.lst *.map *.mem *.rst *.sym *.rel
Timer.o :
	sdcc Timer.c
	packihx Timer.ihx > Timer.hex
clean :
	rm $(OBJS)
