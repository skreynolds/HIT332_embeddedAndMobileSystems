#include "serial.h"

// Function to initialise the USART
// for asynchronous serial use

void USART_init(void){
	
	// Set the baud rate registers
	UBRR0H = (unsigned char)(UBRR_VALUE>>8);
	UBRR0L = (unsigned char)UBRR_VALUE;
	
	// Set standard USART transmission speed,
	// disable Multi-processor Communication Mode
	UCSR0A = 0x00;
	
	// Enable the receiver and transmitter
	UCSR0B = (1<<RXEN0)|(1<<TXEN0);
	
	// Set Asynchronous USART mode,
	// Parity Mode = disabled
	// Set the frame format: 8 data bits, 1 stop bits
	UCSR0C = (1<<UCSZ00)|(1<<UCSZ01);
}

// Function to send data
void USART_transmit(unsigned char data){
	
	// Wait for empty transmit buffer
	while (!(UCSR0A & (1<<UDRE0)));
	
	// Load data into the buffer
	// (this starts sending the data)
	UDR0 = data;
}

// Function to receive data
unsigned char USART_receive(void){
	
	// Wait for USART Receive Complete flag to be set
	while(!(UCSR0A & (1<<RXC0)));
	
	// Return the 8-bit data from the buffer
	return UDR0;
}