#include <iostream>
#include <cstdlib>
#include <fstream>

int main()
{
	std::ofstream ofs("test.txt", std::ios::ate); 
	//对于 ofstream 清空当前文件
	if (!ofs.good()) {
		std::cout << "ofstream error" << std::endl; 
		exit(-1); 
	}

	std::cout << ofs.tellp() << std::endl;
	ofs << "that's new" << std::endl; 
	ofs.close(); 

	return 0; 
}
