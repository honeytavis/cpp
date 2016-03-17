#include <iostream>

class Base0 {
public:
	Base0()
	{
		std::cout << "Base0()" << '\n'; 
	}

	virtual void func1() 
	{
		std::cout << "Base0::func1()" << '\n'; 
	}

	virtual void func2()
	{
		std::cout << "Base0::func2()" << '\n'; 
	}

	~Base0()
	{
		std::cout << "~Base0()" << '\n'; 
	}
}; 

class Base1 : public Base0 {
public:
	Base1()
	{
		std::cout << "Base1()" << '\n'; 
		func1(); 
	}

	void func1() override
	{
		std::cout << "Base1::func1()" << '\n'; 
	}

	void func2() override
	{
		std::cout << "Base1::func2()" << '\n'; 
	}

	~Base1()
	{
		std::cout << "~Base1()" << '\n'; 
		func2(); 
	}
}; 

class Base2 : public Base1 {
public:
	Base2()
	{
		std::cout << "Base2()" << '\n'; 
		func1(); 
	}

	void func1() override
	{
		std::cout << "Base2::func1()" << '\n'; 
	}

	void func2() override
	{
		std::cout << "Base2::func2()" << '\n'; 
	}

	~Base2()
	{
		std::cout << "~Base2()" << '\n'; 
		func2(); 
	}
}; 

int main()
{
	Base2 bc; 
	return 0; 
}
