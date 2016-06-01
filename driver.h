/*
 * driver.h
 *
 *  Created on: Jun 1, 2016
 *      Author: ahmed
 */

#ifndef DRIVER_H_
#define DRIVER_H_

#define GPIO_CLOCK                  (*((volatile unsigned long *) 0x400FE108))            // Run Mode Clock
#define GPIO_DATA                   (*((volatile unsigned long *) 0x400253FC))			  // Data
#define GPIO_DIR                    (*((volatile unsigned long *) 0x40025400))			  // Direction
#define GPIO_Alt_Fun                (*((volatile unsigned long *) 0x40025420))            // Alternate Function
#define GPIO_DRIVE                  (*((volatile unsigned long *) 0x40025500))            // 2-mA Drive
#define GPIO_PULL_UP                (*((volatile unsigned long *) 0x40025510))            // Pull Up
#define GPIO_PULL_DOWN              (*((volatile unsigned long *) 0x40025514))            // Pull Dpwn
#define GPIO_EN                     (*((volatile unsigned long *) 0x4002551C))            // Digital Enable
#define GPIO_LOCK                   (*((volatile unsigned long *) 0x40025520))            // Lock
#define GPIO_COMMIT                 (*((volatile unsigned long *) 0x40025524))            // Commit

#define PORTF_CLOCK                 5

#define PF0                         0                                                     // Port F - Pin 0
#define PF1                         1                                                     // Port F - Pin 1
#define PF2                         2                                                     // Port F - Pin 2
#define PF3                         3                                                     // Port F - Pin 3
#define PF4                         4                                                     // Port F - Pin 4

#endif /* DRIVER_H_ */
