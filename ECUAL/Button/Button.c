
#include "Button.h"

/*Function to initialize a button*/
void Button_init(uint8_t buttonPort, uint8_t buttonPin)
{
	DIO_init(buttonPin, buttonPort, Input);
}

/*Function to read the status of button*/
void Button_read(uint8_t buttonPort, uint8_t buttonPin, uint8_t *Status)
{
	DIO_Read(buttonPin, buttonPort, &Status);
}
