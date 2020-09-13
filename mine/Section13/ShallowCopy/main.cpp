// Section 13
// Copy Constructor - Shallow Copy
// Note: this program will crash
#include <iostream>
#include <vector>

using namespace std;

class Shallow{
private:
  int *data;
public:
  void set_data_value(int d){*data = d;}
  int get_data_value(){return *data;}
  // Constructor
  Shallow(int d);
  // Copy Constructor
  Shallow(const Shallow &source);
  // Move constructor
  Shallow(Shallow &&source) noexcept;
  // Destructor
  ~Shallow();
};

Shallow::Shallow(int d){
  data = new int;
  *data = d;
}

Shallow::Shallow(const Shallow &source)
      : Shallow{*source.data}{
        cout << "Copy constructor - deep copy" << endl;
      }

Shallow::Shallow(Shallow &&source) noexcept
      : data{source.data}{
        cout << "Move cosntructor for :" << source.data << ":" << *source.data << endl;
        source.data = nullptr;
        cout << "This is nulled -> :" << source.data << endl;
}

Shallow::~Shallow(){
  delete data;
  cout << "Destructor freeing data" << endl;
}

void display_shallow(Shallow s){
  cout << s.get_data_value() << endl;
}

int main(){
  Shallow obj1 {100};
  display_shallow(obj1);

  Shallow obj2 {obj1};
  obj2.set_data_value(1000);
  vector<Shallow> vec;
  vec.push_back(Shallow{100});

  return 0;
}
