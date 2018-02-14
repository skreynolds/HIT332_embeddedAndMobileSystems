#include <avr/io.h>

#define BAUD 9600
#define UBRR_VALUE (F_CPU/16/BAUD-1)

void USART_init(void);
void USART_transmit(unsigned char);
unsigned char USART_receive(void);