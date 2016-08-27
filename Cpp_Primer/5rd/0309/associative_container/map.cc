#include <iostream>
#include <map>
#include <unordered_map>
#include <string>

int main()
{
	std::pair<int, std::string> t(600036, "abcde"); 
	std::cout << t.first << "-->" << t.second << std::endl; 

	std::array<std::pair<int, std::string>, 4> pairArray = {
		std::pair<int, std::string>(9, "Asia"),
		std::pair<int, std::string>(4, "Africa"),
		std::pair<int, std::string>(1, "Euro"),
		std::pair<int, std::string>(4, "America"),
	}; 
	for (auto i : pairArray) {
		std::cout << i.first << "-->" << i.second << std::endl; 
	}

	//std::map<int, std::string> myMap(pairArray.begin(), pairArray.end()); 
	//std::multimap<int, std::string> myMap(pairArray.begin(), pairArray.end()); 
	std::unordered_map<int, std::string> myMap(pairArray.begin(), pairArray.end()); 

	myMap[3] = "China"; 
	std::cout << "myMap.size() = " << myMap.size() << std::endl; 
	for (auto i : myMap) {
		std::cout << i.first << "-->" << i.second << std::endl; 
	}
	for (auto i = myMap.begin(); i != myMap.end(); ++i) {
		std::cout << i->first << "-->" << i->second << std::endl; 
	}

	std::cout << "1-->" << myMap[1] << std::endl; // key to value

	return 0; 
}
