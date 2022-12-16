/*
 * TIMER.h
 *
 *  Author:Toby
  */ 


#ifndef TIMER_H_
#define TIMER_H_

#include "main.h"

#define NORMAL     0
#define CTC        1

#define _64        0
#define _256       1
#define _1024      2

void TIMER_0_INIT     (void);
void TIMER_0_SET_TIME (uint32);
void TIMER_0_START    (void);
void TIMER_0_STOP     (void);

#endif /* TIMER_H_ */