//27.8.2016, Michael Meindl
//Definitions to control the STM-Hardware
#include "CSTMHardware.h"
#include "CSensor.h"
#include "Cmotor_control.h"
#include "Cservo_control.h"

Int16 CSTMHardware::getX1__dd_raw()
{
	return mSensor.getAccX1Raw();
}
Int16 CSTMHardware::getX2__dd_raw()
{
	return mSensor.getAccX2Raw();
}
Int16 CSTMHardware::getY1__dd_raw()
{
	return mSensor.getAccY1Raw();
}
Int16 CSTMHardware::getY2__dd_raw()
{
	return mSensor.getAccY2Raw();
}
Int16 CSTMHardware::getPhi1__d_raw()
{
	return mSensor.getGyrZ1Raw();
}
Int16 CSTMHardware::getPhi2__d_raw()
{
	return mSensor.getGyrZ2Raw();
}
UInt16 CSTMHardware::getPsi__d_raw()
{
	return mMotor.getVelocity();
}
void CSTMHardware::openBrake()
{
	mServo.set_brake_open();
}
void CSTMHardware::closeBrake()
{
	mServo.set_brake_close();
}
void CSTMHardware::enableMotor()
{
	mMotor.set_turn_on();
}
void CSTMHardware::disableMotor()
{
	mMotor.set_turn_off();
}
void CSTMHardware::setTorque(const float torque)
{
	mMotor.set_torque(torque*1000000.0F);
}
