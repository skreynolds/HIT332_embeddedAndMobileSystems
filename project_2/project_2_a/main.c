#include <avr/io.h>
#include <util/delay.h>

#define CLOCK_DELAY_MS 0.66

int main (void){
	DDRC = 0x80;     // Set PC7 as output
	while(1){
		PORTC |= (1<<PC7);		// Set PC7 high
		_delay_ms(CLOCK_DELAY_MS);
		PORTC &= ~(1<<PC7);		// Set PC7 low
		_delay_ms(CLOCK_DELAY_MS);
	}
}