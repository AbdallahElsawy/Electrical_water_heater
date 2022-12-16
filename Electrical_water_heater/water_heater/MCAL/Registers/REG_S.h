/*
 * REG_S.h
 *
 * Created: 12/2/2022 7:35:29 PM
 *  Author:Toby
  */ 


#ifndef REG_S_H_
#define REG_S_H_

#include "Types_N.h"

/*====================================DIO_REGISTERS=======================================*/

#define PORTA (*((volatile uint8_t) 0x3B))
#define DDRA (*((volatile uint8_t) 0x3A))
#define PINA (*((volatile uint8_t) 0x39))


#define PORTB (*((volatile uint8_t) 0x38))
#define DDRB (*((volatile uint8_t) 0x37))
#define PINB (*((volatile uint8_t) 0x36))


#define PORTC (*((volatile uint8_t) 0x35))
#define DDRC (*((volatile uint8_t) 0x34))
#define PINC (*((volatile uint8_t) 0x33))


#define PORTD (*((volatile uint8_t) 0x32))
#define DDRD (*((volatile uint8_t) 0x31))
#define PIND (*((volatile uint8_t) 0x30))



/*==================================ADC_REGISTERS============================================*/


#define ADMUX  (*(volatile uint8_t*)(0x27))
#define ADCSRA (*(volatile uint8_t*)(0x26))
#define ADCL   (*(volatile uint8_t*)(0x24))
#define ADCH   (*(volatile uint8_t*)(0x25))
#define ADC_DT (*(volatile uint16_t*)(0x24))

/**************_EX_INT_REGISTERS_************/

#define SREG   (*(volatile uint8*)(0x5F))
#define GICR   (*(volatile uint8*)(0x5B))
#define GIFR   (*(volatile uint8*)(0x5A))
#define MCUCR  (*(volatile uint8*)(0x55))
#define MCUCSR (*(volatile uint8*)(0x54))



/**************_TIMER_0_REGISTERS_************/

#define TCNT0  (*(volatile uint8*)(0x52))
#define TCCR0  (*(volatile uint8*)(0x53))
#define TIMSK  (*(volatile uint8*)(0x59))
#define OCR0   (*(volatile uint8*)(0x5C))

/****************_TWI_REGISTERS_**************/

#define TWAR     (*((volatile uint8*)0x22))
#define TWBR     (*((volatile uint8*)0x20))
#define TWCR     (*((volatile uint8*)0x56))
#define TWDR     (*((volatile uint8*)0x23))
#define TWSR     (*((volatile uint8*)0x21))






#endif /* REG_S_H_ */