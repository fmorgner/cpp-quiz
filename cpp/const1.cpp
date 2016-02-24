#include <iostream>

int main()
  {
  // char const c{'c'};
  char c{'c'};

  char * ptr1;
  //
  // char const * * ptr2{&ptr1};
  char * * ptr2{&ptr1};

  *ptr2 = &c;
  (*ptr1)++;

  std::cout << c << '\n';
  }
