#include <iostream>
using std::cout; 
using std::endl; 

#include <stack>
using std::stack; 

#include <string>
using std::string; 

#include <vector>
using std::vector; 

int main()
{
	stack<int, vector<int> > myStack; 

	for (int i = 1; i < 20; ++i) {
		myStack.push(i); 
	}
	while (myStack.size() > 0) {
		cout << myStack.top() << ' '; 
		myStack.pop(); 
	}
	cout << endl; 
	
	stack<string, vector<string> > stringStack; 
	for (char c = 'A'; c <= 'Z'; ++c) {
		string e(2, c); 
		stringStack.push(e); 
	}
	while (stringStack.size() > 0) {
		cout << stringStack.top() << ' '; 
		stringStack.pop(); 
	}
	cout << endl; 

	return 0; 
}
