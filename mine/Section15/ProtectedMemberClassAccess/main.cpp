// Section 15
// Protected members and class access
#include <iostream>
using namespace std;

class Base {
  // Note friends of Base have access to all
public:
  int a {0};
  void display() {std::cout << a << ", " << b << ", " << c << endl;}
protected:
  int b {0};
private:
  int c {0};
};

class Derived : public Base {
  // Note friends of Derived have access to only what Derived has access to
  // a will be public
  // b will be Protected
  // c will not be accessible
public:
  void access_base_members(){
    a = 100;
    b = 200;
  }
};

int main(){
  cout << "=== Base member access from base objects ==========" << endl;
  Base base;
  base.a = 100;

  cout << "=== Base member access from derived objects =======" << endl;
  Derived d;
  d.a = 100;
  return 0;
}
