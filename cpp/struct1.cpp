#include <iostream>

struct S
  {
  int memfun() { return 1; }
//  int memfun() && { return 2; }
  };

int main()
  {
  S o{};

  std::cout << o.memfun();
  std::cout << S{}.memfun();
  }

