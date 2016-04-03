#include <iostream>

//#define DEBUG
#undef DEBUG
#define P(A) std::cout << #A << " = " << (A) << '\n'; 

int main()
{
  int a = 10; 
  int b = 20; 

#ifdef DEBUG
  P(a + b); 
#endif

  return 0; 
}
