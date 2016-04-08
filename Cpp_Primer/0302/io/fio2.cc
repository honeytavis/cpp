#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>

int main()
{
	std::ifstream ifs("io1.cc"); 
	if (!ifs.good()) {
		std::cout << "ifstream error" << std::endl; 
		exit(-1); 
	}

	// 文件若不存在则自动创建
	// 文件若存在则删除其数据
	std::ofstream ofs("test.txt"); 
	if (!ofs.good()) {
		std::cout << "ofstream error" << std::endl; 
		exit(-1); 
	}

	std::string s; 
	std::vector<std::string> vec_str; 
	while (getline(ifs, s)) {
		ofs << s << std::endl; 
	}

	ifs.close(); 
	ofs.close(); 

	return 0; 
}
