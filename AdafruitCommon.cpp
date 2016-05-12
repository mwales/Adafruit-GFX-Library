
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




}
