#include <avr/io.h>

int main (void){
	DDRD = 0xFF;
	PORTD = 0xAA;
	while(1){}
}