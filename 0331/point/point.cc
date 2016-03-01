#include <iostream>
#include "Point.h"

int main()
{
	Point p1(3,4); 
	p1.Print(); 
	p1.SetX(5); 
	p1.SetY(6); 
	p1.Print(); 
	p1.~Point(); 
	p1.Print(); 

	const Point p2(1,2); 
	p2.Print(); 
	p2.~Point(); //析构函数都可以调用
	//p2.SetX(5); 
	//const 成员函数只能调用const成员函数
	p2.Print(); 

	return 0; 
}
