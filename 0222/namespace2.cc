#include <iostream>

namespace A
{
	void dispA()
	{
		std::cout << "This is A" << std::endl; 
	}
}

using namespace A; 

int main(int argc, char* argv[])
{
	A::dispA(); 
	return 0; 
}
