

#ifndef BUTTON_H_
#define BUTTON_H_
#include "../../MCAL/DIO Driver/DIO.h"

/*Define macros of the button status*/
#define Pressed 1
#define Released 0

/*Prototypes of necessary functions of Button*/
void Button_init(uint8_t buttonPort, uint8_t buttonPin);

void Button_read(uint8_t buttonPort, uint8_t buttonPin, uint8_t *Status);





#endif /* BUTTON_H_ */