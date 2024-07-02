# Fan Controller Project

This project aims to implement a temperature-controlled fan using the ATmega32 microcontroller. The fan will automatically turn on or off based on the temperature readings. The project specifications and requirements are as follows:

## System Requirements

1. Microcontroller: ATmega32 with a frequency of 1 MHz.

2. Temperature Sensor: LM35, which provides continuous analog output corresponding to the sensed temperature.

3. Analog-to-Digital Converter (ADC): Converts analog temperature values to digital values.

4. LCD Display: Displays the temperature readings and fan state.

5. Fan Control Logic:
   - If the temperature is less than 30°C, the fan should be turned off.
   - If the temperature is greater than or equal to 30°C, the fan should run at 25% of its maximum speed.
   - If the temperature is greater than or equal to 60°C, the fan should run at 50% of its maximum speed.
   - If the temperature is greater than or equal to 90°C, the fan should run at 75% of its maximum speed.
   - If the temperature is greater than or equal to 120°C, the fan should run at its maximum speed.

6. Circuit Principle: The fan connected to a DC motor will be switched on/off based on the temperature value. The DC motor will rotate clockwise or stop based on the fan state.

7. Layered Architecture: The project should be implemented based on the layered architecture model.
# Conclusion
In conclusion, the Fan Controller Project aims to design a temperature-controlled fan using the ATmega32 microcontroller. The project utilizes various drivers and components such as the ADC driver, GPIO driver, LCD driver, Temperature Sensor driver, DC-Motor driver, and PWM driver. The system continuously monitors the temperature using the LM35 sensor, converts the analog temperature values to digital using the ADC, performs calculations to determine the fan state, and displays the temperature and fan state on an LCD display. The DC-Motor driver controls the fan's speed based on the temperature thresholds, and the PWM driver generates the required PWM signal for controlling the motor speed. The project follows a layered architecture model and provides step-by-step instructions for each driver's implementation.
