/*
 * servo.h
 *
 *  Created on: Feb 11, 2014
 *      Author: Anthony
 */

#ifndef SERVO_H_
#define SERVO_H_

#include "services/pwm.h"
#include <stdbool.h>

#define PERIOD 22000 // Number of clock ticks required for 50Hz @ ~1.1MHz
#define MIN_DUTY 1100
#define MAX_DUTY 2200

void servo_init(void);

bool servo_update(uint16_t position);

#endif /* SERVO_H_ */
