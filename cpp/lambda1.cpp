#include <iomanip>
#include <iostream>
#include <type_traits>

using namespace std;

int main()
  {
  int i, &j = i;

  [=]{
    cout << std::boolalpha
         << std::is_same<decltype( j ), int       &>() << '\n'
         << std::is_same<decltype((j)), int const &>() << '\n'
         << std::is_same<int &,         int const &>() << '\n';
    }();
  }

// 5.1.2
