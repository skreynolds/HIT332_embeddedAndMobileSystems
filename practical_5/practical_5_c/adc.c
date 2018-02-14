#include "adc.h"

// Function to initiate the ADC module
void ADC_init(void){
	
	// set AREF to AVcc
	ADMUX = (1<<REFS0);
	
	// ADC Enable and prescaler of 128
	// 16000000Hz/128 = 125000Hz
	ADCSRA = (1<<ADEN)|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);
}

// Function to read one channel of the ADC
unsigned int ADC_read(unsigned char chan){
		
	// First select the corresponding channel (0-7)
	// We AND with 0x07 to make sure the value
	// of 'chan' is between 0 and 7
	chan &= 0x07;
	ADMUX = (ADMUX & 0xF8) | chan; // this clears the lower 3 bits before ORing with 'chan'
		
	// start a single conversion by writing a 1 to ADSC bit
	ADCSRA |= (1<<ADSC);
		
	// wait for the conversion to complete by checking the ADSC bit
	// (when the conversion is complete, it returns to zero)
	while(ADCSRA & (1<<ADSC));
		
	return (ADC);
}