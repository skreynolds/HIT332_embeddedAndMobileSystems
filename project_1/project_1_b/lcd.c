/* 
Library for writing to the LCD display
	> DATA pins should be connected to one port
	> RS and EN pins must be connected to two additional pins on another port
	> The library only writes to the LCD, so the R/W pin must be tied LOW
	> The contrast adjustment pin (V0) can usually be tied low and provide sufficient contrast
*/

#include "lcd.h"

// Private function prototypes
void pulseEnable(void);

// Function to initialise the ports and pins and the LCD controller
void LCD_init(void) {
 
	// set up data direction registers
	// DATA, RS and EN are all outputs
	LCD_DATA_DDR |= 0xFF;
	LCD_RS_DDR |= (1<<LCD_RS_PIN);
	LCD_EN_DDR |= (1<<LCD_EN_PIN);
	
	// pull RS and EN low pins
	LCD_RS_PORT &= ~(1<<LCD_RS_PIN);
	LCD_EN_PORT &= ~(1<<LCD_EN_PIN);
 
	// according to the datasheet, we need at least 40ms after power rises above 2.7V
	// before sending commands.
	_delay_ms(50);
 
	// initialisation sequence
	LCD_send(0x30, 0);
	_delay_us(4500); 	// wait min 4.1ms
    LCD_send(0x30, 0);
    _delay_us(4500); 	// wait min 4.1ms
    LCD_send(0x30, 0); 
    _delay_us(150);		// wait min 100us

	// Function set command: set # lines = 2, font size = 5x8.
	LCD_send(0x38, 0);
 
	// Display ON/OFF Control command: display on, cursor off, blink off
	LCD_send(0x0C, 0);
  
	// Clear Display command: clear all the display data, set cursor position to zero
	LCD_send(0x01, 0);
	_delay_us(2000);  // Allow time for display clear command to finish
}

// Function to write to the LCD controller
// The RS pin state must be supplied, along with the data to be written
void LCD_send(unsigned char data, unsigned char rs_value) {
	
	// first set the RS pin state
	if(rs_value) {
		LCD_RS_PORT |= (1<<LCD_RS_PIN);		// set RS pin high
	}
	else {
		LCD_RS_PORT &= ~(1<<LCD_RS_PIN);	// set RS pin low
	}
	
	LCD_DATA_PORT = data;	// write the data to the port
	pulseEnable();		// toggle enable
}

// Function to toggle the LCD enable pin
void pulseEnable(void) {  
	LCD_EN_PORT |= (1<<LCD_EN_PIN);		// set EN pin high
	_delay_us(1);
	LCD_EN_PORT &= ~(1<<LCD_EN_PIN);	// set EN pin low
	_delay_us(100);
}