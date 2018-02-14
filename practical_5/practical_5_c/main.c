#include <avr/io.h>
#include <util/delay.h>

#include "spi.h"

// function prototypes
void writeDigitalPot(unsigned char);

int main(void){
	SPI_initMaster();
	
	DDRB |= (1<<PB0);  // set PB0 as output
	PORTB |= (1<<PB0); // set Pb0 highvideo
	
	while(1){
		for (unsigned char i = 0; i<=128; i++){
			writeDigitalPot(i);
			_delay_ms(20);
		}
	}
}

// function to write a value to the MCP4131
// digital potentiometer
void writeDigitalPot(unsigned char value){
	PORTB &= ~(1<<PB0);		// set PB0 low to pull CS low
	SPI_readWrite(0);		// send address byte
	SPI_readWrite(value);	// send potentiometer value
	PORTB |= (1<<PB0);		// set PB0 high
}