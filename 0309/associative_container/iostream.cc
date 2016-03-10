#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main()
{
	std::vector<int> myVec = {1, 2, 3, 4, 5, 6}; 
	std::ostream_iterator<int, char> osi(std::cout, " - ");
	copy(myVec.begin(), myVec.end(), osi); 
	std::cout << std::endl; 

	return 0; 
}
