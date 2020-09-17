#include <cstring>
#include <iostream>
#include "Mystring.h"

// No-args constructor
Mystring::Mystring()
        : str{nullptr}{
          str = new char[1];
          *str = '\0';
        }
