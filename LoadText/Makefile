###############################################################################
# Rule to assemble and link all assembly files
###############################################################################
build:
	ca65 loadtext.asm -o loadtext.o
	ld65 -C nes.cfg loadtext.o -o loadtext.nes

###############################################################################
# Rule to remove all object (.o) files and cartridge (.nes) files
###############################################################################
clean:
	rm *.o *.nes

###############################################################################
# Rule to run the final cartridge .nes file in the FCEUX emulator
###############################################################################
run:
	fceux loadtext.nes
