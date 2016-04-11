#include <stdio.h>

int main()
{
  enum bool{false, true}; 
  enum bool bool1 = false; 
  enum bool bool2 = true; 

  printf("bool1 = %d\n", bool1); 
  printf("bool2 = %d\n", bool2); 
  
  return 0; 
}
