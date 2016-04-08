#include "String.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstddef>

String::String() 
{
	std::cout << "String()" << '\n'; 
	pstr_ = new char[1](); 
}

String::~String()
{
	std::cout << "~String()" << '\n'; 
	delete [] pstr_; 
	pstr_ = nullptr; 
}

String::String(const char *pstr)
{
	std::cout << "String(const char*)" << '\n'; 
	pstr_ = new char[strlen(pstr) + 1]; 
	strcpy(pstr_, pstr); 
}

String::String(const String &rhs)
{
	std::cout << "String(const String&)" << '\n'; 
	pstr_ = new char[strlen(rhs.pstr_) + 1]; 
	strcpy(pstr_, rhs.pstr_); 
}

String::String(String&& rhs)
{
	std::cout << "String(String&&)" << '\n'; 
	pstr_ = rhs.pstr_; 
	rhs.pstr_ = nullptr; // essential
}

String& String::operator=(String&& rhs)
{
	std::cout << "String::operator=(String&&)" << '\n'; 
	if (this != &rhs) {
		delete [] pstr_; 
		pstr_ = rhs.pstr_; 
		rhs.pstr_ = nullptr; 
	}

	return *this; 
}

String& String::operator=(const String &rhs)
{
	if (this == &rhs) {
		return *this; 
	}
	delete [] pstr_; 
	pstr_ = new char[strlen(rhs.pstr_) + 1]; 
	strcpy(pstr_, rhs.pstr_); 

	return *this; 
}

String& String::operator=(const char* pstr)
{
	delete [] pstr_; 
	pstr_ = new char[strlen(pstr) + 1]; 
	strcpy(pstr_, pstr); 
}

String& String::operator+=(const String& rhs)
{
	char* tmp = new char[strlen(rhs.pstr_) + strlen(pstr_) + 1](); 
	strcat(tmp, pstr_); 
	strcat(tmp, rhs.pstr_); 
	delete [] pstr_; 
	pstr_ = tmp; 
	tmp = nullptr; 

	return *this; 
}

String& String::operator+=(const char* pstr)
{
	char* tmp = new char[strlen(pstr) + strlen(pstr_) + 1](); 
	strcat(tmp, pstr_); 
	strcat(tmp, pstr); 
	delete [] pstr_; 
	pstr_ = tmp; 
	tmp = nullptr; 

	return *this; 
}

char& String::operator[](std::size_t index)
{
	static char zero = '\0'; 
	if (index >=0 && index <= strlen(pstr_)) {
		return pstr_[index]; 
	} else {
		std::cout << "illegal operation" << std::endl; 
		return zero;  
	}
}

const char& String::operator[](std::size_t index) const
{
	static char zero = '\0'; 
	if (index >=0 && index <= strlen(pstr_)) {
		return pstr_[index]; 
	} else {
		std::cout << "illegal operation" << std::endl; 
		return zero;  
	}
}

std::size_t String::size() const
{
	return strlen(pstr_); 
}

const char* String::c_str() const
{
	return pstr_; 
}

bool operator==(const String& lhs, const String& rhs)
{
	if (strcmp(lhs.pstr_, rhs.pstr_) != 0) {
		return false; 
	} else {
		return true; 
	}
}

bool operator!=(const String& lhs, const String& rhs)
{
	if (strcmp(lhs.pstr_, rhs.pstr_) != 0) {
		return true; 
	} else {
		return false; 
	}
}

bool operator<(const String& lhs, const String& rhs)
{
	if (strcmp(lhs.pstr_, rhs.pstr_) < 0) {
		return true; 
	} else {
		return false; 
	}
}

bool operator>(const String& lhs, const String& rhs)
{
	if (strcmp(lhs.pstr_, rhs.pstr_) > 0) {
		return true; 
	} else {
		return false; 
	}
}

bool operator<=(const String& lhs, const String& rhs)
{
	if (strcmp(lhs.pstr_, rhs.pstr_) <= 0) {
		return true; 
	} else {
		return false; 
	}
}

bool operator>=(const String& lhs, const String& rhs)
{
	if (strcmp(lhs.pstr_, rhs.pstr_) >= 0) {
		return true; 
	} else {
		return false; 
	}
}

// 输出运算符的左操作数只能是流类型的对象
// 类的成员函数的左操作数又被绑在了this指针上
// 故输出运算符不能作为成员函数进行重载
std::ostream& operator<<(std::ostream& os, const String& s)
{
	os << s.pstr_; 
	return os; 
}

std::istream& operator>>(std::istream& is, String& s)
{
	//函数内的内置类不执行默认初始化
	char tmp[BUFSIZ] = {0}; 
	is >> tmp; 
	tmp[BUFSIZ - 1] = 0; 
	delete [] s.pstr_; 
	s.pstr_ = new char[strlen(tmp) + 1](); 
	strcpy(s.pstr_, tmp); 
	
	if (!is)
		s = String(); 

	return is; 
}

String operator+(const String& lhs, const String& rhs)
{
	String tmp(lhs); 
	tmp += rhs;  

	return tmp; 
}

String operator+(const String& lhs, const char* rhs)
{
	String tmp(lhs); 
	tmp += rhs;  

	return tmp; 
}

String operator+(const char* lhs, const String& rhs)
{
	String tmp(lhs); 
	tmp += rhs;  

	return tmp; 
}
