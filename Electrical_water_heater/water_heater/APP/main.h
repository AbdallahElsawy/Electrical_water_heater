/*
 * main.h
 *
 * Created: 12/2/2022 7:05:30 PM
 *  Author: A c e r
 */ 


#ifndef MAIN_H_
#define MAIN_H_
#include "BIT_MATH.h"
#include "Types_N.h"
#include "Macros.h"
#include "REG_S.h"
#include "DIO_private.h"
#include "SEVSEG_ptivate.h"
#include "ADC_private.h"
#include "COOLING_ELEMENT.h"
#include "HEATING_ELEMENT.h"
#include "HEATING_ELEMENT_LED.h"
#include "EEPROM_24C16.h"
#include "DOWN_BUTTON.h"
#include "UP_BUTTON.h"
#include "ON_OFF_SWITCH.h"
#include "LM35_TEMP.h"
#include "EX_INT.h"
#include "TIMER.h"
#include "TWI.h"
#undef F_CPU               // Disable internal CPU frequency
#define F_CPU 16000000     // Enable external CPU frequency
#include <avr/interrupt.h> // Define library for interrupt
#include <util/delay.h>    // Define Delay function




#endif /* MAIN_H_ */