#include <iostream>

struct B
  {
  virtual ~B() = default;
  float a;
  float b;
  };

struct D : B
  {
  float c;
  };

int main()
  {
  std::cout << "sizeof(float): " << sizeof(float) << '\n';
  std::cout << "sizeof(void *): " << sizeof(void *) << '\n';
  std::cout << "sizeof(B): " << sizeof(B) << '\n';
  std::cout << "sizeof(D): " << sizeof(D) << '\n';
  }
