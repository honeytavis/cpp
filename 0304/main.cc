#include <iostream>
#include <vector>
#include "String.h"

int main()
{
	String s1;
	std::cout << s1 << '\n'; 

	String s2("hello world"); 
	std::cout << s2 << '\n'; 

	String s3(s2); 
	std::cout << s3 << '\n'; 

	s1 = s2; 
	std::cout << s1 << '\n'; 

	char ch[] = "lenovo lenovo lenovo"; 
	s1 = ch; 
	std::cout << s1 << '\n'; 

	s1 += s2; 
	std::cout << s1 << '\n'; 

	s1 += "nihao"; 
	std::cout << s1 << '\n'; 

	s1[0] = '*'; 
	std::cout << s1 << '\n'; 

	const String s4("thinkpad"); 
	std::cout << "s4: " << s4.c_str() << std::endl; 
	std::cout << "s4[0] = " << s4[0] << std::endl; 
	std::cout << "s4.size() = " << s4.size() << std::endl; 
	//s4[0] = '*'; 
	//std::cout << s4 << std::endl; 


	if (s4 != s2) {
		std::cout << "s4 != s2" << '\n'; 
	} 

	std::vector<String> myVec; 
	myVec.push_back("hello"); 
	std::cout << myVec[0] << '\n'; 

	std::cout << "Please input your name:" << '\n'; 
	std::cin >> s3; 
	std::cout << s3 << std::endl; 
	
	return 0; 
}
