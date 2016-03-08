#include <iostream>
#include "Complex.h"

Complex::Complex(double real, double imag)
	: real_(real), imag_(imag) {}

void Complex::Print()
{
	std::cout << real_ << " + " << imag_ << "*i" << std::endl; 
}

Complex Complex::operator+(const Complex &rhs)
{
	return Complex(real_ + rhs.real_, imag_ + rhs.imag_); 
}

/*
Complex Complex::operator+(const Complex &rhs)
{
	real_ += rhs.real_; 
	imag_ += rhs.imag_; 
	return *this; 
}
*/
