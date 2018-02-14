/*#include <avr/io.h>*/
#include <avr/io.h>

int main (void){
	/*This configuration has Port B as an input port, and a high is placed on each pin using software.
	Furthermore, we have Port D configured as an output port - we note that a logical zero is set up
	to be interpreted as a voltage HIGH (i.e. 0 = ON and 1 = OFF). Finally there is a piece of software
	that sets PORTD equal to PINB - I'm not quite sure how PINB works though*/
	
	/*The dip switches are attached to PORT B, and the LED attached to Port D. When initially connected
	the dip switches are all off, which means that the software 1 is passed to Port B and the LED are
	turned off. When a dip switch is turned on, then we get 1 + 1 (??) at the specific pin at Port B,
	which then reigsters as a 0 and is passed to Port D which turns on the LED*/
	
	/*If one of the dip switches is disconnected from port B then the corresponding LED switches on.
	What is happening here?*/
	
	DDRB = 0x00; /*DDRB written logic 0 - configured as input*/
	PORTB = 0x00; /*PORTB has the input 1111 1111 placing a software HIGH on each pin.
	I'm not actually sure what this second line does...*/
	
	DDRD = 0xFF; /*DDRD has a written logic 1 - configured as output*/
	PORTD = 0x00; /*PORTD is output and written logic 0 - configured as driven low*/
	
	while(1){
		PORTD = PINB;
	}
}