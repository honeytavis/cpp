#ifndef COMPUTER_H
#define COMPUTER_H

#include <cstring>

class Computer {
public: 
	Computer(const char *pBrand, const double fPrice); 
	~Computer(); 
	static void Print(Computer &comp); 
	static void PrintTotal(); 
	void display(); 

private:
	void setPrice(double fPrice); 

private:
	char *pBrand_; 
	double fPrice_; 
	static double totalPrice_; //static 不会占用类的内存空间
}; 

double Computer::totalPrice_ = 0.0; 

Computer::Computer(const char *pBrand, const double fPrice)
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

void Computer::setPrice(double fPrice)
{
	fPrice_ = fPrice; 
}
#endif
