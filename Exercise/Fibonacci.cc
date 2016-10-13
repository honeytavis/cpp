#include <iostream>

long long Fibonacci(unsigned n) {
  if (n <= 0) { // !!!
    return 0; 
  } 
  if (n == 1) {
    return 1; 
  } 

  long long F0 = 0; 
  long long F1 = 1; 
  long long F2 = 0; 
  for (unsigned i = 2; i <= n; ++i) {
    F2 = F1 + F0; 
    F0 = F1; 
    F1 = F2; 
  }

  return F2; 
}

int main()
{
  int n; // n <= 161
  std::cin >> n; 

  std::cout << "Fibonacci" << '(' << n << ')'
            << " = " << Fibonacci(n) 
            << std::endl; 

  return 0; 
}
