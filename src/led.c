

/**
 * @file led.c
 * @author vinayak katigar (vvkatigar1999@gmail.com)
 * @brief led state Changes with two switch
 * @version 0.1
 * @date 2021-04-23
 *
 * @copyright Copyright (c) 2021
 *
 */
// include files
#include<avr/io.h>
#include "led.h"
/**
 * @brief Change the state of the LED Pin according to the value of state
 *
 * @param state Pin level to which the LED Pin should be set
 */
void led(uint8_t state)
{
	LED_PORT = (state << LED_PIN); //States LED pin is ON or OFF
}
void InitLED(void)
{
    DDRB|=(1<<PB0);
    DDRD&=~(1<<PD0);//clearing the port D0
    PORTD|=(1<<PD0);
    DDRD&=~(1<<PD1);//clearing the port D1
    PORTD|=(1<<PD1);
}
