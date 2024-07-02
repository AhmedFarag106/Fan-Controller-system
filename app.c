/*
 * app.c
 *
 *  Created on: Oct 13, 2023
 *      Author: Ahmed
 */

#include "common_macros.h"
#include "std_types.h"

#include "lm32.h"
#include "lcd.h"
#include "DCmotor.h"


#include "adc.h"
#include "PWM.h"


int main(void)
{
	uint16 Temp=0;

	ADC_ConfigType my_Config = {Internal_2_5V,Pre_8};
	ADC_init(&my_Config);

	Timer0_PWM_Init(LOGIC_LOW);

	LCD_init();

	DcMotor_Init();


	while(1)
	{
		Temp = Lm35_getTemp();

		if (Temp < 30)
		{
			DcMotor_Rotate(STOP,0);
		}

		else if (Temp < 60)
		{
			DcMotor_Rotate(CW,25);
		}

		else if (Temp < 90)
		{
			DcMotor_Rotate(CW,50);
		}

		else if (Temp < 120)
		{
			DcMotor_Rotate(CW,75);
		}

		else if (Temp > 120)
		{
			DcMotor_Rotate(CW,100 	);
		}

		LCD_moveCursor(0,3);
		LCD_displayString("FAN IS ");

		if (Temp >30) LCD_displayString("ON ");
		else LCD_displayString("OFF");

		LCD_moveCursor(1,3);
		LCD_displayString("TEMP = ");

		if (Temp > 99)
			LCD_intgerToString(Temp);


		else
		{
			LCD_intgerToString(Temp);
			LCD_displayCharacter(' ');
		}

		LCD_displayString(" C");


	}



	return 0;
}
