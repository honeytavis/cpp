#include <iostream>
#include <cstdlib>
#include "TextQuery.h"

int main(int argc, char** argv)
{
	if (argc != 3) {
		std::cout << "error args" << std::endl; 
		exit(0); 
	}

	TextQuery text; 
	text.readFile(argv[1]); 
	text.writeFile(argv[2]); 

	std::string word; 
	std::cout << "Please input the word:"; 
	for (;;) {
		std::cin >> word; 
		if (!word.empty()) {
			text.wordQuery(word); 
			std::cout << std::endl; 
			std::cout << "You can search again or exit(Ctrl+C):"; 
		} else {
			break; 
		}
	}

	return 0; 
}
