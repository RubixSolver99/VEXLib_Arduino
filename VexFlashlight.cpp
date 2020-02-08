#include <Arduino.h>
#include <Servo.h>

class VexFlashlight {
  int pin, pwm;
  Servo flashlight;

  public:
    VexFlashlight(int uPin) {
      pin = uPin;
    }
    
    void init() {
      pwm = 1000;
      pinMode(pin, OUTPUT);
      flashlight.attach(pin);
      off();
    }
    
    void write(int uPwm) {
      if (uPwm >= 1000 && uPwm <= 2000) {
        pwm = uPwm;
        flashlight.writeMicroseconds(pwm);
      } else {
        Serial.println("ERR: pwm not between 1000 and 2000");
      }
    }

    void off() {
      write(1000);
    }

    void on() {
      write(2000);
    }
};
