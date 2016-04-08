#include <iostream>
#include "String.h"

int main()
{
	String s1; 
	String s2(s1); 
	std::cout << "s1.ref: " << s1.Ref() << std::endl; 
	std::cout << "s2.ref: " << s2.Ref() << std::endl; 

	String s3("hello world"); 
	std::cout << "s3: " << s3 << std::endl; 
	std::cout << "s3.ref: " << s3.Ref() << std::endl; 
	s1 = s3; 
	std::cout << "s1.ref: " << s1.Ref() << std::endl; 
	std::cout << "s2.ref: " << s2.Ref() << std::endl; 
	std::cout << "s3.ref: " << s3.Ref() << std::endl; 

	s1 = "hello world"; 
	s2 = "hello world"; 
	std::cout << "s1.ref: " << s1.Ref() << std::endl; 
	std::cout << "s2.ref: " << s2.Ref() << std::endl; 

	s1[0] = 'H'; 
	std::cout << "s1: " << s1 << std::endl; 
	std::cout << "s2: " << s2 << std::endl; 
	std::cout << "s3: " << s3 << std::endl; 

	const String s4 = "lenovo"; 
	std::cout << "s4: " << s4.c_str() << std::endl; 
	std::cout << "s4[0]: " << s4[0] << std::endl; 
	std::cout << "s4.size: " << s4.size() << std::endl; 
	s1 += s4; 
	std::cout << "s1: " << s1 << std::endl; 
	std::cout << "s4.size: " << s1.size() << std::endl; 

	if (s2 == s3) {
		std::cout << "s2 == s3" << std::endl; 
	}

/*
	std::cout << "Please input your string:" << std::endl; 
	std::cin >> s2; 
	std::cout << "new s2: " << s2 << std::endl; 
*/
	s3 = s1 + s2; 
	std::cout << "s3: " << s3 << std::endl; 

	return 0; 
}
