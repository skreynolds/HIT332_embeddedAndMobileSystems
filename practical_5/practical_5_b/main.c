#include <avr/io.h>
#include <util/delay.h>

#include "serial.h"
#include "adc.h"

void serial_writeNumber(unsigned int);

int main(void){
	USART_init();
	ADC_init();
	
	while(1){
		unsigned int ADC_value;
		ADC_value = ADC_read(0);
		serial_writeNumber(ADC_value);
		USART_transmit('\n');
		_delay_ms(500);
	}
}

// Simple function to send a 4 digit positive number as ASCII
// characters (0-9) over the serial connection.
// Note that ASCII '0' has a value of 48.
void serial_writeNumber(unsigned int value){
	unsigned char i;
	if ((value >= 0) && (value <= 9999)){
		i = value/1000;
		USART_transmit(i+48);
		i = (value%1000)/100;
		USART_transmit(i+48);
		i = (value%100)/10;
		USART_transmit(i+48);
		i = (value%10);
		USART_transmit(i+48);
	}
}