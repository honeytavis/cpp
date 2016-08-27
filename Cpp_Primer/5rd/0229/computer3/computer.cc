#include <iostream>
#include "Computer.h"

int main()
{
	Computer pc1("IBM", 7000); 
	std::cout << "buy pc1" << std::endl; 
	//pc1.Print(pc1); 
	Computer::Print(pc1); 

	Computer pc2("Lenovo", 4999); 
	std::cout << "buy pc2" << std::endl; 
	pc2.Print(pc2); 

	Computer pc3("Dell", 3000); 
	std::cout << "buy pc3" << std::endl; 
	Computer::Print(pc3); 

	pc2.~Computer(); 
	Computer::PrintTotal(); 

	return 0; 
}
