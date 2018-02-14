#include <avr/io.h>
#include <util/delay.h>
#include "keypad.h"

// Define port used to connect to the keypad
#define KEYPAD_PORT PORTD
#define KEYPAD_DDR DDRD
#define KEYPAD_PIN PIND

#define CLOCK_DELAY_MS 100

int main(void){
	
	// Initalise variables for use
	unsigned char keyCode;
	unsigned int keyIsPressed = 0;
	
	// PORTB is configured for output
	DDRB = 0xFF; /*DDRB has a written logic 1 - configured as output*/
	PORTB = 0x00; /*PORTB is output and written logic 1 - configured as driven high*/
	PINB = 0x00; /*set port B to off state initially*/
	
	while(1){
		keyCode = keypad_read();	// read the keypad with debounce
		
		// check to see if the pins will toggle
		//PINB = 0xFF;
		//_delay_ms(CLOCK_DELAY_MS);
		//PINB = 0x00;
		//_delay_ms(CLOCK_DELAY_MS);
		
		if (keyCode){				// keyCode = 0 indicates no key pressed
			if (!keyIsPressed){
				keyIsPressed = 1;	// flag to indicate that a key is pressed
				// do something based on the keypress
				PINB = 0xFF;
				_delay_ms(CLOCK_DELAY_MS);
				
			}
		}
		else{
			keyIsPressed = 0;		// key has been released
			// check to see if the pins will toggle
			PINB = 0xFF;
			_delay_ms(CLOCK_DELAY_MS);
			PINB = 0x00;
			_delay_ms(CLOCK_DELAY_MS);
			
		}
	}
}