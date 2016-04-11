#include <iostream>

int main()
{
  std::cout << "sizeof(char): " << sizeof(char) << '\n'; 
  //std::cout << "sizeof(short char): " << sizeof(short char) << '\n'; 
  //std::cout << "sizeof(long char): " << sizeof(long char) << '\n'; 
  std::cout << "sizeof(signed char): " << sizeof(signed char) << '\n'; 
  std::cout << "sizeof(unsigned char): " << sizeof(unsigned char) << '\n'; 
  std::cout << '\n'; 

  std::cout << "sizeof(int): " << sizeof(int) << '\n'; 
  std::cout << "sizeof(short): " << sizeof(short) << '\n'; 
  std::cout << "sizeof(long): " << sizeof(long) << '\n'; 
  std::cout << "sizeof(signed): " << sizeof(signed) << '\n'; 
  std::cout << "sizeof(unsigned): " << sizeof(unsigned) << '\n'; 
  std::cout << '\n'; 

  std::cout << "sizeof(float): " << sizeof(float) << '\n'; 
  //std::cout << "sizeof(short float): " << sizeof(short float) << '\n'; 
  //std::cout << "sizeof(long float): " << sizeof(long float) << '\n'; 
  //std::cout << "sizeof(signed float): " << sizeof(signed float) << '\n'; 
  //std::cout << "sizeof(unsigned float): " << sizeof(unsigned float) << '\n'; 
  std::cout << '\n'; 

  std::cout << "sizeof(double): " << sizeof(double) << '\n'; 
  //std::cout << "sizeof(short double): " << sizeof(short double) << '\n'; 
  std::cout << "sizeof(long double): " << sizeof(long double) << '\n'; 
  //std::cout << "sizeof(signed double): " << sizeof(signed double) << '\n'; 
  //std::cout << "sizeof(unsigned double): " << sizeof(unsigned double) << '\n'; 

  return 0; 
}
