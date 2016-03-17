#include <iostream>

class Base {
public:
	//void display()
	virtual void display()
	{
		std::cout << "hello base" << '\n'; 
	}
};

class Child1 : public Base {
public:
#if 0 
	void display()
	{
		std::cout << "hello child1" << '\n'; 
	}
#endif
}; 

class Child2 : public Base {
public:
	void display()
	{
		std::cout << "hello Child2" << '\n';
	}
}; 

int main()
{
	Base objBase; 
	Child1 objChild1; 
	Child2 objChild2; 
	Base* pBase = nullptr; 

	pBase = &objBase; 
	pBase->display(); 
	
	pBase = &objChild1; 
	pBase->display(); 

	pBase = &objChild2; 
	pBase->display(); 

	//virtual void display()
	std::cout << "sizeof(Base) = " << sizeof(Base) << '\n'; 
	std::cout << "sizeof(Child1) = " << sizeof(Child1) << '\n'; 
	
	return 0; 
}
