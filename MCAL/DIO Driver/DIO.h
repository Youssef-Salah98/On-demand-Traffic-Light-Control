
#ifndef DIO_H_
#define DIO_H_
#include "../../Utilities/Registers/Registers.h"

/*Define Directions*/
#define Input 0
#define Output 1

/*Define Values*/
#define LOW 0
#define HIGH 1

//Define Ports
#define Port_A 'A'
#define Port_B 'B'
#define Port_C 'C'
#define Port_D 'D'

/*Create a function to initialize DIO*/
void DIO_init(uint8_t PinNumber, uint8_t PortNumber, uint8_t Role);

/*Create a function to write on DIO*/
void DIO_Write(uint8_t PinNumber, uint8_t PortNumber, uint8_t Value);

/*Create a function to read DIO*/
void DIO_Read(uint8_t PinNumber, uint8_t PortNumber, uint8_t *Data);



#endif /* DIO_H_ */