#include <Arduino.h>

class VexUltrasonic {
  int pinTrig, pinEcho;

  public:
    VexUltrasonic(int uPinTrig, int uPinEcho) {
      pinTrig = uPinTrig;
      pinEcho = uPinEcho;
    }
    
    void init() {
      pinMode(pinTrig, OUTPUT);
      pinMode(pinEcho, INPUT);
    }

    int getDistance() {
      digitalWrite(pinTrig, LOW);
      delayMicroseconds(2);
      digitalWrite(pinTrig, HIGH);
      delayMicroseconds(10);
      digitalWrite(pinTrig, LOW);
      return (int)pulseIn(pinEcho, HIGH) / 58;
    }
};
