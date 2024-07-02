/*
 * lm32.h
 *
 *  Created on: Oct 10, 2023
 *      Author: Ahmed
 */

#ifndef LM32_H_
#define LM32_H_

#include "std_types.h"

#include "common_macros.h"
#include "adc.h"

#define RESULUTION 0.01
#define MAX_TEMP 150
#define MAX_VOLTAGE 1.5
uint16 Lm35_getTemp(void);


#endif /* LM32_H_ */
