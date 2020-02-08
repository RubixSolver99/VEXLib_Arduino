#include <Arduino.h>

class VexPotentiometer {
  int pin;

  public:
    VexPotentiometer(int uPin) {
      pin = uPin;
    }

    void init() {
      
    }

    int read() {
      return analogRead(pin);
    }
};
