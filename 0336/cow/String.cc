#include "String.h"
#include <iostream>

String::RefChar::RefChar()
	: refCount_(1)
{
	std::cout << "Refchar()" << std::endl;
	pchar_ = new char[1]();
}

String::RefChar::~RefChar()
{
	std::cout << "~RefChar()" << std::endl; 
	delete [] pchar_; 
}

String::String()
	:pstr_(new RefChar)
{
	std::cout << "String()" << std::endl; 
}

String::~String()
{
	if ((--pstr_->refCount_) == 0) {
		delete pstr_; 
		pstr_ = nullptr; 
	}
	std::cout << "~String()" << std::endl; 
}

String::String(const String& rhs)
	:pstr_(rhs.pstr_)
{
	++pstr_->refCount_; 
}

void String::Print()
{
	std::cout << pstr_->pchar_ << std::endl; 
}

void String::PrintRef()
{
	std::cout << "RefCount = " << pstr_->refCount_ << std::endl; 
}
