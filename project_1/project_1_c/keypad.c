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

#include "keypad.h"

// Read the keypad and return the code corresponding to
// the pressed key (or keys), with simple debouncing implemented
// If no key is pressed, returns 0
unsigned char keypad_read(void) {
	unsigned char keypad_value;

	keypad_value = keypad_scan();	// scan the keypad
	_delay_ms(10);					// wait some time for the switch state to settle
	
	if(keypad_value == keypad_scan()){		// read it again and check if it is the same value
		return keypad_value;
	}else{
		return 0;	//otherwise we return 0 to indicate no valid keypress
	}
}

// Function to scan the keypad
// Returns a number corresponding to the pressed key (if any)
// If no key is pressed, returns 0
unsigned char keypad_scan(void) {

	unsigned char result = 0;	// Declare variable to hold result
	
	KEYPAD_DDR = 0x0F;		// Set colums as outputs, rows as inputs (binary 00001111)
	KEYPAD_PORT = 0xF0;		// Set outputs low, and enable pullups on the inputs (binary 11110000)
	_delay_ms(1);			// Wait 1ms for port/pins to settle

	result = (KEYPAD_PIN & 0xF0);	// Use a bit mask (binary 11110000) to get the status of the
									// rows (bits 4-7 in the PIN register), store in result variable
	
	KEYPAD_DDR = 0xF0;		// Set colums as inputs, rows as outputs (binary 11110000)
	KEYPAD_PORT = 0x0F;		// Set outputs low, and enable pullups on the inputs (binary 00001111)
	_delay_ms(1);			// Wait 1ms for port/pins to settle

	result |= (KEYPAD_PIN & 0x0F);	// Use a bit mask (binary 00001111) to get the status of the
									// columns (bits 0-3 in the PIN register), store in the result variable
									// without changing the lower bits set earlier
	
	return ~result;		// Invert the bits and return the result
}

