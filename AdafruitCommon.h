#pragma once

#include<cstddef>
#include<iostream>
#include<cstdio>
#include<cstdint>
#include<time.h>
#include<ctime>
#include<cstdlib>
#include<algorithm>

namespace Adafruit
{

typedef bool boolean;

typedef char* __FlashStringHelper;

typedef std::string String;

//#define PROGMEM()

void delay(int msecs);

int random(int randmax);

enum BASE
{
   DEC,
   HEX,
   OCT,
   BIN
};

class SerialOutput
{
public:

   void print(char const * str);

   void print(char c);

   void print(int num);

   void print(int num, int base);

   void println(char const* str);

   void println(char c);

   void println(int num);

   void println(int num, int base);
};

SerialOutput Serial;

}
