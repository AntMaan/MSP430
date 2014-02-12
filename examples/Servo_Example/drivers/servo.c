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

	if (position < MIN_DUTY){
		pwm_updateDuty(MIN_DUTY);  // Only update to lower limit
		return false;
	}
	else if (position > MAX_DUTY){
		pwm_updateDuty(MAX_DUTY);  // Only update to upper limit
		return false;
	}
	else{
		pwm_updateDuty(position);  // Update to desired position
		return true;
	}
}
