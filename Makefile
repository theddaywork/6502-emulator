# Makefile for building the 6502 Emulator

CC=gcc
CFLAGS=-Wall -Wextra -g
default: build

build: main.o cpu.o memory.o
	$(CC) $(CFLAGS) -o emulator main.o cpu.o memory.o

main.o: main.c cpu.h memory.h
	$(CC) $(CFLAGS) -c main.c

cpu.o: cpu.c cpu.h
	$(CC) $(CFLAGS) -c cpu.c

memory.o: memory.c memory.h
	$(CC) $(CFLAGS) -c memory.c

clean:
	rm -f *.o emulator