/*
 * ULTRASONIC.h
 *
 * Created: 12/19/2022 8:56:55 PM
 *  Author: seif eldin
 */ 


#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_
#include"Dioo.h"
#include"STD.h"
#include"timer.h"
#include"delay.h"
#define TRIG  (0)  //The TRIG PIN
#define ECHO  (1) //The Echo PIN
void UltraSonic_init(void);
f64 GET_Distance(void);


#endif /* ULTRASONIC_H_ */
