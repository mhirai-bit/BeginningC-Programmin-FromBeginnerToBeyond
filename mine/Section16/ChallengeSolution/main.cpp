#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main(){

  Checking_Account frank {"Frank", 5000};
  cout << frank << endl;

  Account *trust = new Trust_Account{"James"};
  cout << *trust << endl;

  Account *p1 = new Checking_Account()
}
