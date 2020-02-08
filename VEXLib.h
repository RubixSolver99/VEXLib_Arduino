/*
 * VEXLib.h
 *
 * Library for controlling and communicating with VEX EDR devices through the Arduino platform
 *
 */

#ifndef VEXLib_h
#define VEXLib_h

class VexBumpSwitch {
  public:
    VexBumpSwitch(int uPin);

    void init( );
    bool isPressed( );
    
  private:
    uint8_t pin;
};

class VexEncoder {
  public:
    VexEncoder(int uPinA, int uPinB);

    void init( );
    void update( );
    int getPos( );

  private:
    uint8_t val;
    uint8_t pinA;
    uint8_t pinB;
    uint8_t pos;
    uint8_t pinALast;
    uint8_t n;
};

class VexFlashlight {
  public:
    VexFlashlight(int uPin);

    void init( );
    bool write( );
    bool off( );
    bool on( );
    
  private:
    uint8_t pin;
    uint8_t pwm;
    Servo flashlight;
};

class VexLED {
  public:
    VexLED(int uPin);

    void init( );
    bool write( );
    bool off( );
    bool on( );
    
  private:
    uint8_t pin;
    uint8_t pwm;
    Servo led;
};

class VexLightSensor {
  public:
    VexLightSensor(int uPin);

    void init( );
    int read( );
    
  private:
    uint8_t pin;
};

class VexLimitSwitch {
  public:
    VexLimitSwitch(int uPin);

    void init( );
    bool isPressed( );
    
  private:
    uint8_t pin;
};

class VexLineTracker {
  public:
    VexLineTracker(int uPin);

    void init( );
    int read( );
    
  private:
    uint8_t pin;
};

class VexMotor {
  public:
  	VexMotor(int uPin);
  
  	void init( );
  	void write(int speed);
  	void stop( );

  private:
  	uint8_t pin;
  	uint8_t pwm;
};

class VexPotentiometer {
  public:
    VexPotentiometer(int uPin);

    void init( );
    void read( );

  private:
    uint8_t pin;
};

class VexServo {
  public:
    VexServo(int uPin);
  
    void init( );
    void write(int pos);
    void reset( );

  private:
    uint8_t pin;
    uint8_t pwm;
    Servo servo;
};

class VexUltrasonic {
  public:
    VexUltrasonic(int uPinTrig, int uPinEcho);

    void init( );
    int getDistance( );

  private:
    uint8_t pinTrig;
    uint8_t pinEcho;
};

#endif // VEXLib_h
