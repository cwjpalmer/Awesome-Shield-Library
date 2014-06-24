/*
  Awesome.h library - for reading Awesomes
  Created by Christopher W. J. Palmer, 26 May 2014
  Part of the BrewBox Project
  Private library, not for public use.
*/

#ifndef Awesome_h
#define Awesome_h

#include "Arduino.h"

class Awesome
{
  public:
    Awesome();
    class button {
      public:
        bool isPressed();
      private:
        int _pin;
    };
  private:
    int _fake;
};

#endif
