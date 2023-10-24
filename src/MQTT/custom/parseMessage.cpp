#include <MQTT/mqtt_functions.h>
#include <MQTT/custom/custom.h>
#include <MQTT/custom/mqtt_topics.h>
#include <HWCONFIG/hwConfig.h>
#include <APPLICATION/application.h>

// What to do when a message is received
// It is invoked by mqtt_onMqttMessage()
void parseMessage(char *topic, char *payload, AsyncMqttClientMessageProperties properties, size_t len, size_t index, size_t total)
{
    // payload clean up
    // In a dynamic buffer, it extracts only the first len characters of the payload
    char *data = (char *)malloc((len + 1) * sizeof(char));
    strncpy(data, payload, len);
    // data is a C string: you have to end it with the terminator '\0'
    data[len] = '\0';

    // print some information about the received message
    printRcvMsg(topic, payload, properties, len, index, total);

    // to be customized

    // Yellow LED control
    // a message has arrived from LogoOnOffTopic
    if (strcmp(topic, subscribedTopics.get("LogoOnOffTopic").c_str()) == 0)
    {
        // Control on/off yellow LED from payload
        driveOnOffLogo(data);
    }
   
}