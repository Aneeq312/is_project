//class header
#include "Arduino.h"
class flasher
{
  public: 
    flasher(int pin);
    void begin();
    void ledON();
    void ledOFF();
  private:
    int _pin;
};
