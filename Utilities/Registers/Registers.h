
#ifndef REGISTERS_H_
#define REGISTERS_H_
#include "../Types/Types.h"

/*
1- This file includes all necessary registers of ATMega32.
2- Some Registers will not be used in this project but they will be defined so the model becomes generic.
*/

/* Define Port A Registers */
#define PORTA *((volatile uint8_t*) 0x3B)
#define DDRA *((volatile uint8_t*) 0x3A)
#define PINA *((volatile uint8_t*) 0x39)

/* Define Port B Registers */
#define PORTB *((volatile uint8_t*) 0x38)
#define DDRB *((volatile uint8_t*) 0x37)
#define PINB *((volatile uint8_t*) 0x36)

/* Define Port C Registers */
#define PORTC *((volatile uint8_t*) 0x35)
#define DDRC *((volatile uint8_t*) 0x34)
#define PINC *((volatile uint8_t*) 0x33)

/* Define Port D Registers */
#define PORTD *((volatile uint8_t*) 0x32)
#define DDRD *((volatile uint8_t*) 0x31)
#define PIND *((volatile uint8_t*) 0x30)

/* Define Timer 0 Registers */
#define TCCR0 *((volatile uint8_t*) 0x53)
#define TCNT0 *((volatile uint8_t*) 0x52)
#define TIFR *((volatile uint8_t*) 0x58)

/* Define Interrupts */
# define sei()  __asm__ __volatile__ ("sei" ::: "memory")
# define cli()  __asm__ __volatile__ ("cli" ::: "memory")
#define GICR *((volatile uint8_t*) 0x5B)
#define MCUCR *((volatile uint8_t*) 0x55)
#define TIFR *((volatile uint8_t*) 0x58)
#define INT0_vect __vector_1
#  define ISR(vector, ...)            \
void vector (void) __attribute__ ((signal,__INTR_ATTRS)) __VA_ARGS__; \
void vector (void)




#endif /* REGISTERS_H_ */