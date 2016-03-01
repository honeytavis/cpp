#include <iostream>
#include "Computer.h"

int main()
{
	Computer pc1("ibm", 7000); 
	std::cout << "sizeof(pc1): " << sizeof(pc1) << std::endl; 
	//与struct类似 class在内存中存放时也要对齐
	//std::cout << "sizeof(float): " << sizeof(float) << std::endl; 
	//std::cout << "sizeof(double): " << sizeof(double) << std::endl; 

	return 0; 
}
