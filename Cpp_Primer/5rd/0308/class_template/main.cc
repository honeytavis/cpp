#include <iostream>
#include "MyStack.h"

int main()
{
	Stack<int, 10> stack; 
	std::cout << "Is stack empty? " << stack.empty() << std::endl; 
	stack.push(5); 
	std::cout << "Is stack still empty? " << stack.empty() << std::endl; 

	for (int i = 1; i != 10; ++i) {
		if (!stack.push(i)) {
			std::cout << "push fail" << std::endl; 
		}
	}
	std::cout << "Is stack full? " << stack.full() << std::endl; 

	int rec = 0; 
	while (stack.pop(rec)) {
		std::cout << rec << std::endl; 
	}

	return 0; 
}
