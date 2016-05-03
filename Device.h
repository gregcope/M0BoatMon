#ifndef Device_h
#define Device_h

//
// Device
//
// Library for a Device, that has on on/off state
//
// Greg Cope <greg.cope@gmail.com>
// 04-May-2016 Initial version
//

#include "Arduino.h"

class Device
{
  public:
    Device(byte pin);
    void on(void);
    void off(void);
  private:
    int _powerPin;
};

#endif