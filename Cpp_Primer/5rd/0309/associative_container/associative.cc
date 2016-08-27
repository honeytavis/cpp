#include <iostream>
#include <map>
#include <set>
#include <string>
#include <array>

int main()
{
	std::array<std::pair<int, std::string>, 2> pairArray = {
		std::pair<int, std::string>(1, "A"),
		std::pair<int, std::string>(2, "B"),
	}; 
	std::map<int, std::string> myMap(pairArray.begin(), pairArray.end()); 

	std::pair<int, std::string> t(2, "X"); 
	//auto ret = myMap.insert(t); 
	std::pair<std::map<int, std::string>::iterator, bool> ret = myMap.insert(t); 
	if (ret.second) {
		std::cout << "succeed insert" << std::endl; 
	} else {
		std::cout << "fail insert: ivalid key" << std::endl
				  << (ret.first)->first << "-->"
				  << (ret.first)->second << std::endl;  
	}

	std::multimap<int, std::string> myMultiMap(pairArray.begin(), pairArray.end()); 
	auto ret2 = myMultiMap.insert(t); 
	std::cout << "succeed insert" << std::endl
			  << ret2->first << "-->"
			  << ret2->second << std::endl;  

	return 0; 
}
