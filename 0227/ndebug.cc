#include <iostream>
//#define NDEBUG

int main()
{
#ifndef NDEBUG
		std::cout << "OK!" << std::endl; 
#endif
		std::cout << "hello world!" << std::endl; 

		return 0; 
}
