/*Author: Nick Vaccarello
 *Tile: Chip-8 emulation */

//Current opcode
unsigned short opcode;

//Total memory
unsigned char memory[4096];

//CPU registers
unsigned char V[16];

//Index register
unsigned short I;

//Program counter
unsigned short pc;

//Display
unsigned char display[64*32];

//Event timer
unsigned char delay_timer;

//Sound timer
unsigned char sound_timer;

//Stack
unsigned short stack[16];

//Stack pointer
unsigned short sp;

//Keypad
unsigned key[16];
