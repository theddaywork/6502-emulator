# CPU Header File for 6502 Emulator

#ifndef CPU_H
#define CPU_H

// Register Definitions
#define A 0  // Accumulator
#define X 1  // X register
#define Y 2  // Y register
#define SP 3 // Stack Pointer
#define PC 4 // Program Counter
#define STATUS 5 // Status Register

// Flag Definitions
#define C_FLAG 0x01 // Carry Flag
#define Z_FLAG 0x02 // Zero Flag
#define I_FLAG 0x04 // Interrupt Disable Flag
#define D_FLAG 0x08 // Decimal Mode Flag
#define B_FLAG 0x10 // Break Command Flag
#define U_FLAG 0x20 // Unused Flag
#define V_FLAG 0x40 // Overflow Flag
#define N_FLAG 0x80 // Negative Flag

// Function Declarations
void cpu_init();  // Initialize CPU state
void cpu_reset(); // Reset CPU state
void cpu_execute_cycle(); // Execute one CPU cycle

#endif // CPU_H
