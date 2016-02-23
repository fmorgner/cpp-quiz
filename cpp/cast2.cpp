#include <iomanip>
#include <iostream>

int main()
  {
  int const n{43};

  auto p1 = &n;
  auto p2 = &p1;
  auto p3 = (unsigned long long) &p2;

  std::cout << std::boolalpha << (**(int * * *)p3 == p1) << '\n';
  }

