#include <iostream>

namespace A
{
	void dispA()
	{
		std::cout << "This is A" << std::endl; 
	}
}

//using namespace A; 

int main(int argc, char* argv[])
{

	//using A::dispA; 
	//dispA(); 
	
	A::dispA(); 

	return 0; 
}
