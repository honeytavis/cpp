#include <iostream>
#include "Singleton2.h"

int main()
{
	Singleton* s1 = Singleton::getSingleton(); 
	Singleton* s2 = Singleton::getSingleton(); 

	std::cout << "addr s1: " << static_cast<void *>(s1) << std::endl; 
	std::cout << "addr s2: " << static_cast<void *>(s2) << std::endl; 

	return 0; 
}
