#include <iostream>

//#define NDEBUG

int main()
{
  std::cout << "hello world!" << std::endl; 

#ifndef NDEBUG
  std::cerr << '\n'
            << '[' << __DATE__ << ']'
            << '[' << __TIME__ << ']'
            << '[' << __FILE__ << ']' 
            << '[' << __func__ << ']'
            << '[' << __LINE__ << ']'
            << '\n'; 
#endif

		return 0; 
}
