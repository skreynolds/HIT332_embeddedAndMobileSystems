#include <avr/io.h>
#include <util/delay.h>

#define CLOCK_DELAY_MS 16.67

int main (void){
	DDRD = 0x01;     // Set PD0 as output
	while(1){
		PORTD |= (1<<PD0);		// Set PD0 high
		_delay_ms(CLOCK_DELAY_MS);
		PORTD &= ~(1<<PD0);		// Set PD0 low
		_delay_ms(CLOCK_DELAY_MS);
	}
}