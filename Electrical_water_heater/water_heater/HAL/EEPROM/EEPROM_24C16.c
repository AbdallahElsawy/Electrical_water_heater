/*
 * EEPROM_24C16.c
 *
 *  Author:Toby
  */ 

#include "main.h"

void EEPROM_24C16_INIT(void)
{
	TWI_MASTER_INIT();
	
}
void EEPROM_24C16_WRITE(uint8 byte_address,uint8 data)
{
	TWI_START_CONDETION();
	TWI_SEND_SLAVE_ADDRESS_WRITE(0x50);   // 0x50 = 0101 0000 
	TWI_SEND_DATA(byte_address);
	TWI_SEND_DATA(data);
	TWI_STOP_CONDETION();
	_delay_ms(10);
}
uint8   EEPROM_24C16_READ(uint8 byte_address)
{
	uint8 data = 0;
	TWI_START_CONDETION();
	TWI_SEND_SLAVE_ADDRESS_WRITE(0x50);
	TWI_SEND_DATA(byte_address);
	TWI_REPEATED_START();
	TWI_SEND_SLAVE_ADDRESS_READ(0x50);
	data = TWI_READ_DATA();
	TWI_STOP_CONDETION();
	return data;
}