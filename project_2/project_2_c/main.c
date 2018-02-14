#include <avr/io.h>
#include <avr/interrupt.h>
#include "lcd.h"

// Initialise global variables to be used in the counter
unsigned int global_counter = 0;
unsigned int global_sec = 0;
unsigned int global_min = 50;
unsigned int global_hr = 10;

// TIMER0 initialisation function prototype
void timer0_init(void);

// TIMER0 overflow interrupt service routine
ISR(TIMER0_OVF_vect){
	
	// Increment the global_counter
	global_counter += 1;
	// Check to see if the global counter can be reset
	if (global_counter == 7813){
		global_counter = 0; 		// reset global counter
		global_sec += 1;			// increment the seconds
		// Check to see if the seconds have reached 60
		if (global_sec == 60){		
			global_sec = 0;
			global_min += 1;
			// Check to see if the minutes have reached 60
			if (global_min == 60){
				global_min = 0;
				global_hr += 1;
				if (global_hr == 24){
					global_hr = 0;
				}
			}
		}
	}
}

// Initialise TIMER0
void timer0_init(void){
	// Output compare function disabled, normal mode
	TCCR0A = 0;
	// Clock prescaler = 8
	TCCR0B = (1 << CS01);
	// Initialise the counter to 0
	TCNT0 = 0;
	// enable the overflow interrupt
	TIMSK0 = (1 << TOIE0);
}

int main(void){
	
	// Variable Declaration
	unsigned char h1, h2, m1, m2, s1, s2;
	unsigned int temp;
	unsigned char numbers[10] = {48,49,50,51,52,53,54,55,56,57};
	
	// Initialisation
	LCD_init();			// initialise the LCD
	timer0_init();		// initialise timer0_init
	sei();				// enable global interrupts
	
	while(1){
		
		// Determine the seconds
		temp = global_sec;
		s1 = temp % 10;
		temp /= 10;
		s2 = temp % 10;
		
		// Determine the minutes
		temp = global_min;
		m1 = temp % 10;
		temp /= 10;
		m2 = temp % 10;
		
		// Determine the hours
		temp = global_hr;
		h1 = temp % 10;
		temp /= 10;
		h2 = temp % 10;
		
		// Send the seconds to the LCD display
		LCD_send(0x80 | 0x07,0);	// 
		LCD_send(numbers[s1],1);
		LCD_send(0x80 | 0x06,0);
		LCD_send(numbers[s2],1);
		
		// Place ':' symbol 
		LCD_send(0x80 | 0x05,0);
		LCD_send(58,1);
		
		// Send the minutes to the LCD display
		LCD_send(0x80 | 0x04,0);
		LCD_send(numbers[m1],1);
		LCD_send(0x80 | 0x03,0);
		LCD_send(numbers[m2],1);
		
		// Place ':' symbol
		LCD_send(0x80 | 0x02 ,0);
		LCD_send(58,1);
		
		// Send the hours to the LCD display
		LCD_send(0x80 | 0x01,0);
		LCD_send(numbers[h1],1);
		LCD_send(0x80 | 0x00,0);
		LCD_send(numbers[h2],1);
	}
	
	return 0;
	
}