/*
 * TWI.h
 *
 *  Author:Toby
 */ 


#ifndef TWI_H_
#define TWI_H_

#include "BIT_MATH.h"

/*_I2C_STATUS_REG_VALUES_*/
#define START_ACK                     0x08		// start has been sent
#define REP_START_ACK                 0x10		// repeated start
#define SLAVE_AD_AND_WR_ACK           0x18		// master transmit [ slave address + write request ] ACK
#define SLAVE_AD_AND_RD_ACK           0x40		// master transmit [ slave address + read  request ] ACK
#define WR_BYTE_ACK                   0x28		// master transmit data ACK
#define WR_BYTE_NACK                  0x30		// master transmit data NACK
#define RD_BYTE_WITH_ACK			  0x50		// master received data with  ACK
#define RD_BYTE_WITH_NACK			  0x58		// master received data with NACK
#define SLAVE_ADD_REC_RD_REQ		  0xA8		// slave address received with write request
#define SLAVE_ADD_REC_WR_REQ          0x60		// slave address received with read  request
#define SLAVE_DATA_REC                0x80		// read  byte request received
#define SLAVE_BYTE_TRANSMITTED        0xC0		// write byte request received




void TWI_MASTER_INIT(void);
void TWI_SLAVE_INIT(void);
void TWI_START_CONDETION(void);
void TWI_REPEATED_START(void);
void TWI_SEND_SLAVE_ADDRESS_WRITE(uint8);
void TWI_SEND_SLAVE_ADDRESS_READ(uint8);
void TWI_SEND_DATA(uint8);
uint8   TWI_READ_DATA(void);
void TWI_STOP_CONDETION(void);


#endif /* TWI_H_ */