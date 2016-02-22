#include <iostream>

int main(int argc, char* argv[])
{
	int a = 10; 
	int b = 20; 
	int c = 30; 

	int &j = a; 
	std::cout << "&j = a" << std::endl; 
	std::cout << "a = " << a << " ";
	std::cout << "&a = " <<  &a << std::endl; 
	std::cout << "b = " << b << " ";
	std::cout << "&b = " <<  &b << std::endl; 
	std::cout << "c = " << c << " ";
	std::cout << "&c = " <<  &c << std::endl; 
	std::cout << "j = " << j << " ";
	std::cout << "&j = " <<  &j << std::endl; 


	j = b; 
	std::cout << "j = b" << std::endl; 
	std::cout << "a = " << a << " ";
	std::cout << "&a = " <<  &a << std::endl; 
	std::cout << "b = " << b << " ";
	std::cout << "&b = " <<  &b << std::endl; 
	std::cout << "c = " << c << " ";
	std::cout << "&c = " <<  &c << std::endl; 
	std::cout << "j = " << j << " ";
	std::cout << "&j = " <<  &j << std::endl; 

	a = c; 
	std::cout << "a = c" << std::endl; 
	std::cout << "a = " << a << " ";
	std::cout << "&a = " <<  &a << std::endl; 
	std::cout << "b = " << b << " ";
	std::cout << "&b = " <<  &b << std::endl; 
	std::cout << "c = " << c << " ";
	std::cout << "&c = " <<  &c << std::endl; 
	std::cout << "j = " << j << " ";
	std::cout << "&j = " <<  &j << std::endl; 

	return 0; 
}
