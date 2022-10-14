

#include "Timer.h"

void Timer_Init()
{
	/*Set Timer to Normal Mode*/
	TCCR0 = 0x00;
	
	/*Set Timer Initial Value*/
	TCNT0 = 0x00;
}

void delay()
{
	TCNT0 = 0x00;
	/*Set Timer Prescaler to 1/1024*/
	TCCR0 |= (1<<0) | (1<<2);
	/*Wait 5 Seconds*/
	while(Overflows<19){
		while((TIFR & (1<<0)) == 0);
		TIFR |= (1<<0);
		Overflows ++;
	}
	Overflows = 0;
	TCCR0 = 0x00; //Reset Timer
}

void delay_500ms()
{
	TCNT0 = 0x0C;
	/*Set Timer Prescaler to 1/1024*/
	TCCR0 |= (1<<0) | (1<<2);
	/*Wait 5 Seconds*/
	while(Overflows<2){
		while((TIFR & (1<<0)) == 0);
		TIFR |= (1<<0);
		Overflows ++;
	}
	Overflows = 0;
	TCCR0 = 0x00; //Reset Timer
}
