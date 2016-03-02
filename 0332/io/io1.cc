#include <iostream>
#include <limits>

void PrintCin()
{
	std::cout << "bad = " << std::cin.bad() << std::endl; 
	std::cout << "fall = " << std::cin.fail() << std::endl; 
	std::cout << "eof = " << std::cin.eof() << std::endl; 
	std::cout << "good = " << std::cin.good() << std::endl; 
}

int main()
{
	PrintCin(); 

	int num; 
	while (std::cin >> num) {
		std::cout << num << std::endl;  
	}
	PrintCin(); 
	std::cin.clear(); 
	//std::cin.ignore(1024,'\n'); //刷新输入缓冲区	

	// skip bad input
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
	std::cout << std::endl; 
	PrintCin(); 

	std::string s; 
	std::cin >> s; 
	std::cout << s << std::endl; 

	return 0; 
}
