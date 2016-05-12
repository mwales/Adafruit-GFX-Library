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

//#define DEC 10
//#define HEX 16
//#define OCT 8
//#define BIN 2

typedef bool boolean;

typedef char* __FlashStringHelper;

typedef std::string String;

//#define PROGMEM()

void delay(int msecs);

int random(int randmax);

}
