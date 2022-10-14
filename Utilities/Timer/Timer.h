

#ifndef TIMER_H_
#define TIMER_H_
#include "../Types/Types.h"
#include "../Registers/Registers.h"
uint8_t Overflows;

void Timer_Init(); // Function to initialize Timer 0
void delay(); // Function to delay for 5 seconds
void delay_500ms(); // Function to delay for 1 sec



#endif /* TIMER_H_ */