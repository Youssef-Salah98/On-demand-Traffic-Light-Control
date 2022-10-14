
#include "DIO.h"

void DIO_init(uint8_t PinNumber, uint8_t PortNumber, uint8_t Role)
{
	switch (PortNumber){
		case 'A':
		if(Role == Output){
			DDRA |= (1<<PinNumber);
			break;
		}
		else if(Role == Input){
			DDRA &=~ (1<<PinNumber);
			break;
		}
		else{
			printf("\nDirection of Port (%c) Pin (%d) Error", PortNumber, PinNumber);
			return 0;
		}
		
		case 'B':
		if(Role == Output){
			DDRB |= (1<<PinNumber);
			break;
		}
		else if(Role == Input){
			DDRB &=~ (1<<PinNumber);
			break;
		}
		else{
			printf("\nDirection of Port (%c) Pin (%d) Error", PortNumber, PinNumber);
			return 0;
		}
		
		case 'C':
		if(Role == Output){
			DDRC |= (1<<PinNumber);
			break;
		}
		else if(Role == Input){
			DDRC &=~ (1<<PinNumber);
			break;
		}
		else{
			printf("\nDirection of Port (%c) Pin (%d) Error", PortNumber, PinNumber);
			return 0;
		}
		
		case 'D':
		if(Role == Output){
			DDRD |= (1<<PinNumber);
			break;
		}
		else if(Role == Input){
			DDRD &=~ (1<<PinNumber);
			break;
		}
		else{
			printf("\nDirection of Port (%c) Pin (%d) Error", PortNumber, PinNumber);
			return 0;
		}
		
		default:
		printf("\n PORT NUMBER Is WRONG");
		break;
		
	}
}

	

void DIO_Write(uint8_t PinNumber, uint8_t PortNumber, uint8_t Value)
{
	switch (PortNumber){
		case 'A':
		if(Value == HIGH){
			PORTA |= (1<<PinNumber);
			break;
		}
		else if(Value == LOW){
			PORTA &=~ (1<<PinNumber);
			break;
		}
		else{
			printf("\Value of Port (%c) Pin (%d) Returns Error", PortNumber, PinNumber);
			return 0;
		}
		
		case 'B':
		if(Value == HIGH){
			PORTB |= (1<<PinNumber);
			break;
		}
		else if(Value == LOW){
			PORTB &=~ (1<<PinNumber);
			break;
		}
		else{
			printf("\Value of Port (%c) Pin (%d) Returns Error", PortNumber, PinNumber);
			return 0;
		}
		
		case 'C':
		if(Value == HIGH){
			PORTC |= (1<<PinNumber);
			break;
		}
		else if(Value == LOW){
			PORTC &=~ (1<<PinNumber);
			break;
		}
		else{
			printf("\Value of Port (%c) Pin (%d) Returns Error", PortNumber, PinNumber);
			return 0;
		}
		
		case 'D':
		if(Value == HIGH){
			PORTD |= (1<<PinNumber);
			break;
		}
		else if(Value == LOW){
			PORTD &=~ (1<<PinNumber);
			break;
		}
		else{
			printf("\Value of Port (%c) Pin (%d) Returns Error", PortNumber, PinNumber);
			return 0;
		}
		
		default:
		printf("\n PORT NUMBER Is WRONG");
		break;
		
	}
}

void DIO_Read(uint8_t PinNumber, uint8_t PortNumber, uint8_t *Data)
{
	
	switch (PortNumber){
		case 'A':
		*Data = (PINA & (1<<PinNumber)) >> PinNumber; //Read bit
		break;
		
		case 'B':
		*Data = (PINB & (1<<PinNumber)) >> PinNumber; //Read bit
		break;
		
		case 'C':
		*Data = (PINC & (1<<PinNumber)) >> PinNumber; //Read bit
		break;
		
		case 'D':
		*Data = (PIND & (1<<PinNumber)) >> PinNumber; //Read bit
		break;
		
		default:
		printf("\n PORT NUMBER Is WRONG");
		break;
		
	}
}

