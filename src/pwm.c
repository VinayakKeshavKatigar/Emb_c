/**
 * @file pwm.c
 * @author vinayak katigar (vvkatigar1999@gmail.com)
 * @brief PWM wave according to temperature
 * @version 0.1
 * @date 2021-04-27
 *
 * @copyright Copyright (c) 2021
 *
 */

#include"pwm.h"
#include<util/delay.h>
#include<avr/io.h>

/**
 * @brief initialize timer and counter register
 *
 */

void InitPWM(void)
{
    /*Configuring the registers and ports*/
    TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11);
    TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRB|=(1<<PB1);

}

/**
 * @brief Analog input coverted in digital ADC is used optain that
 *
 * @param ticks
 */
void pwm (uint16_t ticks)
{


    if((ticks>=0) && (ticks<=103))
        {

        OCR1A = 103; //10% duty cycle

        _delay_ms(20);
    }
    else if((ticks>=104) && (ticks<=205))
        {

        OCR1A = 205; //20% duty cycle

       _delay_ms(20);
    }
    else if((ticks>=206) && (ticks<=308))
        {

        OCR1A = 308;//30% duty cycle

        _delay_ms(20);
    }
    else if((ticks>=309) && (ticks<=410))
        {

        OCR1A = 410; //40% duty cycle

        _delay_ms(20);
    }
    else if((ticks>=411) && (ticks<=512))
        {

        OCR1A = 512; //50% duty cycle

        _delay_ms(20);
    }
    else if((ticks>=513) && (ticks<=615))
        {

        OCR1A = 615; //60% duty cycle

        _delay_ms(20);
    }
    else if((ticks>=616) && (ticks<=717))
        {

        OCR1A = 717; //70% duty cycle

        _delay_ms(20);
    }
    else if((ticks>=718) && (ticks<=820))
        {

        OCR1A = 820; //80% duty cycle

        _delay_ms(20);
    }
    else if((ticks>=821) && (ticks<=922))
        {

        OCR1A = 922; //90% duty cycle

        _delay_ms(20);
    }
    else if((ticks>=923) && (ticks<=1024))
        {

        OCR1A = 1024; //100% duty cycle

        _delay_ms(20);
    }
    else
    {
        OCR1A = 0; //0% output

    }
}

