/*
 * adc.c
 *
 *  Created on: Oct 9, 2023
 *      Author: Ahmed
 */

#include "adc.h"



void ADC_init(const ADC_ConfigType* ptr)
{
	ADMUX = ((ptr->ref_volt) << 6);

	SET_BIT(ADCSRA,ADEN);
	CLEAR_BIT(ADCSRA,ADIE);

	ADCSRA = (ADCSRA & 0xF8) | ((ptr->prescaler) & 0x07);

}


uint16 ADC_readChannel(uint8 ch_num)
{
	ADMUX = (ADMUX&0xE0) | (ch_num & 0x1F);

	SET_BIT(ADCSRA,ADSC);

	while(BIT_IS_CLEAR(ADCSRA,ADIF));

	SET_BIT(ADCSRA,ADIF);

	return ADC;
}
