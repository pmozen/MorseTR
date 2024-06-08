
/*
  MorseTR.h - Library for Turkish flashing Morse code.
  Created by özenSoftware, June 8, 2024.
  Released into the public domain.
*/
#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
  private:
    int _pin;
};

#endif
