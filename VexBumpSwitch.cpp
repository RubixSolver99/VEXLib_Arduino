#include <Arduino.h>

class VexBumpSwitch {
  int pin;

  public:
    VexBumpSwitch(int uPin) {
      pin = uPin;
    }
    
    void init() {
      pinMode(pin, INPUT);
    }

    bool isPressed() {
      return digitalRead(pin);
    }
    
};
