#include <MQTT/custom/mqtt_topics.h>

// Dictionary of subscribed topics (ESP32 incoming topic)
Dictionary<String, String> subscribedTopics = Dictionary<String, String>();

// Dictionary of published topics (topic coming out of ESP32)
Dictionary<String, String> publishedTopics = Dictionary<String, String>();

// Compile the dictionary of subscribed topics (to be customized)
void compileSubTopics(Dictionary<String, String> &subTopics) {
  // Logo LED control subscribed topic  
  subTopics.set("LogoOnOffTopic", thisClient "/LogoTopic");
}

// Compile the dictionary of published topics (to be customized)
void compilePubTopics(Dictionary<String, String> &pubTopics) {
  // Message Publishing Topic
  pubTopics.set("Battery", thisClient "/Battery");  
  pubTopics.set("Motor1", thisClient "/Motor1");
  pubTopics.set("Motor2", thisClient "/Motor2");
  pubTopics.set("Motor3", thisClient "/Motor3");
  pubTopics.set("Motor4", thisClient "/Motor4");  
}