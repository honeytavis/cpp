#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

int main()
{
	std::vector<int> myVec; 
	std::istream_iterator<int, char> isi(std::cin); 
	copy(isi, std::istream_iterator<int, char>(), back_inserter(myVec)); 

	std::vector<int>::const_iterator iter; 
	for (iter = myVec.begin(); iter != myVec.end(); ++iter) {
		std::cout << *iter << " "; 
	}
	std::cout << std::endl; 

	return 0; 
}
