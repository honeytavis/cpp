#include <iostream>

int main()
{
	unsigned scores[11]{33, 44, 55, 66, 77, 88, 99}; 

	unsigned *b = scores; 
	unsigned *e	= scores + 11; 
	while (b != e) {
		std::cout << *b++ << " "; 
	}
	std::cout << std::endl; 

	//遍历数组推荐使用范围for循环
	for (auto i : scores) {
		std::cout << i << " "; 
	}
	std::cout << std::endl; 

	return 0; 
}
