#include <cstdlib>
#include <iostream>
#include <fstream>

int main()
{
 	//read and write
	std::fstream ofs("test.txt", std::ios::out | std::ios::in);
	if (!ofs.good()) {
		std::cout << "fstream error" << std::endl; 
		exit(-1); 
	}

	int ival; 
	for (size_t i = 0; i != 5; ++i) {
		std::cin >> ival; 
		ofs << ival << ' '; 
	}
	std::cout << ofs.tellg() << std::endl; //tellg() 指向文末
	ofs.seekg(0, std::ios::beg);
	for (size_t i = 0; i != 5; ++i) {
		ofs >> ival; 
		std::cout << ival << ' '; 
	}

	ofs.close(); 

	return 0; 
}
