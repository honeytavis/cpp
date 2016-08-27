#include <iostream>
#include <array>
#include <list>

int main()
{
	std::array<int, 5> myArray = {1, 2, 3, 4, 5}; 
	std::list<int> myList(myArray.cbegin(), myArray.cend()); 
	myList.push_front(9); 
	for (auto it = myList.cbegin(); it != myList.cend(); ++it) {
		std::cout << *it << ' '; 
	}
	std::cout << std::endl; 
	std::cout << "myList.size() = " << myList.size() << std::endl; 
	// list.capacity()
	//std::cout << "myList.capacity() = " << myList.capacity() << std::endl;
	
	myList.pop_front(); 
	for (auto it = myList.cbegin(); it != myList.cend(); ++it) {
		std::cout << *it << ' '; 
	}
	std::cout << std::endl; 
	std::cout << "myList.size() = " << myList.size() << std::endl; 

	return 0; 
}
