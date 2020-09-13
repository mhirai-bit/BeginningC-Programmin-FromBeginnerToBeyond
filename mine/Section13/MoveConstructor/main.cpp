// Move constructor
#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

class Move {
private:
  int *data;
public:
  void set_data_value(int d){*data = d;}
  int get_data_value(){return *data;}
  //constructor
  Move(int d);
  // Copy constructor
  Move(const Move &source);
  // Move constructor
  Move(Move &&source) noexcept;
  //Destructor
  ~Move();
};

Move::Move(int d){
  data = new int;
  *data = d;
  cout << "Constructor for: " << d << endl;
}

// Copy ctor
Move::Move(const Move &source)
    :Move {*source.data}{
      cout << "Copy constructor - deep copy for: " << *data << endl;
}

// Move ctor
Move::Move(Move &&source) noexcept
    : data {source.data}{
      source.data = nullptr;
      cout << "Move constructor - moving resource: " << *data << endl;
    }

Move::~Move(){
  if(data != nullptr){
    cout << "Destructor freeing data for: " << *data << endl;
  } else {
    cout << "Destructor freeing data for nullptr" << endl;
  }
  delete data;
}


int main() {
  LARGE_INTEGER freq;
  QueryPerformanceFrequency(&freq);
  LARGE_INTEGER start, end;
  QueryPerformanceCounter(&start);

  vector<Move> vec;

  vec.push_back(Move{10});

  vec.push_back(Move{20});
  vec.push_back(Move{30});
  vec.push_back(Move{40});
  vec.push_back(Move{50});
  vec.push_back(Move{60});
  vec.push_back(Move{70});
  vec.push_back(Move{80});
  vec.push_back(Move{90});

  QueryPerformanceCounter(&end);

  double time = static_cast<double>(end.QuadPart - start.QuadPart) * 1000.0 / freq.QuadPart;
  cout << "time : " << time << endl;

  return 0;
}
