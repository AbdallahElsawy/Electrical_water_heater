/*
 * HEATING_ELEMENT.h
 *
 *  Author:Toby
  */ 


#ifndef HEATING_ELEMENT_H_
#define HEATING_ELEMENT_H_

#include "HEATING_ELEMENT_CONFIG.h"

#define initial_temp   60

#define OFF             0
#define ON              1


void HEATING_ELEMENT_INIT(void);
void HEATING_ELEMENT_ON(void);
void HEATING_ELEMENT_OFF(void);




#endif /* HEATING_ELEMENT_H_ */