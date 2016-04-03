//#define NDEBUG 

#include <cassert>
#include <iostream>

int main()
{
  int a = 10; 

  assert(a < 0); 
  std::cout << "hello world" << '\n'; 

  return 0; 
}
