#include <iostream>

int main()
{
	int x = 10; 
	int y = 20; 

	const int* const c = &x; 
	//c = &y; 
	//*c = y; 
	std::cout << "c = " << c << '\n'; 
	std::cout << "*c = " << *c << '\n'; 

	int* const a = &x; 
	//a = &y; 
	*a = y; 
	std::cout << "a = " << a << '\n'; 
	std::cout << "*a = " << *a << '\n'; 

	const int* b = &x; 
	b = &y; 
	//*b = y; 
	std::cout << "b = " << b << '\n'; 
	std::cout << "*b = " << *b << '\n'; 
	
	return 0; 
}
