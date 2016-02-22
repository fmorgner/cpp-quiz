#include <iostream>

int main()
  {
  char c{'c'};
  char * pc{&c};

  char * * ptr{&pc};
  //char const * * ptr{&pc};

  c++;

  std::cout << **ptr << '\n';
  }

