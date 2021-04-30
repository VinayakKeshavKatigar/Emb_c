/**
 * @file pwm.h
 * @author vinayak katigar (vvkatigar1999@gmail.com)
 * @brief Display the output of the temperature sensor
 * @version 0.1
 * @date 2021-04-29
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef __PWM_H__
#define __PWM_H__
#include<avr/io.h>

/**
 * @brief Function definition
 *
 * @param temp_value
 */

void pwm(uint16_t temp_value);
void InitPWM(void);
#endif
