#include <Arduino.h>
#include <Servo.h>

class VexLED {
  int pin, pwm;
  Servo led;

  public:
    VexLED(int uPin) {
      pin = uPin;
    }
    
    void init() {
      pwm = 1000;
      pinMode(pin, OUTPUT);
      led.attach(pin);
      off();
    }
    
    void write(int uPwm) {
      if (uPwm >= 1000 && uPwm <= 2000) {
        pwm = uPwm;
        led.writeMicroseconds(pwm);
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
