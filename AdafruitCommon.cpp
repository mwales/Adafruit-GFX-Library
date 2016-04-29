
#include <iostream>
#include"AdafruitCommon.h"

namespace Adafruit
{


void delay(int msecs)
{
   timespec t;
   t.tv_sec = msecs / 1000;
   t.tv_nsec = (msecs % 1000) * 1000000;
   nanosleep(&t, NULL);
}

int random(int randmax)
{
   static bool seeded = false;
   if (!seeded)
   {
      srand(time(NULL));
   }

   long int rr = ::random();
   return rr % randmax;
}



void SerialOutput::print(char const * str)
{
   std::cout << str;
}

void SerialOutput::print(char c)
{
   std::cout << c;
}

void SerialOutput::print(int num)
{
   std::cout << num;
}

void SerialOutput::print(int num, int base)
{
   std::cout << num;
}

void SerialOutput::println(char const * str)
{
   std::cout << str << std::endl;
}

void SerialOutput::println(char c)
{
   std::cout << c << std::endl;
}

void SerialOutput::println(int num)
{
   std::cout << num << std::endl;
}

void SerialOutput::println(int num, int base)
{
   std::cout << num << std::endl;
}

}
