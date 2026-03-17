###############################################################################
# Rule to assemble and link all assembly files
###############################################################################
build:
	ca65 movingmario.asm -o movingmario.o
	ld65 -C nes.cfg movingmario.o -o movingmario.nes

###############################################################################
# Rule to remove all object (.o) files and cartridge (.nes) files
###############################################################################
clean:
	rm *.o *.nes

###############################################################################
# Rule to run the final cartridge .nes file in the FCEUX emulator
###############################################################################
run:
	fceux movingmario.nes
