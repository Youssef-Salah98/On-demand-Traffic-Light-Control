
#include "Application.h"

uint8_t mode = 0;

void PedestrianMode()
{
	/*Check if Cars` RED is ON*/
	DIO_Read(2, Port_A, &LED_Status);
	if(LED_Status){
		LED_OFF(Port_B, 2);
		LED_ON(Port_B, 0);
		delay();
		LED_OFF(Port_A, 2);
		Double_Blink(Port_A, 1, Port_B, 1);
		LED_OFF(Port_B,0);
		LED_ON(Port_B, 2);
		LED_ON(Port_A,1);
	}
	
	else{
		//LED_OFF(Port_A, 1);
		LED_ON(Port_B, 2);
		Double_Blink(Port_A, 1, Port_B, 1);
		LED_OFF(Port_A, 0);
		LED_OFF(Port_B, 2);
		LED_ON(Port_B, 0);
		LED_ON(Port_A, 2);
		delay();
		LED_OFF(Port_A, 2);
		Double_Blink(Port_A, 1, Port_B, 1);
		LED_OFF(Port_B,0);
		LED_OFF(Port_A,2);
		LED_ON(Port_B, 2);
		/*Cars` Green is ON*/
		LED_ON(Port_A, 0);
		
		delay(); //delay for 5 secs
		
	}
	mode = 0;
}

void appStart(void)
{
	/* Initialize All LEDs */
	LED_init(Port_A, 0); // Cars` Green LED
	LED_init(Port_A, 1); // Cars` Yellow LED
	LED_init(Port_A, 2); // Cars` Red LED
	LED_init(Port_B, 0); // Pedestrians` Green LED
	LED_init(Port_B, 1); // Pedestrians` Yellow LED
	LED_init(Port_B, 2); // Pedestrians` Red LED
	
	/*Initialize Pedestrians` Push Button*/
	//Button_init(Port_D, 3); // Button at INT0
	
	/*Enable Global Interrupts*/
	sei();
	
	/*Choose Interrupt Sense as (rising edge)*/
	MCUCR |= (1<<0) | (1<<1);
	
	/*Enable Interrupts at INT0*/
	GICR |= (1<<6);
	
	
	
	while (1)
	{
		
		/*Cars` Green is ON*/
		LED_ON(Port_A, 0);
		
		for(int i=0; i<10; i++){
			if(mode){
				PedestrianMode();
			}
			delay_500ms();
		}
		
		LED_OFF(Port_A, 0);
		
		/*Cars` Yellow is ON*/
		Single_Blink(Port_A, 1);
		if(mode){
			PedestrianMode();
			LED_OFF(Port_A, 0);
			Single_Blink(Port_A, 1);
		}
		
		/*Cars` Red is ON*/
		LED_ON(Port_A, 2);
		
		for(int i=0; i<10; i++){
			if(mode){
				PedestrianMode();
			}
			delay_500ms();
		}
		
		LED_OFF(Port_A, 2);
		
		/*Cars` Yellow is ON*/
		Single_Blink(Port_A, 1);
		if(mode){
			PedestrianMode();
			LED_OFF(Port_A, 0);
			Single_Blink(Port_A, 1);

		}
		LED_OFF(Port_B, 2);
		
	}
}

ISR(INT0_vect)
{
	mode = 1;
}
