#ifndef _COMPLEX_H
#define _COMPLEX_H

class Complex {
public:
	Complex(double real = 0.0, double imag = 0.0); 
	void Print(); 
	Complex operator+(const Complex &rhs); 

private:
	double real_; 
	double imag_; 
}; 
#endif
