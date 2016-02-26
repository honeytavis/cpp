#include <iostream>

using std::cin; 
using std::cout; 
using std::endl; 

int main(int argc, char* argv[])
{
	int a = 10; 
	int b = 20; 
	int c = 30; 

	int &j = a; 
	cout << "addr a:" << &a << endl; 
	cout << "addr j:" << &j << endl; 
	cout << "a = " << a << endl; 
	cout << "j = " << j << endl; 

	j = b; 
	cout << "addr a:" << &a << endl; 
	cout << "addr j:" << &j << endl; 
	cout << "a = " << a << endl; 
	cout << "j = " << j << endl; 

	a = c; 
	cout << "addr a:" << &a << endl; 
	cout << "addr j:" << &j << endl; 
	cout << "a = " << a << endl; 
	cout << "j = " << j << endl; 
	
	return 0; 
}
