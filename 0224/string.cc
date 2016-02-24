#include <iostream>
#include <string>

int main()
{
	std::string s("hello world!"); 
	for (decltype(s.size()) index = 0; 
		!s.empty() && index < s.size(); ++index) {
		std::cout << s[index]; 
	}
	std::cout << std::endl; 
	std::cout << s << std::endl; 

	return 0; 
}
