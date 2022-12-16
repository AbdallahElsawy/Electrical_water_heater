/*
 * SEVSEG_interfacing.c
 *
 * Created: 12/5/2022 8:09:33 PM
 *  Author:Toby
  */ 
#include "SEVSEG_ptivate.h"
void SEVSEG_intialize(void)
{
	DIO_Direction(DIO_PORTA,S_SEG_2_PIN_A,DIO_OUTPUT);
	DIO_Direction(DIO_PORTA,S_SEG_2_PIN_B,DIO_OUTPUT);
	DIO_Direction(DIO_PORTA,S_SEG_2_PIN_C,DIO_OUTPUT);
	DIO_Direction(DIO_PORTA,S_SEG_2_PIN_D,DIO_OUTPUT);
	DIO_Direction(DIO_PORTB,S_SEG_1_PIN_A,DIO_OUTPUT);
	DIO_Direction(DIO_PORTB,S_SEG_1_PIN_B,DIO_OUTPUT);
	DIO_Direction(DIO_PORTB,S_SEG_1_PIN_C,DIO_OUTPUT);
	DIO_Direction(DIO_PORTB,S_SEG_1_PIN_D,DIO_OUTPUT);
	DIO_Direction(DIO_PORTC,S_SEG_1_EN_PIN,DIO_OUTPUT);
	DIO_Direction(DIO_PORTC,S_SEG_2_EN_PIN,DIO_OUTPUT);

}
void SEVSEG_ON(void)
{
	 DIO_value(DIO_PORTC,S_SEG_1_EN_PIN ,DIO_HIGH);
	 DIO_value(DIO_PORTC,S_SEG_2_EN_PIN ,DIO_HIGH);


}
void SEVSEG_OFF(void)
{
	DIO_value(DIO_PORTC,S_SEG_1_EN_PIN ,DIO_LOW);
	DIO_value(DIO_PORTC,S_SEG_2_EN_PIN ,DIO_LOW);

}
void SEVSEG_TOGGLE(void)
{
	DIO_TGL(DIO_PORTC,S_SEG_1_EN_PIN );
	DIO_TGL(DIO_PORTC,S_SEG_2_EN_PIN );

}
void SEVSEG_Display(uint8 NUM)
{
	
	uint8 num_1  = NUM%10;
	uint8 num_10 = NUM/10;
	switch(num_1){
		case 0:
		DIO_value(DIO_PORTA,S_SEG_1_PIN_A,DIO_LOW);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_B,DIO_LOW);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_C,DIO_LOW);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_D,DIO_LOW);
		break;
		case 1:
		DIO_value(DIO_PORTA,S_SEG_1_PIN_A,DIO_HIGH);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_B,DIO_LOW);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_C,DIO_LOW);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_D,DIO_LOW);
		break;
		case 2:
		DIO_value(DIO_PORTA,S_SEG_1_PIN_A,DIO_LOW);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_B,DIO_HIGH);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_C,DIO_LOW);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_D,DIO_LOW);
		break;
		case 3:
		DIO_value(DIO_PORTA,S_SEG_1_PIN_A,DIO_HIGH);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_B,DIO_HIGH);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_C,DIO_LOW);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_D,DIO_LOW);
		break;
		case 4:
		DIO_value(DIO_PORTA,S_SEG_1_PIN_A,DIO_LOW);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_B,DIO_LOW);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_C,DIO_HIGH);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_D,DIO_LOW);
		break;
		case 5:
		DIO_value(DIO_PORTA,S_SEG_1_PIN_A,DIO_HIGH);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_B,DIO_LOW);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_C,DIO_HIGH);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_D,DIO_LOW);
		break;
		case 6:
		DIO_value(DIO_PORTA,S_SEG_1_PIN_A,DIO_LOW);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_B,DIO_HIGH);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_C,DIO_HIGH);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_D,DIO_LOW);
		break;
		case 7:
		DIO_value(DIO_PORTA,S_SEG_1_PIN_A,DIO_HIGH);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_B,DIO_HIGH);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_C,DIO_HIGH);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_D,DIO_LOW);
		break;
		case 8:
		DIO_value(DIO_PORTA,S_SEG_1_PIN_A,DIO_LOW);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_B,DIO_LOW);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_C,DIO_LOW);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_D,DIO_HIGH);
		break;
		case 9:
		DIO_value(DIO_PORTA,S_SEG_1_PIN_A,DIO_HIGH);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_B,DIO_LOW);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_C,DIO_LOW);
		DIO_value(DIO_PORTA,S_SEG_1_PIN_D,DIO_HIGH);
		break;
	}
	switch(num_10){
			case 0:
			DIO_value(DIO_PORTB,S_SEG_2_PIN_A,DIO_LOW);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_B,DIO_LOW);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_C,DIO_LOW);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_D,DIO_LOW);
			break;					 
			case 1:					 
			DIO_value(DIO_PORTB,S_SEG_2_PIN_A,DIO_HIGH);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_B,DIO_LOW);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_C,DIO_LOW);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_D,DIO_LOW);
			break;					 
			case 2:					 
			DIO_value(DIO_PORTB,S_SEG_2_PIN_A,DIO_LOW);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_B,DIO_HIGH);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_C,DIO_LOW);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_D,DIO_LOW);
			break;					 
			case 3:					 
			DIO_value(DIO_PORTB,S_SEG_2_PIN_A,DIO_HIGH);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_B,DIO_HIGH);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_C,DIO_LOW);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_D,DIO_LOW);
			break;					  
			case 4:					  
			DIO_value(DIO_PORTB,S_SEG_2_PIN_A,DIO_LOW);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_B,DIO_LOW);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_C,DIO_HIGH);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_D,DIO_LOW);
			break;					 
			case 5:					 
			DIO_value(DIO_PORTB,S_SEG_2_PIN_A,DIO_HIGH);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_B,DIO_LOW);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_C,DIO_HIGH);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_D,DIO_LOW);
			break;					  
			case 6:					  
			DIO_value(DIO_PORTB,S_SEG_2_PIN_A,DIO_LOW);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_B,DIO_HIGH);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_C,DIO_HIGH);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_D,DIO_LOW);
			break;					  
			case 7:					  
			DIO_value(DIO_PORTB,S_SEG_2_PIN_A,DIO_HIGH);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_B,DIO_HIGH);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_C,DIO_HIGH);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_D,DIO_LOW);
			break;					  
			case 8:					  
			DIO_value(DIO_PORTB,S_SEG_2_PIN_A,DIO_LOW);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_B,DIO_LOW);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_C,DIO_LOW);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_D,DIO_HIGH);
			break;					  
			case 9:					  
			DIO_value(DIO_PORTB,S_SEG_2_PIN_A,DIO_HIGH);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_B,DIO_LOW);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_C,DIO_LOW);
			DIO_value(DIO_PORTB,S_SEG_2_PIN_D,DIO_HIGH);
			break;
}
}

