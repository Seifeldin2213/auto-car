/*
 * TIMER.c
 *
 * Created: 12/19/2022 6:59:22 PM
 *  Author: seif eldin
 */ 
#include"timer.h"

void Timmer_init(void){
	TIMER_TCNT0_REG=0x00;
	TIMER_TIMSK_REG|=(1<<0);
	TIMER_TCCR0_REG|=(0<<3);
	TIMER_TCCR0_REG|=5;
}

