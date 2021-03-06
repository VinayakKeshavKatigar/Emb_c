/**
 * @file main.c
 * @author vinayak katigar (vvkatigar19992gmail.com)
 * @brief Main file
 * @version 0.1
 * @date 2021-04-23
 *
 * @copyright Copyright (c) 2021
 *
 */

#include<avr/io.h>

#include "led.h"
#include "adc.h"
#include "pwm.h"
#include "uart.h"



/**
 * @brief Initialize all the peripherals
 *
 */

void peripheral_init(void)
{
    /* LED and Switch pins */
    InitLED();
    /* ADC registers and pins */
    InitADC();
    /* PWM registers and pins */
    InitPWM();
    /* UART serial communication pins */
    InitUART(103);
}

uint16_t temp;
char temp_data;

int main(void)
{

    peripheral_init();
    while(1)
    {
        if(SWITCH_1_ON) //If switch_1 is ON
        {
            
            if(SWITCH_2_ON) //If switch_2 is ON
            {
                led(LED_ON);//LED is ON
                temp=adc(0);
                pwm(temp);
                UARTwrite(temp_data);
            }

            else

            {

                led(LED_OFF);
            }
            
        }

        else
        {
            led(LED_OFF);//LED is OFF
            OCR1A=0;
        }

    }

    return 0;
}
