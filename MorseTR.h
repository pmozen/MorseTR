/*
  MorseTR.h - Library for flashing Morse code.
  Created by özenSoftware, June 8, 2024.
  Released into the public domain.
*/
#ifndef MorseTR_h
#define MorseTR_h

#include "Arduino.h"

class MorseTC
{
  public:
    MorseTur(int pin);
    void nokta();
    void cizgi();
  private:
    int _pin;
};

#endif
