#include <iostream>

char gs1[10] = {0}; 
char gs2[] = "123456789"; 
char gs3[10]; 
const char gs4[10] = "123456789"; 

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

	std::cout << "addr gs1:" << &gs1 << std::endl; 
	std::cout << "addr gs2:" << &gs2 << std::endl; 
	std::cout << "addr gs3:" << &gs3 << std::endl; 
	std::cout << "addr gs4:" << &gs4 << std::endl; 

	return 0; 
}
