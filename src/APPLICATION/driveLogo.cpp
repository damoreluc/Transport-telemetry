#include <APPLICATION/application.h>
#include <HWCONFIG/hwConfig.h>

// Control on/off Logo LED from payload
void driveOnOffLogo(char *data)
{
    if (strncmp(data, "0", 1) == 0)
    {
        digitalWrite(pinLogo, LOW);
        Serial.println("Logo LED off");
    }
    else if (strncmp(data, "1", 1) == 0)
    {
        digitalWrite(pinLogo, HIGH);
        Serial.println("Logo LED on");
    }
}