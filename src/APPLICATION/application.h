#ifndef _APPLICATION_H
#define _APPLICATION_H

#include <Arduino.h>

// update period in ms
const uint32_t updatePeriod = 500;

// ADC lower count
const int16_t nADCLow = 0;
// ADC higher count
const int16_t nADCHigh = 4095;

// Battery lower level in mV
const int32_t vBatteryLow = 0;
// Battery higher level in mV
const int32_t vBatteryHigh = 13000;

// Motor current lower level in mA
const int32_t iMotorLow = 0;
// Motor current lower level in mA
const int32_t iMotorHigh = 5000;


// custom data type for motor currents
typedef struct {
    float Im1;
    float Im2;
    float Im3;
    float Im4;
} tMotorCurrents;

// global variable with motor currents
extern tMotorCurrents motorCurrents;

// global variable with battery level
extern float batteryLevel;

// Control on/off the Logo LED from payload
void driveOnOffLogo(char* data);
// get battery voltage
float getBatteryVoltage();
// get motors current
void getMotorsCurrent(tMotorCurrents &currents);

#endif