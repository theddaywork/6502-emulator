// cpu.c - 6502 CPU Implementation

#include <stdio.h>
#include <stdint.h>

#define MEMORY_SIZE 65536

uint8_t memory[MEMORY_SIZE];
uint8_t A = 0, X = 0, Y = 0, SP = 0xFD; // Registers
uint16_t PC = 0x0000; // Program Counter

// Function prototypes
void execute_instruction();
uint8_t read_memory(uint16_t address);
void write_memory(uint16_t address, uint8_t value);

// Main CPU loop
int main() {
    // Initialize CPU, load program into memory
    while (1) {
        execute_instruction();
        // Add logic to exit loop, handle interrupts, etc.
    }
    return 0;
}

void execute_instruction() {
    uint8_t opcode = read_memory(PC++);
    switch (opcode) {
        // Implement instruction execution here
        // Example: LDA (Load Accumulator)
        case 0xA9: // LDA Immediate
            A = read_memory(PC++);
            break;
        // Add additional opcodes...
        default:
            printf("Unknown opcode $%02X at $%04X\n", opcode, PC - 1);
            break;
    }
}

uint8_t read_memory(uint16_t address) {
    return memory[address];
}

void write_memory(uint16_t address, uint8_t value) {
    memory[address] = value;
}