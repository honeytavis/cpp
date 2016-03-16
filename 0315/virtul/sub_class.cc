#include <iostream>

class Base {
public:
	virtual void func(int x)
	{
		std::cout << "Base::func(int)" << '\n'
				  << "x = " << x << '\n'; 
	}
}; 

class Sub : public Base {
public:
	void func(int x) // <=> virtual void func(int x)
	{
		std::cout << "Sub::func(int)" << '\n'
				  << "x = " << ++x << '\n'; 
	}
}; 

int main()
{
	Base bc; 
	Sub  sc; 

	Base& rbc = bc; 
	Base& rsc = sc;
	rbc.func(20); 
	rsc.func(20); 

	sc.Base::func(10); 
	sc.func(10); 

	return 0; 
}
