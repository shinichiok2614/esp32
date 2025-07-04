#include <Arduino.h>
#include <WiFi.h>
const char* ssid ="x1";
const char* password="12345678";
void setup(){
  Serial.begin(9600);
  Serial.print("Connect to wifi ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status()!=WL_CONNECTED){
    Serial.print(".");
    delay(100);
  }
  Serial.println("Connected");
  Serial.print("IP adress: ");
  Serial.println(WiFi.localIP());
}
void loop(){
}