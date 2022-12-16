/*
 * TWI.c
 *
 *  Author:Toby
  */ 

#include "main.h"
#include "TWI.h"

void TWI_MASTER_INIT(void)
{
	//TWBR = 0x0C;         // to select 400 khz speed clock on scl
	TWBR = 0x48;         // to select 100 khz speed clock on scl 
	//TWBR = 152;          // to select  50 khz speed clock on scl
	SET_BIT(TWCR,2);     // to enable twi
	_delay_ms(100);
}
void TWI_SLAVE_INIT(void)
{
	TWAR = (1 << 1) | 0x01;   // to select slave address , enable broadcast receiving
	SET_BIT(TWCR,2);
}
void TWI_START_CONDETION(void)
{
	SET_BIT(TWCR,5);                 // to make start condition
	SET_BIT(TWCR,7);                 // to clear flag
	while(GET_BIT(TWCR,7) == 0);
	while((TWSR&0xF8) != START_ACK);
	_delay_ms(100);
}
void TWI_REPEATED_START(void)
{
	SET_BIT(TWCR,5);                 // to make start condition
	SET_BIT(TWCR,7);                 // to clear flag
	while(GET_BIT(TWCR,7) == 0);
	while((TWSR&0xF8) != REP_START_ACK);
	_delay_ms(100);
}
void TWI_SEND_SLAVE_ADDRESS_WRITE(uint8 address)
{
	TWDR = (address << 1) ;
	SET_BIT(TWCR,7);                 // to clear flag
	while(GET_BIT(TWCR,7) == 0);
	while((TWSR & 0xF8) != SLAVE_AD_AND_WR_ACK);

}
void TWI_SEND_SLAVE_ADDRESS_READ(uint8 address)
{
	TWDR = ((address << 1) | (0x01));
	SET_BIT(TWCR,7);                 // to clear flag
	while(GET_BIT(TWCR,7) == 0);
	while((TWSR & 0xF8) != SLAVE_AD_AND_RD_ACK);
	_delay_ms(100);
}
void TWI_SEND_DATA(uint8 data)
{
	TWDR = data; 
	CLR_BIT(TWCR,5);               
	SET_BIT(TWCR,7);                 // to clear flag
	while(GET_BIT(TWCR,7) == 0);
	while((TWSR & 0xF8) != WR_BYTE_ACK);
	_delay_ms(100);
}
uint8   TWI_READ_DATA(void)
{
	uint8 data = 0;
	CLR_BIT(TWCR,5);   
	CLR_BIT(TWCR,4);   
	SET_BIT(TWCR,6);   
	SET_BIT(TWCR,7);                 // to clear flag
	while(GET_BIT(TWCR,7) == 0);
	while((TWSR & 0xF8) != RD_BYTE_WITH_ACK);
	_delay_ms(100);
	data = TWDR;
	return data;
}
void TWI_STOP_CONDETION(void)
{
	SET_BIT(TWCR,4);
	SET_BIT(TWCR,7);                 // to clear flag
	//while(GET_BIT(TWCR,7) == 0);  // removed this line
}