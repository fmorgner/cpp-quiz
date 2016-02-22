#include <iostream>

struct A
  {
  A() = default;
  A(A const &) { std::cout << "A\n"; }
  };

struct B
  {
  B() = default;
  B(B const &) { std::cout << "B\n"; }
  };

auto f(B const &) { }

int main()
  {
  A a{};
  B b{};

  [=]{

    std::cout << sizeof(a) << '\n';
    f(b);

    }();
  }

// 5.1.2
