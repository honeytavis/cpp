#include <iostream>

void func() {
  std::cout << "func() called..." << '\n'; 
}

int main()
{
  void (*fp)(); 
  fp = func; 
  (*fp)(); 

  void (*fp2)() = func; 
  (*fp2)(); 

  return 0; 
}
