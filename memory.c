#include <stdio.h>
#include <stdlib.h>

// Memory management for a 6502 emulator
typedef struct {
    unsigned char *data;
    size_t size;
} Memory;

// Initializes the memory
Memory* init_memory(size_t size) {
    Memory *mem = (Memory*)malloc(sizeof(Memory));
    mem->data = (unsigned char*)malloc(size);
    mem->size = size;
    return mem;
}

// Frees the memory
void free_memory(Memory *mem) {
    free(mem->data);
    free(mem);
}

// Read a byte from memory
unsigned char read_mem(Memory *mem, size_t address) {
    if (address < mem->size) {
        return mem->data[address];
    }
    printf("Error: Address out of bounds\n");
    return 0; // Return 0 on error
}

// Write a byte to memory
void write_mem(Memory *mem, size_t address, unsigned char value) {
    if (address < mem->size) {
        mem->data[address] = value;
    } else {
        printf("Error: Address out of bounds\n");
    }
}