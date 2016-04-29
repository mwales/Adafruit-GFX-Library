#include "Print.h"
#include <sstream>
#include <string>
#include <cstdlib>

namespace Adafruit
{


void Print::printString(std::string s)
{
   for(auto const & singleChar : s)
   {
      write(singleChar);
   }
}

size_t Print::print(const __FlashStringHelper *s)
{
   std::string str(*s);
   printString(str);
   return str.size();
}

//size_t Print::print(const String &);
size_t Print::print(const char ca[])
{
   std::string str(ca);
   printString(str);
   return str.size();
}

size_t Print::print(char c)
{
   write(c);
   return 1;
}

size_t Print::print(unsigned char c, int base)
{
   write(c);
   return 1;
}

size_t Print::print(int num, int base)
{


   std::ostringstream oss;

   switch(base)
   {
      case DEC:
         oss << num;
         break;

      case HEX:
         oss << std::hex << num;
         break;

      case OCT:
         oss << std::oct << num;
         break;

      case BIN:
      {
         std::string str;
         for(int i = 0; i < 32; i++)
         {
            if (num & 0x1)
            {
               str = "1" + str;
            }
            else
            {
               str = "0" + str;
            }

            num >>= 1;
         }

         oss << str;
      }
   }
   printString(oss.str());
   return oss.str().size();
}

size_t Print::print(unsigned int num, int base)
{
   std::ostringstream oss;

   switch(base)
   {
      case DEC:
         oss << num;
         break;

      case HEX:
         oss << std::hex << num;
         break;

      case OCT:
         oss << std::oct << num;
         break;

      case BIN:
      {
         std::string str;
         for(int i = 0; i < 32; i++)
         {
            if (num & 0x1)
            {
               str = "1" + str;
            }
            else
            {
               str = "0" + str;
            }

            num >>= 1;
         }

         oss << str;
      }
   }
   printString(oss.str());
   return oss.str().size();
}

size_t Print::print(long num, int base)
{
   std::ostringstream oss;

   switch(base)
   {
      case DEC:
         oss << num;
         break;

      case HEX:
         oss << std::hex << num;
         break;

      case OCT:
         oss << std::oct << num;
         break;

      case BIN:
      {
         std::string str;
         for(int i = 0; i < 32; i++)
         {
            if (num & 0x1)
            {
               str = "1" + str;
            }
            else
            {
               str = "0" + str;
            }

            num >>= 1;
         }

         oss << str;
      }
   }
   printString(oss.str());
   return oss.str().size();
}

size_t Print::print(unsigned long num, int base)
{
   std::ostringstream oss;

   switch(base)
   {
      case DEC:
         oss << num;
         break;

      case HEX:
         oss << std::hex << num;
         break;

      case OCT:
         oss << std::oct << num;
         break;

      case BIN:
      {
         std::string str;
         for(int i = 0; i < 32; i++)
         {
            if (num & 0x1)
            {
               str = "1" + str;
            }
            else
            {
               str = "0" + str;
            }

            num >>= 1;
         }

         oss << str;
      }
   }
   printString(oss.str());
   return oss.str().size();
}

size_t Print::print(double num, int precision)
{
   std::ostringstream oss;
   oss << num;
   printString(oss.str());
   return oss.str().size();
}

//size_t print(const Printable&);

size_t Print::println(const __FlashStringHelper * s)
{
   size_t retVal = print(*s);
   retVal += print('\n');
   return retVal;
}

//size_t Print::println(const String &s);
size_t Print::println(const char s[])
{
   size_t retVal = print(s);
   retVal += print('\n');
   return retVal;
}

size_t Print::println(char s)
{
   print(s);
   print('\n');
   return 2;
}

size_t Print::println(unsigned char s, int base)
{
   size_t retVal = print(s, base);
   retVal += print('\n');
   return retVal;
}

size_t Print::println(int num, int base)
{
   size_t retVal = print(num, base);
   retVal += print('\n');
   return retVal;
}

size_t Print::println(unsigned int num, int base)
{
   size_t retVal = print(num, base);
   retVal += print('\n');
   return retVal;
}

size_t Print::println(long num, int base)
{
   size_t retVal = print(num, base);
   retVal += print('\n');
   return retVal;
}

size_t Print::println(unsigned long num, int base)
{
   size_t retVal = print(num, base);
   retVal += print('\n');
   return retVal;
}

size_t Print::println(double num, int precision)
{
   size_t retVal = print(num, precision);
   retVal += print('\n');
   return retVal;
}

//size_t println(const Printable&);
size_t Print::println(void)
{
   write('\n');
   return 1;
}

}
