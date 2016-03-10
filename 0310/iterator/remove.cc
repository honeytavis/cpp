#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::vector<int> myVec; 
	for (size_t i = 0; i != 10; ++i) {
		myVec.push_back(i); 
	}
	myVec[3] = myVec[5] = myVec[9] = 99; 

	for (auto const& i : myVec) {
		std::cout << i << ' '; 
	}
	std::cout << '\n'; 

	auto ret = remove(myVec.begin(), myVec.end(), 99); 
	for (auto const& i : myVec) {
		std::cout << i << ' '; 
	}
	std::cout << '\n'; 

	// erase-remove 防止迭代器失效 
	myVec.erase(ret, myVec.end()); 
	for (auto const& i : myVec) {
		std::cout << i << ' '; 
	}
	std::cout << '\n'; 

	return 0; 
}
