#include <iostream>

int main()
{
	int a = 10; 
	// 非常量左值引用只能绑定到非常量左值
	int& refa = a; 
	
	// 常量左值引用可以绑定到所有类型
	const int b = 3; 
	const int& refb = b; 
	const int& refc = a; 

	// 常量左值引用可以绑定到左值和右值
	const int& refd = 100; 
	
	// 右值引用
	int&& refe = 100; // C++11

	// 右值引用不可以绑定到左值
	//int&& reff = a; 

	return 0; 
}
