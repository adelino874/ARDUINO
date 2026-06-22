#include "SensorLED.h"

SensorLED sensorLed(13, 7); 
// LED no pino 13
// Sensor no pino 7

void setup() {
  Serial.begin(9600);
  sensorLed.iniciar();
}

void loop() {
  sensorLed.verificar();
  delay(500);
}
