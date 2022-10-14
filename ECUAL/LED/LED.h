
#ifndef LED_H_
#define LED_H_
#include "../../MCAL/DIO Driver/DIO.h"
#include "../../Utilities/Timer/Timer.h"

/*Prepare prototypes of functions to initialize the LED and turn it ON/OFF*/
void LED_init(uint8_t ledPORT, uint8_t ledPIN);

void LED_ON(uint8_t ledPORT, uint8_t ledPIN);

void LED_OFF(uint8_t ledPORT, uint8_t ledPIN);

void Single_Blink(uint8_t ledPORT, uint8_t ledPIN);

void Double_Blink(uint8_t led1PORT, uint8_t led1PIN, uint8_t led2PORT, uint8_t led2PIN);




#endif /* LED_H_ */