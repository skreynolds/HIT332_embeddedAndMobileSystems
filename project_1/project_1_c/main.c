#include "keypad.h"
#include "lcd.h"

int main(void){
	
	// Initialise the LCD screen
	LCD_init();
	
	// Initialise the position of the LCD cursor
	unsigned char position = 0x80 | 0x00;
	
	// Initialise the Keypad variables for use
	unsigned char keyCode;
	unsigned int keyIsPressed = 0;
	
	while(1){
		keyCode = keypad_read();	// read the keypad with debounce
		
		if (keyCode){				// keyCode = 0 indicates no key pressed
			if(!keyIsPressed){
				keyIsPressed = 1;	// flag to indicate that a key has been pressed
				
				// Determine key using the output stored in the keyCode
				switch(keyCode){
					case 0x11 :
						LCD_send('1',1);		// print 1 to LCD
						position = LCD_position(position);	// Updates the cursor position
						LCD_send(position, 0);	// Change the position of the cursor
						_delay_us(200000);
						break;
					case 0x12 :
						LCD_send('2',1);	// print 2 to LCD
						position = LCD_position(position);	// Updates the cursor position
						LCD_send(position, 0);	// Change the position of the cursor
						_delay_us(200000);
						break;
					case 0x14 :
						LCD_send('3',1);	// print 3 to LCD
						position = LCD_position(position);	// Updates the cursor position
						LCD_send(position, 0);	// Change the position of the cursor
						_delay_us(200000);
						break;
					case 0x21 :
						LCD_send('4',1);	// print 4 to LCD
						position = LCD_position(position);	// Updates the cursor position
						LCD_send(position, 0);	// Change the position of the cursor
						_delay_us(200000);
						break;
					case 0x22 :
						LCD_send('5',1);	// print 5 to LCD
						position = LCD_position(position);	// Updates the cursor position
						LCD_send(position, 0);	// Change the position of the cursor
						_delay_us(200000);
						break;
					case 0x24 :
						LCD_send('6',1);	// print 6 to LCD
						position = LCD_position(position);	// Updates the cursor position
						LCD_send(position, 0);	// Change the position of the cursor
						_delay_us(200000);
						break;
					case 0x41 :
						LCD_send('7',1);	// print 7 to LCD
						position = LCD_position(position);	// Updates the cursor position
						LCD_send(position, 0);	// Change the position of the cursor
						_delay_us(200000);
						break;
					case 0x42 :
						LCD_send('8',1);	// print 8 to LCD
						position = LCD_position(position);	// Updates the cursor position
						LCD_send(position, 0);	// Change the position of the cursor
						_delay_us(200000);
						break;
					case 0x44 :
						LCD_send('9',1);	// print 9 to LCD
						position = LCD_position(position);	// Updates the cursor position
						LCD_send(position, 0);	// Change the position of the cursor
						_delay_us(200000);
						break;
					case 0x81 :
						LCD_send('*',1);	// print * to LCD
						position = LCD_position(position);	// Updates the cursor position
						LCD_send(position, 0);	// Change the position of the cursor
						_delay_us(200000);
						break;
					case 0x82 :
						LCD_send('0',1);	// print 0 to LCD
						position = LCD_position(position);	// Updates the cursor position
						LCD_send(position, 0);	// Change the position of the cursor
						_delay_us(200000);
						break;
					case 0x84 :
						LCD_send('#',1);	// print # to LCD
						position = LCD_position(position);	// Updates the cursor position
						LCD_send(position, 0);	// Change the position of the cursor
						_delay_us(200000);
						break;
						
				}
				
			}
			else{
				keyIsPressed = 0;		// key has been released
			}
		}
	}
}

