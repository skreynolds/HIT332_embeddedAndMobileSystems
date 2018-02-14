#include <avr/io.h>
#include "serial.h"

int main(void){
	
	unsigned char serialData;
	
	USART_init();
	
	while(1){
		serialData = USART_receive();
		USART_transmit(serialData);
	}
}