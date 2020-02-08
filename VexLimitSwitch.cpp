#include <Arduino.h>

class VexLimitSwitch {
  int pin;

  public:
    VexLimitSwitch(int uPin) {
      pin = uPin;
    }
    
    void init() {
      pinMode(pin, INPUT);
    }

    bool isPressed() {
      return digitalRead(pin);
    }
    
};
