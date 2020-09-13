#include <iostream>
#include <cstring>
#include "Mystring.h"

// No-args constructor
Mystring::Mystring()
        : str{nullptr}{
          str = new char[1];
          *str = '\0';
        }

// Overloaded constructor
Mystring::Mystring(const char *s)
        :str{nullptr}{
          if(s == nullptr){
            str = new char[1];
            *str = '\0';
          }else{
            str = new char[strlen(s) + 1];
            strcpy(str, s);
          }
        }

// Copy constructor
// Mystring::Mystring(const Mystring &source)
//         :str{source.str}{
//         std::cout << "Copy constructor was called" << std::endl;} //original
Mystring::Mystring(const Mystring &source)
    : str{nullptr} {
        str = new char[strlen(source.str)+ 1];
        strcpy(str, source.str);
        std::cout << "Copy constructor was called" << std::endl;
 //       std::cout << "Copy constructor used" << std::endl;

}

// Move constructor
Mystring::Mystring(Mystring &&source)
        :str{source.str}{
          source.str = nullptr;
}

// Destructor
Mystring::~Mystring(){
  delete [] str;
}

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs){
  if(this == &rhs)
    return *this;
  delete [] str;
  str = new char[strlen(rhs.str) + 1];
  strcpy(str, rhs.str);
  return *this;
}

//Move assignment
Mystring &Mystring::operator=(Mystring &&rhs){
  if(this == &rhs)
    return *this;
  delete [] str;
  str = rhs.str;
  rhs.str = nullptr;
  return *this;
}

// Display method
void Mystring::display() const {
  std::cout << str << " : " << get_length() << std::endl;
}

// getters
int Mystring::get_length() const { return strlen(str);}
const char *Mystring::get_str() const {return str;}

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs){
  os << rhs.str;
  return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs){
  char *buff = new char[1000];
  in >> buff;
  rhs = Mystring{buff};
  delete [] buff;
  return in;
}

// Equality
bool operator==(const Mystring &lhs, const Mystring &rhs){
  return std::strcmp(lhs.str, rhs.str) == 0;
}

// Not equals
bool operator!=(const Mystring &lhs, const Mystring &rhs){
  return !(std::strcmp(lhs.str, rhs.str) == 0);
}

// Less than
bool operator<(const Mystring &lhs, const Mystring &rhs){
  return std::strcmp(lhs.str, rhs.str) < 0;
}

// Greater than
bool operator>(const Mystring &lhs, const Mystring &rhs){
  return std::strcmp(lhs.str, rhs.str) > 0;
}

// Make lowercase
Mystring operator-(Mystring &obj){ //original
  for(int i=0; i < std::strlen(obj.str); i++){
    obj.str[i] = std::tolower(obj.str[i]);
  }
  return obj;
}

// Concatenation
Mystring operator+(const Mystring &lhs, const Mystring &rhs){
  char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
  std::strcpy(buff, lhs.str);
  std::strcat(buff, rhs.str);
  Mystring temp {buff};
  delete [] buff;
  return temp;
}

// concat and assign
Mystring operator+=(Mystring &lhs, const Mystring &rhs){ //original
  lhs = lhs + rhs;
  return lhs;
}

// Repeat
Mystring operator*(const Mystring &lhs, int n){
  Mystring temp;
  for(int i = 0; i < n; i++){
    temp = temp + lhs;
  }
  return temp;
}

// Repeat and assign
Mystring operator*=(Mystring &lhs, int n){ //original
  lhs = lhs * n;
  return lhs;
}

// Make upper case - pre increment
Mystring &operator++(Mystring &obj){
  for (size_t i=0; i < std::strlen(obj.str); i++){
    obj.str[i] = std::toupper(obj.str[i]);
  }
  return obj;
}

// Make uppercase - post-increment
Mystring operator++(Mystring &obj, int){
  Mystring temp {obj};
  ++obj;
  return temp;
}
