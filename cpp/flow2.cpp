#include <iostream>

struct S
  {
  S() { std::cout << "c"; }
  ~S() { std::cout << "d"; }
  };

int main()
  {
  int i{};

mark:
  S s{};
  while(!i++)
    {
    goto mark;
    }
  }

// 6.6.1
