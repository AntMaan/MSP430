/*
 * pwm.c
 *
 *  Created on: Feb 11, 2014
 *      Author: Anthony
 */


#include "pwm.h"

void pwm_init(uint16_t period){

	P1DIR |= BIT2;  // Set P1.2 to ouput

	P1SEL |= BIT2; 	// Set P1.2 function to primary peripheral mode - Timer A Compare 1

	TACTL |= TASSEL_2 + MC_1;  // Sets TimerA Control - SMCLK, No Prescaler, Up Mode

	TACCTL1 |= OUTMOD_7;  // Sets TimerA0 Control - Reset/Set

	/*Note: Period is not actual period in seconds. It is the register count required to
	create a period of what you want*/
	TACCR0 = period;	// Set counter "top" to period

	TACCR1 = 0;		//Start the duty cycle at 0
}

void pwm_updateDuty(uint16_t duty){

	/*Note: duty is not actual period in seconds. It is the register count required to
	create a period of what you want*/
	TACCR1 = duty;  // Set the compare register to the new duty level

}




