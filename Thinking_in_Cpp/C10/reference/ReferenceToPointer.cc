#include <iostream>

void increament(int*& i)
{
  ++i; 
}

int main()
{
  //int* i = 0; 
  int* i = NULL; 
  std::cout << "i = " << i << '\n'; 

  increament(i); 
  std::cout << "i = " << i << '\n'; 

  i = NULL; 
}
