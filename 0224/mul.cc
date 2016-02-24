#include <iostream>

int main()
{
	int i1 = -1; 
	unsigned i2 = 1; 
	int j1 = 1; 
	unsigned j2 = -1; 

	std::cout << "(int) -1 * (int) 1 = " << i1 * j1 << std::endl; 
	std::cout << "(int) -1 * (unsigned) 1 = " << i1 * i2 << std::endl; 
	std::cout << "(unsigned) -1 * (int) 1 = " << j2 * j1 << std::endl; 
	std::cout << "(unsigned) -1 * (unsigned) 1 = " << j2 * i2 << std::endl; 

	return 0; 
}

/*
(int) -1 * (int) 1 = -1
(int) -1 * (unsigned) 1 = 4294967295
(unsigned) -1 * (int) 1 = 4294967295
(unsigned) -1 * (unsigned) 1 = 4294967295
*/
