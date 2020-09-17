#include <iostream>
#include <cstring>
#include <cctype>
#include "Mystring.h"

// No-args constructor
Mystring::Mystring()
        :str{nullptr}{
          str = new char[1];
          *str = '\0';
        }

// Overloaded constructor
Mystring::Mystring(const char* s)
        :str{nullptr}{
          if(s == nullptr){
            str = new char[1];
            *str = '\0';
          }else{
            str = new char[std::strlen(s) + 1];
            std::strcpy(str, s);
          }
}

// Copy constructor
// Mystring::Mystring(const Mystring &source)
//         :str{source.str}{
//           std::cout << "Copy constructor used" << std::endl;
// }
Mystring::Mystring(const Mystring &source)
    : str{nullptr} {
        str = new char[std::strlen(source.str)+ 1];
        std::strcpy(str, source.str);
        std::cout << "Copy constructor used" << std::endl;

}

// Move constructor
Mystring::Mystring(Mystring &&source)
        :str{source.str}{
          std::cout << "Move constructor used" << std::endl;
          source.str = nullptr;
        }

Mystring::~Mystring(){
  delete [] str;
}

// Copy assignment operator
Mystring &Mystring::operator=(const Mystring &rhs){
  if(this == &rhs){
    return *this;
  }
  delete [] str;
  str = new char[std::strlen(rhs.str) + 1];
  std::strcpy(str, rhs.str);
  return *this;
}

// Move assignment operator
Mystring &Mystring::operator=(Mystring &&rhs){
  if(this == &rhs){
    return *this;
  }
  delete [] str;
  str = new char[std::strlen(rhs.str) + 1];
  str = rhs.str;
  rhs.str == nullptr;
  return *this;
}

// Display method
void Mystring::display() const{std::cout << str << get_length() << std::endl;}

// length getter
int Mystring::get_length() const {return std::strlen(str);}

// string getter
const char *Mystring::get_str() const {return str;}

// Equality
bool operator==(const Mystring &lhs, const Mystring &rhs){
  return std::strcmp(lhs.str, rhs.str) == 0;
}

// Make lowercase
Mystring operator-(const Mystring &obj){
  char *buff = new char[std::strlen(obj.str) + 1];
  std::strcpy(buff, obj.str);
  for(size_t i=0; i<std::strlen(buff);i++){
    buff[i] = std::tolower(buff[i]);
  }
  Mystring temp {buff};
  delete [] buff;
  return temp;
}
// Mystring operator-(const Mystring &obj) {
//     char *buff = new char[std::strlen(obj.str) + 1];
//     std::strcpy(buff, obj.str);
//     for (size_t i=0; i<std::strlen(buff); i++)
//         buff[i] = std::tolower(buff[i]);
//     Mystring temp {buff};
//     delete [] buff;
//     return temp;
// }

// Concatenation
Mystring operator+(const Mystring &lhs, const Mystring &rhs){
  char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
  std::strcpy(buff, lhs.str);
  std::strcat(buff, rhs.str);
  Mystring temp {buff};
  delete [] buff;
  return temp;
}
