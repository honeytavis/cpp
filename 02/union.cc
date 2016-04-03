#include <iostream>

union student1 {
  char ID[10]; 
  char Name[10]; 
  double grade[5]; 
}; 

struct student2 {
  char ID[10]; 
  char Name[10]; 
  double grade[5]; 
}; 

int main()
{
  std::cout << "sizeof(union) =  " << sizeof(student1) << '\n';
  std::cout << "sizeof(struct) =  " << sizeof(student2) << '\n'; 

  return 0; 
}
