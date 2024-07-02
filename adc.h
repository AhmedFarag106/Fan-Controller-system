/*
 * adc.h
 *
 *  Created on: Oct 9, 2023
 *      Author: Ahmed
 */

#ifndef ADC_H_
#define ADC_H_
#include "common_macros.h"
#include "std_types.h"
#include "avr/io.h"


#define NO_OF_STEPS 1023
#define VREF 2.56


typedef enum {
	External,Internal_5V,None,Internal_2_5V
}ADC_ReferenceVolatge;

typedef enum {
	Pre2,Pre_2,Pre_4,Pre_8,Pre_16,Pre_32,Pre_64,Pre128
}ADC_Prescaler;

typedef struct{
	ADC_ReferenceVolatge ref_volt;
	ADC_Prescaler prescaler;
}ADC_ConfigType;

void ADC_init(const ADC_ConfigType* ptr);
uint16 ADC_readChannel(uint8 ch_num);


#endif /* ADC_H_ */
