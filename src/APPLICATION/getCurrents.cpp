#include <APPLICATION/application.h>
#include <HWCONFIG/hwConfig.h>

// get motors current
void getMotorsCurrent(tMotorCurrents &currents)
{
    // ADC raw readings
    uint16_t nAdc1 = analogRead(pinMotor1);
    uint16_t nAdc2 = analogRead(pinMotor2);
    uint16_t nAdc3 = analogRead(pinMotor3);
    uint16_t nAdc4 = analogRead(pinMotor4);

    currents.Im1 = (float)map(nAdc1, nADCLow, nADCHigh, iMotorLow, iMotorHigh) / 1000.0;
    currents.Im2 = (float)map(nAdc2, nADCLow, nADCHigh, iMotorLow, iMotorHigh) / 1000.0;
    currents.Im3 = (float)map(nAdc3, nADCLow, nADCHigh, iMotorLow, iMotorHigh) / 1000.0;
    currents.Im4 = (float)map(nAdc4, nADCLow, nADCHigh, iMotorLow, iMotorHigh) / 1000.0;
}