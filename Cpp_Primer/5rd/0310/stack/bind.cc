#include <iostream>
#include <functional>

int add(int x, int y)
{
	std::cout << "int add(int, int)" << std::endl; 
	return x+y; 
}

class A {
public:
	int add(int x, int y)
	{
		std::cout << "A::int add(int, int)" << std::endl; 
		return x+y; 
	}

private:
	
}; 

int main()
{
	auto f1 = std::bind(add, 10, std::placeholders::_1); 
	std::cout << f1(20) << '\n'; 

	A a; 
	auto f2 = std::bind(&A::add, 
                        a,
						std::placeholders::_1,
						std::placeholders::_2); 

	std::cout << f2(3, 4) << '\n'; 

	return 0; 
}
