// Autor: Michael Meindl
// Datum: 28.07.2016
// Funktionen zur Initialisierung und Auslesen der Sensoren
#ifndef MPU6050_H
#define MPU6050_H
#include "Global.h"
#include "ELowPass.h"

bool initMPU6050(bool AD0pinLevel, ELowPass lowPassConfig);
Int16 readMPU6050_XAcceleration(bool AD0pinLevel);
Int16 readMPU6050_YAcceleration(bool AD0pinLevel);
Int16 readMPU6050_ZAcceleration(bool AD0pinLevel);
Int16 readMPU6050_XGyroscope(bool AD0pinLevel);
Int16 readMPU6050_YGyroscope(bool AD0pinLevel);
Int16 readMPU6050_ZGyroscope(bool AD0pinLevel);

#define SELF_TEST_X 	 	((UInt8)13U)
#define SELF_TEST_Y		 	((UInt8)14U)
#define SELF_TEST_Z		 	((UInt8)15U)
#define SELF_TEST_A 	 	((UInt8)16U)
#define SIMPLRT_DIV 	 	((UInt8)25U)
#define CONFIG			 	((UInt8)26U)
#define GYRO_CONFIG 	 	((UInt8)27U)
#define ACCEL_CONFIG	 	((UInt8)28U)
#define FIFO_EN			 	((UInt8)35U)
#define I2C_MST_CTRL	 	((UInt8)36U)
#define I2C_SLV0_ADDR    	((UInt8)37U)
#define I2C_SLV0_REG	 	((UInt8)38U)
#define I2C_SLV0_CTRL    	((UInt8)39U)
#define I2C_SLV1_ADDR    	((UInt8)40U)
#define I2C_SLV1_REG	 	((UInt8)41U)
#define I2C_SLV1_CTRL    	((UInt8)42U)
#define I2C_SLV2_ADDR    	((UInt8)43U)
#define I2C_SLV2_REG	 	((UInt8)44U)
#define I2C_SLV2_CTRL    	((UInt8)45U)
#define I2C_SLV3_ADDR    	((UInt8)46U)
#define I2C_SLV3_REG	 	((UInt8)47U)
#define I2C_SLV3_CTRL    	((UInt8)48U)
#define I2C_SLV4_ADDR    	((UInt8)49U)
#define I2C_SLV4_REG	 	((UInt8)50U)
#define I2C_SLV4_DO		 	((UInt8)51U)
#define I2C_SLV4_CTRL    	((UInt8)52U)
#define I2C_SLV4_DI		 	((UInt8)53U)
#define I2C_MST_STATUS   	((UInt8)54U)
#define INT_PIN_CFG		 	((UInt8)55U)
#define INT_ENABLE		 	((UInt8)56U)
#define INT_STATUS		 	((UInt8)58U)
#define ACCEL_XOUT_H	 	((UInt8)59U)
#define ACCEL_XOUT_L	 	((UInt8)60U)
#define ACCEL_YOUT_H	 	((UInt8)61U)
#define ACCEL_YOUT_L	 	((UInt8)62U)
#define ACCEL_ZOUT_H	 	((UInt8)63U)
#define ACCEL_ZOUT_L	 	((UInt8)64U)
#define TEMP_OUT_H		 	((UInt8)65U)
#define TEMP_OUT_L		 	((UInt8)66U)
#define GYRO_XOUT_H		 	((UInt8)67U)
#define GYRO_XOUT_L		 	((UInt8)68U)
#define GYRO_YOUT_H		 	((UInt8)69U)
#define GYRO_YOUT_L		 	((UInt8)70U)
#define GYRO_ZOUT_H		 	((UInt8)71U)
#define GYRO_ZOUT_L		 	((UInt8)72U)
#define EXT_SENS_DATA_00 	((UInt8)73U)
#define EXT_SENS_DATA_01 	((UInt8)74U)
#define EXT_SENS_DATA_02 	((UInt8)75U)
#define EXT_SENS_DATA_03 	((UInt8)76U)
#define EXT_SENS_DATA_04 	((UInt8)77U)
#define EXT_SENS_DATA_05 	((UInt8)78U)
#define EXT_SENS_DATA_06 	((UInt8)79U)
#define EXT_SENS_DATA_07 	((UInt8)80U)
#define EXT_SENS_DATA_08 	((UInt8)81U)
#define EXT_SENS_DATA_09 	((UInt8)82U)
#define EXT_SENS_DATA_10 	((UInt8)83U)
#define EXT_SENS_DATA_11 	((UInt8)84U)
#define EXT_SENS_DATA_12 	((UInt8)85U)
#define EXT_SENS_DATA_13 	((UInt8)86U)
#define EXT_SENS_DATA_14 	((UInt8)87U)
#define EXT_SENS_DATA_15 	((UInt8)88U)
#define EXT_SENS_DATA_16 	((UInt8)89U)
#define EXT_SENS_DATA_17 	((UInt8)90U)
#define EXT_SENS_DATA_18 	((UInt8)91U)
#define EXT_SENS_DATA_19 	((UInt8)92U)
#define EXT_SENS_DATA_20 	((UInt8)93U)
#define EXT_SENS_DATA_21 	((UInt8)94U)
#define EXT_SENS_DATA_22 	((UInt8)95U)
#define EXT_SENS_DATA_23 	((UInt8)96U)
#define I2C_SLV0_DO		 	((UInt8)99U)
#define I2C_SLV1_DO		 	((UInt8)100U)
#define I2C_SLV2_DO		 	((UInt8)101U)
#define I2C_SLV3_DO		 	((UInt8)102U)
#define I2C_MST_DELAY_CTRL 	((UInt8)103U)
#define SIGNAL_PATH_RESET 	((UInt8)104U)
#define USER_CTRL			((UInt8)106U)
#define PWR_MGMT_1			((UInt8)107U)
#define PWR_MGMT_2			((UInt8)108U)
#define FIFO_COUNTH			((UInt8)114U)
#define	FIFO_COUNTL			((UInt8)115U)
#define FIFO_R_W			((UInt8)116U)
#define WHO_AM_I			((UInt8)117U)

#endif
