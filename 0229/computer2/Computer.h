#ifndef COMPUTER2_H
#define COMPUTER2_H

#include <cstring>

class Computer {
public: 
	Computer(const float fPrice); 
	~Computer(); 
	void Print(); 

private:
	float fPrice_; 
	static float totalPrice_; 
	//在编译时被创建并初始化
	//实例只有一个 被所有该类的对象共享
	//必须在类的外部初始化
}; 

float Computer::totalPrice_ = 0.0; 

Computer::Computer(const float fPrice)
	: fPrice_(fPrice)
{
	totalPrice_ += fPrice; 
}

Computer::~Computer()
{
	totalPrice_ -= fPrice_; 
}

void Computer::Print()
{
	//std::cout << "Price: " << fPrice << std::endl; 
	std::cout << "totalPrice: " << totalPrice_ << std::endl; 
}

#endif
