#!/bin/bash

ca65 $1 -o exobj.o
ld65 exobj.o -o exobj.nes -C nes.cfg