#include <iostream>

int main(int argc, char* argv[])
{
	int *p1 = 0; 
	std::cout << "p1 = " << p1 << std::endl; 
	int *p2 = NULL; 
	std::cout << "p2 = " << p2 << std::endl; 
	int *p3 = nullptr; 
	std::cout << "p3 = " << p3 << std::endl; 

	return 0; 
}
