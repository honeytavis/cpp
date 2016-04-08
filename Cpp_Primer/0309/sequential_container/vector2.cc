#include <iostream>
#include <vector>

void VectorPrint(std::vector<int>& vec)
{
	for (auto i = vec.cbegin(); i != vec.cend(); ++i) {
		std::cout << *i << ' '; 
	}
	std::cout << std::endl; 
}

int main()
{
	std::vector<int> myVec(5, 0); 

	auto it = myVec.end(); 
	it = myVec.insert(it, 1); 
	VectorPrint(myVec); 
	std::cout << *it << std::endl; 

	myVec.insert(it, 2, 3); 
	VectorPrint(myVec); 
	std::cout << *it << std::endl; 

	return 0; 
}
