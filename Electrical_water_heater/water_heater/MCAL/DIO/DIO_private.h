/*
 * DIO_private.h
 *
 * Created: 12/2/2022 7:46:02 PM
 *  Author:Toby
  */ 


#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_
#include "main.h"
#include "DIO_Configration.h"

void DIO_Direction(DIO_Port port,DIO_Pin pin,DIO_State state);
void DIO_value(DIO_Port port,DIO_Pin pin ,DIO_Status status);
void DIO_TGL(DIO_Port port,DIO_Pin pin );
uint8 DIO_Read(DIO_Port port,DIO_Pin pin );




#endif /* DIO_PRIVATE_H_ */