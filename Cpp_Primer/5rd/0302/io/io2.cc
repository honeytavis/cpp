#include <iostream>
#include <limits> 

int main()
{
	int ival; 
	while(std::cin >> ival, !std::cin.eof()) {
		if (std::cin.bad()) {
			std::cout << "IO stream corrupted!" << std::endl; 
			return -1; 
		}

		if (std::cin.fail()) {
			std::cout << "illegal data, try again!" << std::endl; 
			std::cin.clear(); 
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue; 
		}
		std::cout << ival << std::endl; 
	}

	return 0; 
}
