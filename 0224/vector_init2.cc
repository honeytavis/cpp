#include <iostream>
#include <vector>

int main()
{
	std::vector<int> nvec; //vector为空

	std::cout << "Input numbers: (Ctrl+d to end)" << std::endl; 

	int tmp; 
	while (std::cin >> tmp) {
		nvec.push_back(tmp); 
	}

	for (decltype(nvec.size()) index = 0; 
		!nvec.empty() && index != nvec.size(); ++index) {
		std::cout << nvec[index] << " "; 
	}
	std::cout << std::endl;  

	for (auto index = nvec.begin(); index != nvec.end(); ++index) {
		std::cout << *index << " "; 
	}
	std::cout << std::endl;  

	for (auto i : nvec) {
		std::cout << i << " "; 
	}
	std::cout << std::endl; 
	
	//C++11
	for (auto index = nvec.cbegin(); index != nvec.cend(); ++index) {
		std::cout << *index << " "; 
	}
	std::cout << std::endl;  

	return 0; 
}
