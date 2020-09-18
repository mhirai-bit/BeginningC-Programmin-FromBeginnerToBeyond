// Section 15
// Constructors and Destructor
#include <iostream>

using namespace std;

class Base {
private:
  int value;
public:
  Base() : value{0} { cout << "Base no-args constructor" << endl;}
  Base(int x) : value{x} { cout << "Base (int) orverloaded constructor" << endl;}
  ~Base(){ cout << "Base destructor" << endl;}
};

class Derived : public Base {
  using Base::Base;
private:
  int doubled_value;
public:
  Derived() : doubled_value {0} {cout << "Derived no-args constructor " << endl; }
  Derived(int x) : doubled_value {x * 2} { cout << "Derived (int) overloaded constructor" << endl;}
  ~Derived(){ cout << "Derived destructor " << endl;}
      int getter() const { return doubled_value;}
};

int main(){
  Derived d {1000};
      cout << d.getter() << endl;
  return 0;
}
