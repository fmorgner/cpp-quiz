#include <iostream>

template<typename T>
void o(T)
  {
  std::cout << 1;
  }

template<typename T>
void f(T a)
  {
  o(a);
  }

void o(float)
  {
  std::cout << 2;
  }

int main()
  {
  f(1.0f);
  }
