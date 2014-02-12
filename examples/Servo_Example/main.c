#include <msp430.h> 
#include <stdint.h>
#include <stdbool.h>

#include "drivers/servo.h"

/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    servo_init();

    uint16_t position;

    while(1)
    {
		for(position=1100; position < 2200; position ++){
			servo_update(position);
		}
    }
	
	return 0;
}
