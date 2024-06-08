/*
  MorseTR.cpp - Library for flashing Morse code.
  Created by özenSoftware, June 8, 2024.
  Released into the public domain.
*/

#include "Arduino.h"
#include "MorseTR.h"

MorseTC::MorseTur(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void MorseTC::nokta()
{
  digitalWrite(_pin, HIGH);
  delay(250);
  digitalWrite(_pin, LOW);
  delay(250);  
}

void MorseTC::cizgi()
{
  digitalWrite(_pin, HIGH);
  delay(1000);
  digitalWrite(_pin, LOW);
  delay(250);
}
