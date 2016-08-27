#ifndef COMPUTER_H
#define COMPUTER_H

#include <cstring>

class Computer {
public: 
	Computer(const char *pBrand, const float fPrice); 
	~Computer(); 
	static void Print(Computer &comp); 
	static void PrintTotal(); 
	void display(); 

private:
	void setPrice(float fPrice); 

private:
	char *pBrand_; 
	float fPrice_; 
	static float totalPrice_; 
}; 

float Computer::totalPrice_ = 0.0; 

Computer::Computer(const char *pBrand, const float fPrice)
	: fPrice_(fPrice)
{
	totalPrice_ += fPrice_; 
	pBrand_ = new char[strlen(pBrand)+1]; 
	strcpy(pBrand_, pBrand); 
}

Computer::~Computer() 
{
	if (pBrand_ != nullptr) {
		delete [] pBrand_; 
		pBrand_ = nullptr; 
	}
	totalPrice_ -= fPrice_; 
}

//静态成员函数可以直接使用类调用 也可以使用对象来调用
//静态成员函数里面不能使用非静态的成员变量和成员函数
//静态成员函数的参数列表不包括this指针
void Computer::Print(Computer &comp)
{
	std::cout << "Brand: " << comp.pBrand_ << std::endl; 
	std::cout << "Price: " << comp.fPrice_ << std::endl; 
	std::cout << "totalPrice: " << comp.totalPrice_ << std::endl; 
	//comp.display(); 
	//display(); 
	//std::cout << pBrand_ << std::endl; 
}

void Computer::PrintTotal()
{
	std::cout << "totalPrice" << totalPrice_ << std::endl; 
}


void Computer::display()
{
	std::cout << "Brand: " << pBrand_ << std::endl; 
	std::cout << "Price: " << fPrice_ << std::endl; 
	this->setPrice(10); 
}

void Computer::setPrice(float fPrice)
{
	fPrice_ = fPrice; 
}
#endif
