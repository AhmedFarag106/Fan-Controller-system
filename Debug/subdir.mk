################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DCmotor.c \
../PWM.c \
../adc.c \
../app.c \
../gpio.c \
../lcd.c \
../lm32.c 

OBJS += \
./DCmotor.o \
./PWM.o \
./adc.o \
./app.o \
./gpio.o \
./lcd.o \
./lm32.o 

C_DEPS += \
./DCmotor.d \
./PWM.d \
./adc.d \
./app.d \
./gpio.d \
./lcd.d \
./lm32.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


