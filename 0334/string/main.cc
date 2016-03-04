#include <iostream>
#include "String.h"

int main()
{
	String s1;
	s1.Print(); 

	String s2("hello world"); 
	s2.Print(); 

	String s3(s2); 
	s3.Print(); 

	s1 = s2; 
	s1.Print(); 

	char ch[] = "lenovo"; 
	s1 = ch; 
	s1.Print(); 

	s1 += s2; 
	s1.Print(); 

	s1 += "nihao"; 
	s1.Print(); 

	s1[0] = '*'; 
	s1.Print(); 

	const String s4("thinkpad"); 
	std::cout << "s4: " << s4.c_str() << std::endl; 
	std::cout << "s4[0] = " << s4[0] << std::endl; 
	std::cout << "s4.size() = " << s4.size() << std::endl; 
	//s4[0] = '*'; 
	//std::cout << s4 << std::endl; 


	if (s4 != s2) {
		std::cout << "s4 != s2" << std::endl; 
	} 
	if (s4 == s3) {
		std::cout << "s4 == s3" << std::endl; 
	}
	if (s2 < s4) {
		std::cout << "s2 < s4" << std::endl; 
	}
	if (s2 <= s4) {
		std::cout << "s2 <= s4" << std::endl; 
	}
	if (s4 > s2) {
		std::cout << "s4 > s2" << std::endl; 
	}
	if (s4 >= s2) {
		std::cout << "s4 >= s2" << std::endl; 
	}

	s1 = s2 + s3; 
	std::cout << s1 << std::endl; 

	s1 = ch + s3; 
	std::cout << s1 << std::endl; 

	s1 = s2 + ch; 
	std::cout << s1 << std::endl; 

	std::cout << "Please input your string:" << std::endl; 
	std::cin >> s1; 
	std::cout << s1 << std::endl; 

	return 0; 
}
