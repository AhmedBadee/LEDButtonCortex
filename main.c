/*
 * main.c
 */

#include "driver.h"
#include "gpio.h"

int main(void) {
	
	PortFInit();

	while (1) {

		if ( (GPIO_DATA & (1 << PF4)) != 0 ) {
			GPIO_DATA |=  (1 << PF2);
		} else {
			GPIO_DATA &= ~(1 << PF2);
		}

	}
}
