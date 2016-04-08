#include <iostream>
#include <iterator>
#include <vector>
#include <list>

int main()
{
	std::vector<int> myVec = {0, 1, 2}; 
	std::list<int> myList; 

	copy(myVec.begin(), 
		 myVec.end(), 
		 std::back_insert_iterator<std::list<int> >(myList)); 
	for (auto i : myList) {
		std::cout << i << ' '; 
	}
	std::cout << '\n'; 

	copy(myVec.begin(), 
		 myVec.end(), 
		 std::front_insert_iterator<std::list<int> >(myList)); 
	for (auto i : myList) {
		std::cout << i << ' '; 
	}
	std::cout << '\n'; 

	copy(myVec.begin(),
	     myVec.end(), 
		 std::insert_iterator<std::list<int> >(myList, ++myList.begin())); 
	for (auto i : myList) {
		std::cout << i << ' '; 
	}
	std::cout << '\n'; 

	return 0; 
}
