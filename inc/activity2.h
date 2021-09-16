#ifndef __ACTIVITY_2_H__
#define __ACTIVITY_2_H__
/**
 * @file activity2.h
 * @author mohansai
 * @brief Header file for activity2
 * @version 0.1
 * @date 2021-09-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>

#define SET_ADC_INTERRUPT_FLAG ADCSRA|=(1<<ADIF)

#define ADC_INTERRUPT_NOT !(ADCSRA & (1<<ADIF))

void Init_ADC();

uint16_t Read_ADC(uint8_t ch);



#endif

