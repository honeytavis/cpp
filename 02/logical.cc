#include <iostream>

int main()
{
  int x = 0; 
  int y = 1; 

  std::cout << "x and y = " << (x and y) << '\n'; 
  std::cout << "x or y = " << (x or y) << '\n'; 
  std::cout << "not x = " << (not x) << '\n'; 

  std::cout << '\n'; 
  std::cout << "x bitand y = " << (x bitand y) << '\n'; 
  std::cout << "x bitor y = " << (x bitor y) << '\n'; 
  std::cout << "x xor y = " << (x xor y) << '\n'; 

  return 0; 
}
