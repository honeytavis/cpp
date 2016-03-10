#include <iostream>
#include <array>
#include <set>

int main()
{
	std::array<int, 9> myArray = {2, 1, 3, 5, 4, 2, 3, 5, 6}; 
	//std::set<int> mySet(myArray.begin(), myArray.end()); 
	//std::set<int, std::greater<int>> mySet(myArray.begin(), myArray.end()); 
	//std::multiset<int> mySet(myArray.begin(), myArray.end()); 
	std::multiset<int, std::greater<int>> mySet(myArray.begin(), myArray.end()); 
	std::cout << "mySet.size() = " << mySet.size() << std::endl; 
	for (auto i = mySet.cbegin(); i != mySet.cend(); ++i) {
		std::cout << *i << " "; 
	}
	std::cout << std::endl; 
	return 0; 
}
