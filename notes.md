# PPU Timings

* Each NTSC frame has 262 scanlines (240 visible and then 21 "virtual" vertical blank lines)
* The NES refreshes the display at 60 HZ for NTSC or 50 HZ for PAL
* Each scanline lasts 341 PPU clock cycles.  This is the same as 113.6 CPU clock cycles (1 CPU = 3 PPU)
* For a NTSC frame 240 scanlines are visible, 1 scanline is pre-vblank and 21 are scanlines at vblank
* The PPU triggers an NMI interrupt to the CPU every time a new vblank starts.