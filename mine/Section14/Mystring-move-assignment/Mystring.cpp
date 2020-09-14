#include <iostream>
#include <cstring>
#include "Mystring.h"

//No-args constructor
Mysting::Mystring()
      :str{nullptr}{
        str = new char[1];
        *str = '\0';
      }

//overloaded constructor
Mystring::Mystring(const char *s)
        :str{nullptr}{
          if(s==nullptr){
            str = new char[1];
            *str = '\0';
          }else{
            str = new char[std::strlen(s) + 1];
            std::strcpy(str, s);
          }
        }
