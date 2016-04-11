#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::vector<std::string> svec(10, "hello"); 
	for (auto i : svec) {
		std::cout << i << " ";  
	}
	std::cout << std::endl; 

	std::vector<int> nvec1(10, 666); 
	for (auto i : nvec1) {
		std::cout << i << " ";  
	}
	std::cout << std::endl; 

	std::vector<int> nvec2{10, 666};
	for (auto i : nvec2) {
		std::cout << i << " ";  
	}
	std::cout << std::endl; 
}

