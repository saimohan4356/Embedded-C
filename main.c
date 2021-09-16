/**
 * @file ActivityOne.c
 * @author mohansai
 * @brief Activity one of embedded systems
 * @version 0.1
 * @date 2021-09-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"


int main(void)
{
    led_init();
    Init_ADC();
    TimerWave();
    UARTinit(103); 
    uint16_t temp;
    // Insert code

while(1)
    {
       if(BUTTON_SENSOR_ON) //Checking if the input bit to 7th bit of pinB is made 0 from 1 by pressing led
        {

            if(HEATER_ON) //Checking if the input bit to 6th bit of pinB is made 0 from 1 by pressing led
            {
                _delay_ms(20);
                SET_LED; //make 0th bit of port B as 1, makes led glow
                temp = Read_ADC(0);
                outputPWM(temp);
                _delay_ms(20);

            }
            else
            {
                _delay_ms(20);
                OCR1A = 0; //make PWM output 0 if switch is off
                CLEAR_LED; // make led off
            }
        }
        else
        {
                CLEAR_LED; //make led off
                OCR1A = 0; //make PWM output 0 if both switches are off
                _delay_ms(20);
        }
    }

 return 0;
}