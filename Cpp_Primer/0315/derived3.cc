#include <iostream>

class A {
public:
	A(int x = 0) : x_(x)
	{
		std::cout << "A(int)" << '\n'; 
	}
	
	~A() 
	{
		std::cout << "~A()" << '\n'; 
	}

private:
	int x_; 
}; 

class B {
public:
	B(int y = 0) : y_(y)
	{
		std::cout << "B(int)" << '\n'; 
	}

	~B()
	{
		std::cout << "~B()" << '\n'; 
	}

private:
	int y_; 
}; 

class C {
public:
	C()
	{
		std::cout << "C()" << '\n'; 
	}

	~C()
	{
		std::cout << "~C()" << '\n'; 
	}

private:
}; 

class D : public A, public B { // 申明顺序 --> 初始化顺序
public:
	D(int x, int y, int z) 
	: A(x)
	, B(y)
	, z_(z)
	, c_()
	{
		std::cout << "D(int, int, int)" << '\n'; 
	}

	~D()
	{
		std::cout << "~D()" << '\n'; 
	}

private:
	int z_; 
	C c_; 
}; 

int main()
{
	D(1, 2, 3); 
	return 0; 
}
