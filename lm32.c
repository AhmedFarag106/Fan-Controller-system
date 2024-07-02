/*
 * lm32.c
 *
 *  Created on: Oct 10, 2023
 *      Author: Ahmed
 */


#include "lm32.h"

#include <util/delay.h> /* For the delay functions */

uint16 Lm35_getTemp(void)
{
	uint16 temp =0;
	;
	temp = (uint16) ( (uint32) ADC_readChannel(2)*VREF*MAX_TEMP / (NO_OF_STEPS*MAX_VOLTAGE) );
	return temp;
}
