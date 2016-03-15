#include <iostream>

class Base {
public:
	Base()
	{
		std::cout << "Base()" << std::endl; 
	}

	~Base()
	{
		std::cout << "~Base()" << std::endl; 
	}

	Base(int ix) : _ix(ix)
	{
		std::cout << "Base()" << std::endl; 
	}

private:
	int _ix; 
}; 

class Derived : public Base {
public:
	Derived() : Base()
	{
		std::cout << "Derived()" << std::endl; 
	}

	Derived(int i, int j) : Base(j)
	{
		std::cout << "Derived(int, int)" << std::endl; 
	}

	//~Derived() : ~Base() // error
	~Derived() // ~Base() 自动调用
	{
		std::cout << "~Derived()" << std::endl; 
	}
}; 

int main()
{
	Derived d1(2, 3); 
	return 0; 
}
