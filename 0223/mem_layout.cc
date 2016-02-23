#include <iostream>

int main(int argc, char* argv[])
{
	char s1[10] = {0}; 
	char s2[] = "123456789"; 
	char s3[10]; 
	const char s4[10] = "123456789"; 

	std::cout << "addr s1:" << &s1 << std::endl; 
	std::cout << "addr s1:" << &s2 << std::endl; 
	std::cout << "addr s1:" << &s3 << std::endl; 
	std::cout << "addr s4:" << &s4 << std::endl; 

	return 0; 
}
