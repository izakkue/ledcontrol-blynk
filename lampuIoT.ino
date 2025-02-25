#define BLYNK_TEMPLATE_ID "TMPL6_NT3OMF-"
#define BLYNK_TEMPLATE_NAME "Lampu IoT"
#define BLYNK_AUTH_TOKEN "h94N6hHLxPZIEAAZy_wtfrSHY2_WVl6q"

#define red 5
#define BLYNK_PRINT Serial
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>


char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "ALFAZA";
char pass[] = "bukawifi";


BLYNK_WRITE(V0) {
  int value = param.asInt();
  if (value) {
    digitalWrite(red, HIGH);
  } else {
    digitalWrite(red, LOW);
  }
}


void setup() {
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
  delay(3000);  //For stabilize systems
}

void loop() {
  Blynk.run();
}
