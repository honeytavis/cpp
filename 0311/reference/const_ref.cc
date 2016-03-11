#include <iostream>

int main()
{
	int a = 10; 
	int& refa = a; 

	const int b = 3; 
	const int& refb = b; 

	const int& refc = a; 

	const int& refd = 100; 
	
	int&& refe = 100; // C++11

	//int&& reff = a; 

	return 0; 
}
