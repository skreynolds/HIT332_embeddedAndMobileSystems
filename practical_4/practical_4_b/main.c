#include <avr/io.h>
#include <util/delay.h>

#define CLOCK_DELAY_MS 50

int main (void){
	unsigned char counter = 0;
	DDRD = 0x0F;     // Set PD0 to PD3 (inclusive) as output
	while(1){
		counter++;
		if (counter > 15){
			counter = 0;
		}
		PORTD = counter;
		_delay_ms(2*CLOCK_DELAY_MS);
	}
}