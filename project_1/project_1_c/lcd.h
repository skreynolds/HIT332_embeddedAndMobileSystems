/* 
Library for writing to the LCD display
	> DATA pins should be connected to one port
	> RS and EN pins must be connected to two additional pins on another port
	> The library only writes to the LCD, so the R/W pin must be tied LOW
	> The contrast adjustment pin (V0) can usually be tied low and provide sufficient contrast
*/


// Includes
#include <avr/io.h>
#include <util/delay.h>

// Define ports and pins used to connect to the LCD
// EN on PC0
#define LCD_EN_PIN 0
#define LCD_EN_PORT PORTC
#define LCD_EN_DDR DDRC

// RS on PC1
#define LCD_RS_PIN 1
#define LCD_RS_PORT PORTC
#define LCD_RS_DDR DDRC

// D0-D7 on PA0-PA7
#define LCD_DATA_PORT PORTA
#define LCD_DATA_DDR DDRA

// Public function prototypes
void LCD_init(void);
void LCD_send(unsigned char, unsigned char);
unsigned char LCD_position(unsigned char);
