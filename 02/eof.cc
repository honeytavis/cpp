#include <cstdio>
#include <iostream>

int main()
{
		int ch; 
		//char ch; 

		//EOF : Ctrl+d
		while ((ch = std::cin.get()) != EOF) {
			std::cout.put(ch); 
		}

		return 0; 
}
