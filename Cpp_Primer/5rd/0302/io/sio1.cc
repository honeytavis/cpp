#include <iostream>
#include <sstream>
#include <string>
#include <cstdio>

int main()
{
	int ival = 512; 
	int ival2 = 1024;
	std::stringstream ss; 
	ss << "ival = " << ival << ", ival2 = " << ival2; 
	std::string s = ss.str(); 
	std::cout << s << std::endl; 

	while (ss >> s)
	{
		std::cout << s << std::endl; 
	}

	return 0; 	
}
