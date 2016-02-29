#include <iostream>
#include "Computer.h"

int main()
{
	Computer pc1(7000); 
	std::cout << "buy pc1" << std::endl; 
	pc1.Print(); 
	Computer pc2(4999); 
	std::cout << "buy pc2" << std::endl; 
	pc2.Print(); 
	Computer pc3(3000); 
	std::cout << "buy pc3" << std::endl; 
	pc3.Print(); 

	return 0; 
}
