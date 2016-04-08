#include <iostream>
#include <cstdlib>
#include <fstream>

int main()
{
	std::ofstream ofs("test.txt", std::ios::app); //以追加方式打开文件
	if (!ofs.good()) {
		std::cout << "ofstream error" << std::endl; 
		exit(-1); 
	}

	// tellp() 获取当前文件指针的位置
	std::cout << ofs.tellp() << std::endl;
	ofs << "that's new" << std::endl; 
	ofs.close(); 

	return 0; 
}
