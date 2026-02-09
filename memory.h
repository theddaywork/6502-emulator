# Memory Management Header

#ifndef MEMORY_H
#define MEMORY_H

// Function prototypes for memory management
void initialize_memory();
void free_memory();
void read_memory(unsigned short address, unsigned char *data);
void write_memory(unsigned short address, unsigned char data);

#endif // MEMORY_H