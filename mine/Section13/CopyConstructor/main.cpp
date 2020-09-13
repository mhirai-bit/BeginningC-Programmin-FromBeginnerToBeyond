// Section 13
// Copy Constructor
#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
  string name;
  int health;
  int xp;
public:
  string get_name() const {return name;}
  int get_health() const {return health;}
  int get_xp() const {return xp;}
  Player(string name_val = "None", int health_val = 0, int xp_val = 0);
  //Copy Constructor
  Player(const Player &source);
  //Destructor
  ~Player(){ cout << "Destructor called for: " << name << endl;}
};

Player::Player(string name_val, int health_val, int xp_val)
      : name{name_val}, health{health_val}, xp{xp_val}{
        cout << "Three args constructor for " + name << endl;
      }

Player::Player(const Player &source)
      : Player{source.name, source.health, source.xp}{
        cout << "Copy constructor - made copy of: " << source.name << endl;
      }

void display_player(const Player &p){
  cout << "Name: " << p.get_name() << endl;
  cout << "Health:" << p.get_health() << endl;
  cout << "XP:" << p.get_xp() << endl;
}

int main() {
  cout << "Create empty" << endl;
  Player empty {"XXXXXX", 100, 50};
  cout << "Create my_new_object" << endl;
  Player my_new_object {empty};
  cout << "Call display_player" << endl;
  display_player(empty);

  Player frank {"Frank"};
  Player hero {"Hero", 100};
  Player villain {"Villain", 100, 55};
  return 0;
}
