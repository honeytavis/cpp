#include <iostream>

int main(int argc, char* argv[])
{
	bool i = true; 
	bool j = false; 

	std::cout << "i = " << i << " " << "j = " << j << std::endl; 

	std::cout << std::boolalpha; 
	std::cout << "i = " << i << " " << "j = " << j << std::endl; 
	std::cout << std::noboolalpha; 


	return 0; 
}
