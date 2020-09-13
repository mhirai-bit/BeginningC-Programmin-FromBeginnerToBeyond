#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring{
  friend Mystring operator-(Mystring &obj); //original
  friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
  friend bool operator==(const Mystring &lhs, const Mystring &rhs);
  friend bool operator!=(const Mystring &lhs, const Mystring &rhs);
  friend bool operator<(const Mystring &lhs, const Mystring &rhs);
  friend bool operator>(const Mystring &lhs, const Mystring &rhs);
  friend Mystring operator+=(Mystring &lhs, const Mystring &rhs); //original
  friend Mystring operator*(const Mystring &lhs, int n);
  friend Mystring operator*=(Mystring &lhs, int n); //oritinal
  friend Mystring &operator++(Mystring &obj);
  friend Mystring operator++(Mystring &obj, int);
  friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
  friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
  char * str;
public:
  Mystring();
  Mystring(const char *s);
  Mystring(const Mystring &source);
  Mystring(Mystring &&source);
  ~Mystring();

  Mystring &operator=(const Mystring &rhs);
  Mystring &operator=(Mystring &&rhs);

  void display() const;

  int get_length() const;
  const char *get_str() const;
};

#endif
