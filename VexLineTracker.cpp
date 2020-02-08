#include <Arduino.h>

class VexLineTracker {
  int pin;

  public:
    VexLineTracker(int uPin) {
      pin = uPin;
    }

    void init() {
      
    }

    int read() {
      return analogRead(pin);
    }
};
