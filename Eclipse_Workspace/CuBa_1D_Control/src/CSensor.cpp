#include "CSensor.h"
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_gpio.h"
#include "stm32f4xx_hal_rcc.h"
#include "stm32f4xx_hal_i2c.h"
#include "ELowPass.h"
#include "math.h"

Int16 CSensor::getAccX1Raw()
{
	union
	{
		Int16 value = 0;
		UInt8 bytes[2];
	};
	mMPU1.readRegister(MPU6050::ACCEL_XOUT_L, bytes[0]);
	mMPU1.readRegister(MPU6050::ACCEL_XOUT_H, bytes[1]);
	return value;
}
Int16 CSensor::getAccY1Raw()
{
	union
	{
		Int16 value = 0;
		UInt8 bytes[2];
	};
	mMPU1.readRegister(MPU6050::ACCEL_YOUT_L, bytes[0]);
	mMPU1.readRegister(MPU6050::ACCEL_YOUT_H, bytes[1]);
	return value;
}
Int16 CSensor::getAccX2Raw()
{
	union
	{
		Int16 value = 0;
		UInt8 bytes[2];
	};
	mMPU2.readRegister(MPU6050::ACCEL_XOUT_L, bytes[0]);
	mMPU2.readRegister(MPU6050::ACCEL_XOUT_H, bytes[1]);
	return value;
}
Int16 CSensor::getAccY2Raw()
{
	union
	{
		Int16 value = 0;
		UInt8 bytes[2];
	};
	mMPU2.readRegister(MPU6050::ACCEL_YOUT_L, bytes[0]);
	mMPU2.readRegister(MPU6050::ACCEL_YOUT_H, bytes[1]);
	return value;
}
Int16 CSensor::getTemperature()
{
	union
	{
		Int16 value = 0;
		UInt8 bytes[2];
	};
	mMPU1.readRegister(MPU6050::TEMP_OUT_L, bytes[0]);
	mMPU1.readRegister(MPU6050::TEMP_OUT_H, bytes[1]);
	return value;
}
Int16 CSensor::getGyrZ1Raw()
{
	union
	{
		Int16 value = 0;
		UInt8 bytes[2];
	};
	mMPU1.readRegister(MPU6050::GYRO_ZOUT_L, bytes[0]);
	mMPU1.readRegister(MPU6050::GYRO_ZOUT_H, bytes[1]);
	return value;
}
Int16 CSensor::getGyrZ2Raw()
{
	union
	{
		Int16 value = 0;
		UInt8 bytes[2];
	};
	mMPU2.readRegister(MPU6050::GYRO_ZOUT_L, bytes[0]);
	mMPU2.readRegister(MPU6050::GYRO_ZOUT_H, bytes[1]);
	return value;
}
CSensor::CSensor() : mMPU1(false, mHandle),
					 	 	 	      	  	  	  	  	 mMPU2(true, mHandle)
{
	mHandle.Instance = I2C1;
	__HAL_RCC_GPIOB_CLK_ENABLE();
	__HAL_RCC_I2C1_CLK_ENABLE();

	GPIO_InitTypeDef initPort;
	initPort.Pin 		= GPIO_PIN_6 | GPIO_PIN_7;
	initPort.Mode 		= GPIO_MODE_AF_OD;
	initPort.Pull 		= GPIO_PULLUP;
	initPort.Speed 		= GPIO_SPEED_FREQ_VERY_HIGH;
	initPort.Alternate 	= GPIO_AF4_I2C1;
	HAL_GPIO_Init(GPIOB, &initPort);

	mHandle.Init.ClockSpeed 		= 400000U;
	mHandle.Init.DutyCycle 			= I2C_DUTYCYCLE_2;
	mHandle.Init.OwnAddress2 		= 0x00U;
	mHandle.Init.OwnAddress1 		= 0x00U;
	mHandle.Init.AddressingMode 	= I2C_ADDRESSINGMODE_7BIT;
	mHandle.Init.DualAddressMode 	= I2C_DUALADDRESS_DISABLE;
	mHandle.Init.GeneralCallMode 	= I2C_GENERALCALL_DISABLE;
	mHandle.Init.NoStretchMode 		= I2C_NOSTRETCH_DISABLE;
	HAL_I2C_Init(&mHandle);

	if(mMPU1.init() && mMPU2.init())
	{
		for(UInt32 counter = 0U; counter < 5U; counter++)
		{
			;
		}
	}
	mMPU1.writeRegister(MPU6050::CONFIG, static_cast<UInt8>(ELowPass::BANDWIDTH_44));
	mMPU2.writeRegister(MPU6050::CONFIG, static_cast<UInt8>(ELowPass::BANDWIDTH_44));
}
