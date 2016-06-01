/*
 * gpio.c
 *
 *  Created on: Jun 1, 2016
 *      Author: ahmed
 */

#include "driver.h"
#include "gpio.h"

void PortFInit() {
	GPIO_CLOCK        |=  (1 << PORTF_CLOCK);
	GPIO_LOCK          =  0x4C4F434B;
	GPIO_COMMIT       |=  (1 << PF4) |  (1 << PF1);
	GPIO_DIR          |=  (1 << PF1) |  (1 << PF2) |  (1 << PF3);
	GPIO_DIR          &= ~(1 << PF4) & ~(1 << PF0);
	GPIO_Alt_Fun      &= ~(1 << PF4) & ~(1 << PF1);
	GPIO_DRIVE        |=  (1 << PF4) |  (1 << PF1);
	GPIO_PULL_UP      |=  (1 << PF4) |  (1 << PF3) | (1 << PF2) | (1 << PF1) | (1 << PF0);
	GPIO_EN           |=  (1 << PF4) |  (1 << PF3) | (1 << PF2) | (1 << PF1) | (1 << PF0);
}
