/*
 * ADC_configration.h
 *
 * Created: 12/5/2022 8:55:30 PM
 *  Author:Toby
  */ 


#ifndef ADC_CONFIGRATION_H_
#define ADC_CONFIGRATION_H_
#include "main.h"
typedef enum
{
	ADC_PRE1 = 0,
	ADC_PRE2 = 1,
	ADC_PRE4 = 2,
	ADC_PRE8 = 3,
	ADC_PRE16 = 4,
	ADC_PRE32 = 5,
	ADC_PRE64 = 6,
	ADC_PRE128 = 7
}ADC_Prescaler;

typedef enum
{
	ADC_CH0 = 0,
	ADC_CH1 = 1,
	ADC_CH2 = 2,
	ADC_CH3 = 3,
	ADC_CH4 = 4,
	ADC_CH5 = 5,
	ADC_CH6 = 6,
	ADC_CH7 = 7
}ADC_Channel;





#endif /* ADC_CONFIGRATION_H_ */