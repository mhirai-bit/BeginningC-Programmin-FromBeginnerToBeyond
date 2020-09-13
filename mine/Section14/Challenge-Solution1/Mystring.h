#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring{
  friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
  friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
  char *str; //pointer to a char[] that holds a C-style string
public:
  Mystring();
  Mystring(const char *s);
  Mystring(const Mystring &source);
  Mystring(Mystring &&source);
  ~Mystring();

  Mystring &operator=(const Mystring &rhs); // Copy assignment
  Mystring &operator=(Mystring &&rhs); // Move assignment

  void display() const;

  int get_length() const;
  const char *get_str() const;

  //Overload operator member methods
  Mystring operator-() const;
  Mystring operator+(const Mystring &rhs) const;
  bool operator==(const Mystring &rhs) const;
  bool operator!=(const Mystring &rhs) const;
  bool operator<(const Mystring &rhs) const;
  bool operator>(const Mystring &rhs) const;
  Mystring &operator+=(const Mystring &rhs);
  Mystring operator*(int n) const;
  Mystring &operator*=(int n);
  Mystring &operator++();
  Mystring operator++(int);
};

#endif
