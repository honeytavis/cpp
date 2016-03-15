#include <iostream>

class BaseClass {
public:
	int func(int ix)
	{
		std::cout << "BaseClass::func(int)" << '\n'; 
		return ix_; 
	}
	
	int print()
	{
		return ix_; 
	}

private:
	int ix_; 
}; 

class DerivedClass : public BaseClass {
public:
	int func()
	{
		std::cout << "DerivedClass::func()" << '\n'; 
		ix_ = 9; 
		//BaseClass::ix_ = 22; // error
		return ix_; 
	}
	
	int print()
	{
		return ix_; 
	}

private:
	int ix_; 
}; 

std::ostream& operator<<(std::ostream& os, DerivedClass& rhs)
{
	os << "DerivedClass::ix_ = " << rhs.print()<< ' '
	   << "BaseClass::ix_ = " << rhs.BaseClass::print(); 
	return os; 
}

int main()
{
	DerivedClass d1; 
	//d1.func(3); 
	d1.BaseClass::func(3); 
	std::cout << d1 << '\n'; 
	d1.func(); 
	std::cout << d1 << '\n'; 

	return 0; 
}
