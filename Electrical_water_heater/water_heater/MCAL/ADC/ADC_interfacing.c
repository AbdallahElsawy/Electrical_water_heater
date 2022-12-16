/*
 * ADC_interfacing.c
 *
 * Created: 12/5/2022 8:56:12 PM
 *  Author:Toby
  */ 
#include "ADC_private.h"

void ADC_intialize(void)
{
	// voltage reference
	CLR_BIT(ADMUX,REFS1);      SET_BIT(ADMUX,REFS0);
	// prescaler 128
	SET_BIT(ADCSRA, ADPS2);SET_BIT(ADCSRA, ADPS1);SET_BIT(ADCSRA, ADPS0);
	// ADC enable
	SET_BIT(ADCSRA, ADEN);
	// ADC interrupt disable
	CLR_BIT(ADCSRA, ADIE);
	// ADC auto trigger enable
	SET_BIT(ADCSRA, ADATE); 
	

}
uint16 ADC_Read(void)
{
	
	uint16_t reading = 0;
	// channel ADC_CH1
	CLR_BIT(ADMUX, MUX4);CLR_BIT(ADMUX, MUX3);CLR_BIT(ADMUX, MUX2);CLR_BIT(ADMUX, MUX1);SET_BIT(ADMUX, MUX0);// 0 0 0 0 1
	// ADC Start conversion 
	SET_BIT(ADCSRA, ADSC);
	// wait until conversion finish
	while (GET_BIT(ADCSRA, ADIF) != 1);
	reading = ADC_DT;
	return reading;
}