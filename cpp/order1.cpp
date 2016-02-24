#include <iostream>

template<typename ...Types>
auto call(Types const & ...) { }

template<typename ...Types>
auto println(Types const & ...args)
  {
  call((std::cout << args)..., std::cout << '\n');
  }

int main()
  {
  using namespace std::literals;

  println("C", '+', "+"s, "RocksMySocks");
  }
