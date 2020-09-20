// section 16
// interfaces - complete

#include <iostream>
#include <vector>

class I_Printable{
  friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
public:
  virtual void print(std::ostream &os) const = 0;
  virtual ~I_Printable() {}; // doubt
};

std::ostream &operator<<(std::ostream &os, const I_Printable &obj){
  obj.print(os);
  return os;
}

class Account:public I_Printable{
public:
  virtual void withdraw(double amount){
    std::cout << "In Account::withdraw" << std::endl;
  }
  virtual void print(std::ostream &os) const override{
    os << "Account display";
  }
  virtual ~Account(){}
};

class Checking:public Account{
public:
  virtual void withdraw(double amount){
    std::cout << "In Chackings::withdraw" << std::endl;
  }
  virtual void print(std::ostream &os) const override{
    os << "Chackings display";
  }
};

class Savings: public Account{
public:
  virtual void withdraw(double amount){
    std::cout << "In Savings::withdraw" << std::endl;
  }
  virtual void print(std::ostream &os) const override{
    os << "Savings display";
  }
  virtual ~Savings(){}
};

class Trust:public Account{
public:
  virtual void withdraw(double amount){
    std::cout << "In Trust::withdraw" << std::endl;
  }
  virtual void print(std::ostream &os) const override{
    os << "Trust display";
  }
  virtual ~Trust(){}
};

class Dog:public I_Printable{
public:
  virtual void print(std::ostream &os) const override{
    os << "Woof woof";
  }
};

void print(const I_Printable &obj){
  std::cout << obj << std::endl;
}

int main(){
  Dog *dog = new Dog();
  std::cout << *dog << std::endl;

  print(*dog);

  Account *p1 = new Account();
  std::cout << *p1 << std::endl;

  Account *p2 = new Account();
  std::cout << *p2 << std::endl;

  Account a;
  std::cout << a << std::endl;
  Checking c;
  std::cout << c << std::endl;
  Savings s;
  std::cout << s << std::endl;
  Trust t;
  std::cout << t << std::endl;
  std::cout << "***********************" << std::endl;
  std::vector<Account> accs = {a,c,s,t};
  for (auto &acc:accs){
    print(acc);
  }

  std::cout << "***********************" << std::endl;

  Account *aa = new Account();
  Account *cc = new Checking();
  Account *ss = new Savings();
  Account *tt = new Trust();
  std::vector<Account*> accs2 = {aa,cc,ss,tt};
  for(auto &acc:accs2){
    std::cout << *acc << std::endl;
  }

  delete p1;
  delete p2;
  delete dog;
  return 0;
  delete aa;
  delete cc;
  delete ss;
  delete tt;

}
