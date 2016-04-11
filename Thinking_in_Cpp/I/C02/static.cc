#include <iostream>

void func()
{
  static int i = 0; 
  //int i = 0; 
  std::cout << ++i << ' '; 
}

int main()
{
  for (int i = 0; i < 10; ++i) {
    func(); 
  }
  std::cout << '\n'; 
  return 0; 
}
