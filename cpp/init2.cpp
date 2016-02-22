#include <iostream>
#include <string>
#include <vector>

int main()
  {
  auto a = "cppug";

  std::vector<std::string> v{{a, a}};

  for(auto const & s : v)
    {
    std::cout << s;
    }

  std::cout << '\n' << v.size() << '\n';
  }

