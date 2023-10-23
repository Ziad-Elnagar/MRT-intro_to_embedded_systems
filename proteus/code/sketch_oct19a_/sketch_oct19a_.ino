#include <Arduino.h>

#define SENSOR_PIN A0

void setup() {
  
  Serial.begin(9600);
}

void loop() {
  
  int sensorValue = analogRead(SENSOR_PIN);

  
 float temperature = sensorValue * 5.0 / 1024.0 * 100.0; ;


  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" degrees Celsius");

  
  delay(1000);
}