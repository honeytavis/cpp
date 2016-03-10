#include <iostream>
#include <algorithm>
#include <vector>

void print(std::vector<int>::value_type v)
{
	std::cout << v << ' '; 
}

int main()
{
	std::vector<int> myVec{1, 2, 3, 4, 5, 6}; // C++11
	for_each(myVec.begin(), myVec.end(), print); 

	return 0; 
}
