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

void test(Base& x)
{
	x.func(5); 
}

int main()
{
	Base bc; 
	Sub  sc; 
	test(bc); 
	test(sc); 

	sc.Base::func(10); 
	sc.func(10); 

	Base& rbc = bc; 
	rbc.func(20); 
	Sub& rsc = sc;
	rsc.func(20); 

	return 0; 
}
