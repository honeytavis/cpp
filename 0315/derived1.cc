#include <iostream>

class Base {
public:
#if 1
	Base() 
	{
		std::cout << "Base()" << std::endl; 
	}
#endif

private:
	int _ix; 
}; 

class Derived : public Base {
public:
#if 1 
	Derived()
	{
		std::cout << "Derived()" << std::endl; 
	}
#endif

}; 

int main()
{
	Derived der; 
	return 0; 
}
