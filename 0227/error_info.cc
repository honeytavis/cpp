#include <iostream>

int main()
{
		if (1) {
			std::cerr << "Error: " << __FILE__ 
					  << " in function " << __func__ 
					  << " at line " << __LINE__ << std::endl
					  << "       Compiled on " << __DATE__ 
					  << " at " << __TIME__ << std::endl; 
		}

		return 0; 
}
