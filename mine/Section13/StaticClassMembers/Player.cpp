#include <iostream>
#include "Player.h"

int Player::num_players {0};

Player::Player(std::string name_val, int health_val, int xp_val)
      :name{name_val},health{health_val},xp{xp_val}{
        std::cout << "Constructor was called" << std::endl;
        ++num_players;
      }

Player::Player(const Player &source)
      :name{source.name},health{source.health},xp{source.xp}{
      //:Player{source.name,source.health, source.xp}{
        std::cout << "Copy constructor for:" << source.name << std::endl;
      }

Player::~Player(){
  --num_players;
}

int Player::get_num_players(){
  return num_players;
}
