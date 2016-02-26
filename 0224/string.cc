#include <iostream>
#include <string>

int main()
{
	std::string s("hello world!"); 
	std::cout << s << std::endl; 

	//string 遍历 -- 下标法
	for (decltype(s.size()) index = 0; 
		!s.empty() && index < s.size(); ++index) {
		std::cout << s[index] << " "; 
	}
	std::cout << std::endl; 
	
	//string遍历 -- 迭代 
	auto b = s.begin(); 
	auto e = s.end(); 
	while (b != e) {
		std::cout << *b++ << " "; 
	}
	std::cout << std::endl; 

	return 0; 
}
