#include <avr/io.h>
#include <avr/interrupt.h>

// TIMER0 initialisation function prototype
void timer0_init(void);

// TIMER0 overflow interrupt service routine
ISR(TIMER0_OVF_vect){
	PORTB ^= (1 << PB0);	// toggle the PD0 pin
}

// Initialise TIMER0
void timer0_init(void){
	// Output compare function disabled, normal mode
	TCCR0A = 0;
	// Clock prescaler = 256
	TCCR0B = (1 << CS02);
	// initialise counter to 0
	TCNT0 = 0;
	// enable the overflow interrupt
	TIMSK0 = (1 << TOIE0);
}

void main(void){
	// set pin PD0 as output
	DDRB |= (1 << PB0);
	
	timer0_init();			// initialise timer0_init
	sei();					// enable global interrupts
	
	while(1){
		// rest of code
	}
}