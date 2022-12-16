/*
 * LM35_TEMP.c
 *
 *  Author:Toby
  */ 
#include "LM35_TEMP.h"
#include "ADC_private.h"

void TEMP_S_INIT(){
	 ADC_intialize();
	}
uint8 TEMP_S_READ()
{
	uint8 sensor_val=ADC_Read();
	return (5.0 * sensor_val * 100.0) / 1024;
}