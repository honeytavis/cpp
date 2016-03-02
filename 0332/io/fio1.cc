#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>

int main()
{
	std::ifstream ifs("io1.cc"); 
	if (!ifs.good()) {
		std::cout << "open file error" << std::endl; 
		exit(-1); 
	}

	std::string s; 
	std::vector<std::string> vec_str; 
	//while (ifs >> s) {
	//while (getline(ifs, s)) {
	while (getline(ifs, s)) {
		//std::cout << s << std::endl; 
		vec_str.push_back(s); 
	}
	for (auto i : vec_str) {
		std::cout << i << std::endl; 
	}

	ifs.close(); 

	return 0; 
}
