#include <iostream>

void f(int, int, int, int);
void f(int, int, int, int = 1);
void f(int, int, int = 2, int);
void f(int, int = 3, int, int);
void f(int = 4, int, int, int);

void f(int a, int b, int c, int d)
  {
  std::cout << a << b << c << d << '\n';
  }

int main()
  {
  f();
  }
