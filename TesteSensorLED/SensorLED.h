S#ifndef SENSORLED_H
#define SENSORLED_H

#include <Arduino.h>

class SensorLED {
  private:
    int pinoLED;
    int pinoSensor;

  public:
    SensorLED(int led, int sensor) {
      pinoLED = led;
      pinoSensor = sensor;
    }

    void iniciar() {
      pinMode(pinoLED, OUTPUT);
      pinMode(pinoSensor, INPUT_PULLUP);
    }

    void verificar() {
      int valor = digitalRead(pinoSensor);

      Serial.print("Valor do sensor: ");
      Serial.println(valor);

      if (valor == LOW) {
        digitalWrite(pinoLED, HIGH);
        Serial.println("Sensor ativado - LED ligado");
      } else {
        digitalWrite(pinoLED, LOW);
        Serial.println("Sensor desativado - LED desligado");
      }
    }
};

#endif
