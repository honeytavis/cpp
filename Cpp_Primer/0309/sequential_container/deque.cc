#include <iostream>
#include <array>
#include <deque>

int main()
{
	std::array<int, 6> myArray = {0, 1, 2, 3, 4, 5}; 
	std::deque<double> myDeque(myArray.cbegin(), myArray.cend()); 
	std::cout << myDeque.front() << std::endl; 
	std::cout << myDeque.back() << std::endl; 

	return 0; 
}
