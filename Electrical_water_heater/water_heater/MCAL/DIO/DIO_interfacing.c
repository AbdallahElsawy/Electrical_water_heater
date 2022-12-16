/*
 * DIO_interfacing.c
 *
 * Created: 12/2/2022 7:46:17 PM
 *  Author:Toby
  */ 


#include "DIO_private.h"

void DIO_Direction(DIO_Port port,DIO_Pin pin,DIO_State state)
{
	switch(port)
	{
		case DIO_PORTA:
			switch(state)
			{
				case DIO_INPUT:
					CLR_BIT(DDRA,pin);
				break;
				case DIO_OUTPUT:
					SET_BIT(DDRA,pin);
				break;
			}
		break;
		case DIO_PORTB:
			switch(state)
			{
				case DIO_INPUT:
				CLR_BIT(DDRB,pin);
				break;
				case DIO_OUTPUT:
				SET_BIT(DDRB,pin);
				break;
			}
		break;
		case DIO_PORTC:
			switch(state)
			{
				case DIO_INPUT:
				CLR_BIT(DDRC,pin);
				break;
				case DIO_OUTPUT:
				SET_BIT(DDRC,pin);
				break;
			}
		break;
		case DIO_PORTD:
			switch(state)
			{
				case DIO_INPUT:
				CLR_BIT(DDRD,pin);
				break;
				case DIO_OUTPUT:
				SET_BIT(DDRD,pin);
				break;
			}
		break;
		
	}
	
	
}

void DIO_value(DIO_Port port,DIO_Pin pin ,DIO_Status status)
{
	switch(port)
	{
		case DIO_PORTA:
			switch(status)
			{
				case DIO_LOW:
				CLR_BIT(PORTA,pin);
				break;
				case DIO_HIGH:
				SET_BIT(PORTA,pin);
				break;
			}
		break;
		case DIO_PORTB:
			switch(status)
			{
				case DIO_LOW:
				CLR_BIT(PORTB,pin);
				break;
				case DIO_HIGH:
				SET_BIT(PORTB,pin);
				break;
			}
		break;
		case DIO_PORTC:
			switch(status)
			{
				case DIO_LOW:
				CLR_BIT(PORTC,pin);
				break;
				case DIO_HIGH:
				SET_BIT(PORTC,pin);
				break;
			}
		break;
		case DIO_PORTD:
			switch(status)
			{
				case DIO_LOW:
				CLR_BIT(PORTD,pin);
				break;
				case DIO_HIGH:
				SET_BIT(PORTD,pin);
				break;
			}
		
		break;
		
	}
	
	
}

void DIO_TGL(DIO_Port port,DIO_Pin pin )
{
		switch(port)
		{
			case DIO_PORTA:
				TGL_BIT(PORTA,pin);
				break;
			
			case DIO_PORTB:
				TGL_BIT(PORTB,pin);
				break;
		
			case DIO_PORTC:
				TGL_BIT(PORTC,pin);
				break;
			
			case DIO_PORTD:
				TGL_BIT(PORTD,pin);
				break;
			
		}

}

uint8 DIO_Read(DIO_Port port,DIO_Pin pin )
{
	uint8 value=0;

	switch(port)
	{
		case DIO_PORTA:
		value=GET_BIT(PORTA,pin);
		break;
		
		case DIO_PORTB:
		value=GET_BIT(PORTB,pin);
		break;
		
		case DIO_PORTC:
		value=GET_BIT(PORTC,pin);
		break;
		
		case DIO_PORTD:
		value=GET_BIT(PORTD,pin);
		break;
		
	}
	return value;
}