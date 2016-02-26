#include <iostream>
#include <string>

int main()
{
	std::string s("hello world!"); 

	std::cout << s << std::endl; 

	for (decltype(s.size()) index = 0; 
		!s.empty() && index < s.size(); ++index) {
		std::cout << s[index]; 
	}
	std::cout << std::endl; 

	const char *s1 = s.c_str();  
	std::cout << s1 << std::endl; 

	return 0; 
}
