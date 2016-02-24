#include <iostream>

struct E
  {
  template<typename ...Types>
  E(Types const & ...) {}
  };

template<typename ...Types>
auto println(Types const & ...args)
  {
  E{(std::cout << args)..., std::cout << '\n'};
  }

int main()
  {
  using namespace std::literals;

  println("C", '+', "+"s, "RocksMySocks");
  }
