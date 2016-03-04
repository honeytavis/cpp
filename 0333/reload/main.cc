#include <iostream>
#include "Complex.h"

/*
//普通函数重载只能访问类的 public 数据成员
Complex operator + (const Complex &lhs, const Complex &rhs)
{
	return Complex(lhs.real_ + rhs.real_, lhs.imag_ + rhs.imag_); 
}
*/

int main()
{
	Complex c1(1, 2), c2(3, 4); 
	Complex c3; 
	c3 = c1 + c2; 

	c1.Print(); 
	c2.Print(); 
	c3.Print(); 

	return 0; 
}
