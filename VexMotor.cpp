#include <Arduino.h>
#include <Servo.h>

class VexMotor {
  int pin, pwm;
  Servo motor;

  public:
    VexMotor(int uPin) {
      pin = uPin;
    }
    
    void init() {
      pwm = 1000;
      pinMode(pin, OUTPUT);
      motor.attach(pin);
      stop();
    }
    
    void write(int speed) {
      if (speed >= -100 && speed <= 100) {
        pwm = map(speed, -100, 100, 1000, 2000);
        motor.writeMicroseconds(pwm);
      } else {
        Serial.println("ERR: speed not between -100 and 100");
      }
    }

    void stop() {
      write(0);
    }
};
