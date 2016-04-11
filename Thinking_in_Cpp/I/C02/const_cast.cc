#include <iostream> 

int main()
{
  const int i = 10; 
  //int* j = &i; 
  int* j = const_cast<int*>(&i); 
  std::cout << "*j = " << *j << '\n'; 

  volatile int k = 20; 
  //int* u = &k; 
  int* u = const_cast<int*>(&k); 
  std::cout << "*u = " << *u << '\n'; 

  return 0; 
}
