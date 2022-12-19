/*
 * BUZZER.c
 *
 * Created: 12/19/2022 8:54:39 PM
 *  Author: seif eldin
 */ 

#include"BUZZER.H"
void Buzzer_init(void){
	DIO_ConfigChannel(DIO_PORTA,DIO_PIN3,OUTPUT);
}
void Buzzer_ON(){
	DIO_WriteChannel(DIO_PORTA,DIO_PIN3,STD_HIGH);
}
void Buzzer_OFF(){
	DIO_WriteChannel(DIO_PORTA,DIO_PIN3,STD_LOW);
}
void Buzzer_TOGGLE(){
	if(ReadChannel(DIO_PORTA,DIO_PIN3)==STD_HIGH){
		DIO_WriteChannel(DIO_PORTA,DIO_PIN3,STD_LOW);
	}
	else
	DIO_WriteChannel(DIO_PORTA,DIO_PIN3,STD_HIGH);
}
