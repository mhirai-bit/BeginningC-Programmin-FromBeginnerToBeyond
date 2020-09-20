#ifndef _SAVINGS_ACCOUNT_
#define _SAVINGS_ACCOUNT_
#include "Account.h"

class Savings_Account: public Account{
  friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);
private:
  static constexpr const char *def_nane = "Unnamed Savings Account";
  static constexpr double def_balance = 0.0;
  static constexpr double def_int_rate = 0.0;
protected:
  double int_rate;
public:
  Savings_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
  bool deposit(double amount);
  // Inherits the Account::withdraw method
};

#endif
