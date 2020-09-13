// Static class members
#include <iostream>
#include <windows.h>
#include "Player.h"

using namespace std;

void display_active_players(){
  cout << "Active Players: " << Player::get_num_players() << endl;
}

int main(){
  LARGE_INTEGER freq;
  QueryPerformanceFrequency(&freq);
  LARGE_INTEGER start, end;
  QueryPerformanceCounter(&start);
  display_active_players();
  Player hero{"Hero"};
  display_active_players();

  {
    Player frank{"Frank"};
    display_active_players();
  }

  display_active_players();

  Player *enemy = new Player("Enemy", 100, 100);
  display_active_players();
  delete enemy;
  display_active_players();
  Player me {hero};
  me.talk();
  QueryPerformanceCounter(&end);

  double time = static_cast<double>(end.QuadPart - start.QuadPart) * 1000.0 / freq.QuadPart;
  cout << "time : " << time << endl;
  return 0;
}
