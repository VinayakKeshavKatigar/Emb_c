/**
 * @file project_main.c
 * @author Vinayak katigar (vvkatigar1999@gmail.com@gmail.com)
 * @brief Project to Blink an LED only when heat button is on and passenger is seated
 * @version 0.1
 * @date 2021-04-23
 *
 * @copyright Copyright (c) 2021
 *
 */
#include "project_config.h"

#include "user_utils.h"
#include "blinky.h"

#include <avr/io.h>
#include<util/delay.h>


/**
 * @brief Initialize all the Peripherals and pin configurations
 *
 */
void peripheral_init(void)
{
	/* Configure LED Pin */
	DDRB |= (1 << DDB0);
}

void change_led_state(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}


/**
 * @brief Main function where the code execution starts
 *
 * @return int Return 0 if the program completes successfully
 * @note PORTD0 is in sink config. i.e when switch is pressed
 * @note PORTB0 is in sink config. i.e LED is turned ON
 * @note PORTD0 is in sink config. i.e when switch is released
 * @note PORTB0 is in sink config. i.e LED is turned OFF
 */

int main(void)
{

DDRB|=(1<<PB0); // set B0=1 for lead

DDRD&=~(1<<PD0); // clear bit

PORTD|=(1<<PD0);

    while(1)
    {
        if(!(PIND&(1<<PD0))) //switch press
        {
        PORTB|=(1<<PB0);
        _delay_ms(20);
        }

        else
        {
        PORTB&=~(1<<PB0);
        _delay_ms(20);

        }
       /* PORTB|=(1<<PB0);
        _delay_ms(10000);
        PORTB&=~(1<<PB0);
        _delay_ms(2000);*/
    }


    return 0;
}




