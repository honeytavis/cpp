#include <iostream>
#include "String.h"

String::String() : pStr_(nullptr) {}

String::String(const char *pstr)
{
	pStr_ = new char[strlen(pstr) + 1]; 
	strcpy(pStr_, pstr); 
}

String::String(const String &rhs)
{
	pStr_ = new char[strlen(rhs.pStr_) + 1]; 
	strcpy(pStr_, rhs.pStr_); 
}

String& String::operator=(const String &rhs)
{
	if (this == &rhs) {
		return *this; 
	}

	if (pStr_ == nullptr) {
		pStr_ = new char[strlen(rhs.pStr_) + 1]; 
		strcpy(pStr_, rhs.pStr_); 
	} else {
		delete [] pStr_; 
		pStr_ = new char[strlen(rhs.pStr_) + 1]; 
		strcpy(pStr_, rhs.pStr_); 
	}

	return *this; 
}

String::~String()
{
	delete [] pStr_; 
	pStr_ = nullptr; 
}

void String::Print()
{	
	if (pStr_ == nullptr)
		return; 
	std::cout << pStr_ << std::endl; 
}
