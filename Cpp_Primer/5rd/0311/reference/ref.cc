#include <iostream>
using std::cout; 
using std::endl; 

#include <string>
using std::string; 

#include <vector>
using std::vector;

int main()
{
	int a = 10; 
	int b = 20; 
	int* pflag = &a; 
	vector<int> myVec; 
	myVec.push_back(1); 
	string str1 = "hello"; 
	string str2 = "world"; 
	const int& m = 1; 

	&a; 
	&b; 
	// &(a + b); 
	// &(a++); 
	&(++a); 
	&pflag; 
	&(*pflag);
	&myVec[0];

	// &100; 
	&("hello"); 

	&str1; 
	// &(str1 + str2); 

	&m;

	return 0; 
}
