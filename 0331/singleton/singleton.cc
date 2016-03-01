#include <iostream>
#include "Singleton.h"

int main()
{
	Singleton *p1 = Singleton::GetInstance(); 
	Singleton *p2 = Singleton::GetInstance(); 
	std::cout << "addr p1: " << static_cast<void *>(p1) << std::endl; 
	std::cout << "addr p2: " << static_cast<void *>(p2) << std::endl; 

	return 0; 
}
