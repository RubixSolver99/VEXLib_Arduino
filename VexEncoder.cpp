#include <Arduino.h>

class VexEncoder {
  int val, pinA, pinB, pos, pinALast, n;

  public:
    VexEncoder(int uPinA, int uPinB) {
      pinA = uPinA;
      pinB = uPinB;
    }

    void init() {
      pinMode(pinA, INPUT);
      pinMode(pinB, INPUT);
      pos = 0;
      pinALast = LOW;
      n = LOW;
    }

    void update() {
      n = digitalRead(pinA);
      if ((pinALast == LOW) && (n == HIGH)) {
        if (digitalRead(pinB) == LOW) {
          pos--;
        } else {
          pos++;
        }
      }
      pinALast = n;
    }

    int getPos() {
      return pos;
    }
};
