#include "spi.h"

// Initialise th SPI peripheral as master
void SPI_initMaster(void){
	// Set MOSI and SCK as Output, MISO as input
	DDRB = (1<<1)|(1<<2);
	
	// Enable SPI, Set as Master
	// Prescaler: Fosc/16
	SPCR = (1<<SPE)|(1<<MSTR)|(1<<SPR0);
}

// Function to send and receive data over the SPI bus
unsigned char SPI_readWrite(unsigned char data){
	// Load data into the buffer
	SPDR = data;
	
	// Wait until transmission is complete
	while(!(SPSR & (1<<SPIF) ));
	
	// Return the received data
	return(SPDR);
}