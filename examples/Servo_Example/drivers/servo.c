/*
 * servo.c
 *
 *  Created on: Feb 11, 2014
 *      Author: Anthony
 */


#include "servo.h"

void servo_init(){
	pwm_init(PERIOD); //Initialize PWM module with period of ~20ms
}

bool servo_update(uint16_t position){

	if (position < 1100){
		pwm_updateDuty(1100);  // Only update to lower limit
		return false;
	}
	else if (position > 2200){
		pwm_updateDuty(2200);  // Only update to upper limit
		return false;
	}
	else{
		pwm_updateDuty(position);  // Update to desired position
		return true;
	}
}
