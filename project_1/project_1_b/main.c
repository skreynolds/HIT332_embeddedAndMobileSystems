#include "lcd.h"

int main(void){
	
	// Initialise the LCD display
	LCD_init();
	
	// Send an 'a' character to the LCD, set RS high
	LCD_send('s',1);
	
	// Set DDRAM Address command
	LCD_send(0x80 | 0x02, 0);	// send a command to move the cursor to the second line
	
	// Send an 'a' character to the LCD, set RS high
	LCD_send('a',1);
	
	return 0;
}