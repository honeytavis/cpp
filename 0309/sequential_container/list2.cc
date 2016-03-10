#include <iostream>
#include <list>
#include <array>

void ListPrint(std::list<int>& myList)
{
	for (auto i = myList.cbegin(); i != myList.cend(); ++i) {
		std::cout << *i << " "; 
	}
	std::cout << std::endl; 
}

int main()
{
	std::array<int, 10> myArray = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
	std::list<int> myList(myArray.begin(), myArray.end()); 
	auto i = myList.begin(); 
	i = myList.erase(i); 
	ListPrint(myList); 
	std::cout << *i << std::endl; 

	myList.erase(i, myList.end());
	ListPrint(myList);

	myList.clear(); 
	ListPrint(myList);

	return 0; 
}
