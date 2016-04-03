#include <iostream>

int a = 10; 
int b = 20; 
int result; 

int main()
{
  __asm__("push a\n\t"
          "movl a, %eax\n\t"
          "movl b, %ebx\n\t"
          "imull %ebx, %eax\n\t"
          "movl %eax, result\n\t"
          "pop a"); 

  std::cout << "result = " << result << '\n'; 
}
