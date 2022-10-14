
#include "LED.h"

/*Function to Initialize an LED*/
void LED_init(uint8_t ledPORT, uint8_t ledPIN)
{
	DIO_init(ledPIN, ledPORT, Output);
}

/*Function to turn an LED ON*/
void LED_ON(uint8_t ledPORT, uint8_t ledPIN)
{
	DIO_Write(ledPIN, ledPORT, HIGH);
}

/*Function to turn an LED OFF*/
void LED_OFF(uint8_t ledPORT, uint8_t ledPIN)
{
	DIO_Write(ledPIN, ledPORT, LOW);
}

/*Function to blink an LED for 5 seconds*/
void Single_Blink(uint8_t ledPORT, uint8_t ledPIN)
{
	for(int i=0; i<5; i++){
		DIO_Write(ledPIN, ledPORT, HIGH);
		delay_500ms();
		DIO_Write(ledPIN, ledPORT, LOW);
		delay_500ms();
	}
}

/*Function to blink two LEDs for 5 seconds*/
void Double_Blink(uint8_t led1PORT, uint8_t led1PIN, uint8_t led2PORT, uint8_t led2PIN)
{
	for(int i=0; i<5; i++){
		DIO_Write(led1PIN, led1PORT, HIGH);
		DIO_Write(led2PIN, led2PORT, LOW);
		delay_500ms();
		DIO_Write(led1PIN, led1PORT, LOW);
		DIO_Write(led2PIN, led2PORT, HIGH);
		delay_500ms();
	}
	DIO_Write(led2PIN, led2PORT, LOW);
}
