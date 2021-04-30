/**
 * @file led.h
 * @author vinayak katigar (vvkatigar1999@gmail.com)
 * @brief Activity_1
 * @version 0.1
 * @date 2021-04-24
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef __LED_H_
#define __LED_H_


/**
 * Include files
 */
#include <avr/io.h>
#include "led.h"

//Macro definition

#define LED_ON 	(0x01)	/**< HIGH */
#define LED_OFF	(0x00)	/**< LOW */


#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB0)   /**< LED Pin number  */
#define SWITCH_1_ON !(PIND&(1<<PD0)) // Switch1 ON
#define SWITCH_2_ON !(PIND&(1<<PD1)) // Switch2 ON

/**
 * Function Definitions
 */

/**
 * @brief Change the state of the LED Pin according to the value of state
 *
 * @param state Pin level to which the LED Pin should be set
 */
void led(uint8_t state);
void InitLED(void);

#endif /** __LED_H_ */
