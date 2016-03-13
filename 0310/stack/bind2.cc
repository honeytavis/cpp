#include <iostream>
#include <functional>

void f(int n1, int n2, int n3, const int& n4,  int n5)
{
	std::cout << n1 << ' ' << n2 << ' '
	          << n3 << ' ' << n4 << ' '
			  << n5 << ' ' << '\n'; 
}

int g(int n1)
{
	return n1; 
}

struct Foo {
	void print_sum(int n1, int n2)
	{
		std::cout << n1 + n2 << std::endl; 
	}

	int date = 10; 
}; 

int main()
{
	int n = 7; 
	auto f1 = std::bind(f, 
						std::placeholders::_2, 
	                    std::placeholders::_1, 
						42, 
						std::cref(n), 
						n); 
	n = 10; 
	f1(1, 2, 1001); 

	Foo foo; 
	auto f3 = std::bind(&Foo::print_sum, 
	                    &foo, 
						std::placeholders::_1, 
						std::placeholders::_3); 
	f3(10, 20, 30); 

	auto f4 = std::bind(&Foo::date, 
	                    std::placeholders::_1); 
	std::cout << f4(foo) << '\n';

	auto f5 = std::bind(&Foo::date, foo); 
	std::cout << f5() << '\n';

	return 0; 
}
