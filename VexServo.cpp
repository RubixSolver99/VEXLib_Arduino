#include <Arduino.h>
#include <Servo.h>

class VexServo {
  int pin, pwm;
  Servo servo;

  public:
    VexServo(int uPin) {
      pin = uPin;
    }

    void init() {
      pwm = 1000;
      servo.attach(pin);
    }

    void write(int pos) {
      if (pos >= 0 && pos <= 100) { // TODO: Check with a servo module for degrees of movement
        pwm = map(pos, 0, 100, 1000, 2000);
        servo.writeMicroseconds(pwm);
      } else {
        Serial.println("ERR: position not between 0 and 100");
      }
    }

    void reset() {
      write(0);
    }
};
