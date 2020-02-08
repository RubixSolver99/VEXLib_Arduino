#include <Arduino.h>

class VexLightSensor {
  int pin;

  public:
    VexLightSensor(int uPin) {
      pin = uPin;
    }

    void init() {
      
    }

    int read() {
      return analogRead(pin);
    }
};
