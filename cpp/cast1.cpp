#include <iomanip>
#include <iostream>

auto f(unsigned long long & n)
  {
  (***(int * * *)n)++;
  }

int main()
  {
  int constexpr n{43};

  auto p1 = &n;
  auto p2 = &p1;
  auto p3 = (unsigned long long) &p2;

  f(p3);

  std::cout << std::boolalpha << (**(int * * *)p3 == &n) << ' ';
  std::cout << *p1 << ' ' << n << '\n';
  }

