/*
 * pwm.h
 *
 *  Created on: Feb 11, 2014
 *      Author: Anthony
 */

#ifndef PWM_H_
#define PWM_H_

#include <stdint.h>
#include <msp430.h>

void pwm_init(uint16_t period);

void pwm_updateDuty(uint16_t duty);

#endif /* PWM_H_ */
