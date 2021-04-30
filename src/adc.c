/**
 * @file adc.c
 * @author vinayak katigar (vvkatigar1999@gmail.com)
 * @brief for Activit2, Adc potentiometer is used for as an sensor
 * @version 0.1
 * @date 2021-04-25
 *
 * @copyright Copyright (c) 2021
 *
 */
#include<avr/io.h>
#include "adc.h"

uint16_t adc(uint8_t ch)
{
    //Select ADC Channel ch must be 0-7
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;
    //Start single conversion
    ADCSRA|=(1<<ADSC);
    //Wait for conversion to complete
    while(!(ADCSRA & (1<<ADIF)));
    //Clear ADIF by writing one to it
    ADCSRA|=(1<<ADIF);
    return(ADC);
}
void InitADC()
{
    ADMUX=(1<<REFS0);
    ADCSRA=(1<<ADEN)|(7<<ADPS0);

}
