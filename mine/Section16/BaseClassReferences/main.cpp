// section 16
// using ase class references
#include <iostream>

// this class uses dynamic polymorphism for the withdraw method
// we'll learn about virtual functions in the next video
class Account {
public:
  virtual void withdraw(double amount){
    std::cout << "In Account::withdraw" << std::endl;
  }
  virtual ~Account(){}
};

class Checking: public Account{
public:
  virtual void withdraw(double amount){
    std::cout << "In Checking::withdraw" << std::endl;
  }
  virtual ~Checking(){}
};

class Savings: public Account{
public:
  virtual void withdraw(double amount){
    std::cout << "In Savings::withdraw" << std::endl;
  }
  virtual ~Savings(){}
};

class Trust: public Account{
public:
  virtual void withdraw(double amount){
    std::cout << "In Trust::withdraw" << std::endl;
  }
  virtual ~Trust(){}
};

void do_withdraw(Account &account, double amount){
  account.withdraw(amount);
}

int main(){

  Account a;
  Account &ref = a;
  ref.withdraw(1000);

  Trust t;
  Account &ref1 = t;
  ref1.withdraw(1000);

  Account a1;
  Savings a2;
  Checking a3;
  Trust a4;

  do_withdraw(a1, 1000);
  do_withdraw(a2, 2000);
  do_withdraw(a3, 3000);
  do_withdraw(a4, 4000);
  return 0;

}
