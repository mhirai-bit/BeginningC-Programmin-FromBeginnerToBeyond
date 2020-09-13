//Section 13
// Constructor Initialization Lists
#include <iostream>
#include <string>

using namespace std;

class Player{
private:
  string name {"XXXXXX"};
  int health;
  int xp;
public:
  Player();
  Player(string name_val);
  Player(string name_val, int health_val, int xp_val);
};

Player::Player()
      : name {"None"}, health{0}, xp{0}{}

Player::Player(string name_val)
      : name{name_val}, health{0}, xp{0}{}

Player::Player(string name_val, int health_val, int xp_val)
      : name{name_val}, health{health_val}, xp{xp_val}{}

int main(){
  Player empty;
  Player frank {"Frank"};
  Player villain {"Villain", 100, 55};
}
