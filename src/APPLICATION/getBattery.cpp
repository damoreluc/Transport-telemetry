#include <APPLICATION/application.h>
#include <HWCONFIG/hwConfig.h>

// get battery voltage
float getBatteryVoltage()
{
    // ADC raw readings
    uint16_t nAdc = analogRead(pinBattery);
   
    float batteryVoltage = (float)map(nAdc, nADCLow, nADCHigh, vBatteryLow, vBatteryHigh) / 1000.0;

    return(batteryVoltage);
}