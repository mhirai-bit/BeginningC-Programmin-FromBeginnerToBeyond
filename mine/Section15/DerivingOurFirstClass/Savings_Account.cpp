#include <iostream>
#include "Savings_Account.h"

Savings_Account::Savings_Account()
: int_rate{3.0}{
  std::cout << "base constructor Savings_Account" << std::endl;
}

Savings_Account::~Savings_Account(){}

void Savings_Account::deposit(double amount){
  std::cout << "Savings Acount deposit called with " << amount << std::endl;
}

void Savings_Account::withdraw(double amount){
  std::cout << "Savings Account withdraw called with " << amount << std::endl;
}
