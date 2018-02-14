/* 
Library for reading a matrix keypad
	> Keypad should be connected to one port
	> Up to a 4 x 4 keypad matrix can be connected
	> Colums are on pins 0-3
	> Rows are on pins 4-7
	
	==== Key Values (Hex) ====
		0x11 0x12 0x14 0x18
		0x21 0x22 0x24 0x28
		0x41 0x42 0x44 0x48
		0x81 0x82 0x84 0x88
	==========================	
*/

// Includes
#include <avr/io.h>
#include <util/delay.h>

// Define port used to connect to the keypad
#define KEYPAD_PORT PORTD
#define KEYPAD_DDR DDRD
#define KEYPAD_PIN PIND

// Public function prototypes
unsigned char keypad_read(void);
unsigned char keypad_scan(void);
