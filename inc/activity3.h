#ifndef __ACTIVITY_3_H__
#define __ACTIVITY_3_H__
/**
 * @file activity3.h
 * @author mohansai
 * @brief Header file for activity3
 * @version 0.1
 * @date 2021-09-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>


/**
 * @brief A function to setup timer1 with channel A for pulse width modulation with wave generation mode of PWM.
 * 
 */
void TimerWave(void);

/**
 * @brief A function which receives ADC input from temperature sensor and outputs as a PWM waveform.
 * 
 * @param ADC_val 
 */
void outputPWM(uint16_t ADC_val);

#endif