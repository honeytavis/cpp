#include "String.h"
#include "CharProxy.h"
#include <iostream>
#include <cstring>
#include <cstdlib>

String::RefChar::RefChar()
	: refCount_(1)
{
	pchar_ = new char[1]();
}

String::String()
	:pstr_(new RefChar()) {}

String::RefChar::~RefChar()
{
	delete [] pchar_; 
}

String::~String()
{
	if ((--pstr_->refCount_) == 0) {
		delete pstr_; 
		pstr_ = nullptr; 
	}
}

int String::Ref()
{
	return pstr_->refCount_; 
}

String::RefChar::RefChar(const char* pchar)
	: refCount_(1), pchar_(new char[strlen(pchar) + 1])
{
	strcpy(pchar_, pchar); 
}

String::String(const char* pchar)
	: pstr_(new String::RefChar(pchar)) {}

String::String(const String& rhs)
	: pstr_(rhs.pstr_)
{
	++pstr_->refCount_; 
}

String& String::operator=(const char* pchar)
{
	if (!strcmp(pstr_->pchar_, pchar)) {
		return *this; 
	} 

	if (--pstr_->refCount_ == 0) {
		delete pstr_; 
	}
	pstr_ = new String::RefChar(pchar); 

	return *this; 
}

String& String::operator=(const String& rhs)
{
	if (rhs.pstr_ == pstr_) {
		return *this; 
	}

	if (--pstr_->refCount_ == 0) {
		delete pstr_; 
	}
	pstr_ = rhs.pstr_; 
	++pstr_->refCount_; 

	return *this; 
}

String& String::operator+=(const char* pchar)
{
	char temp[strlen(pstr_->pchar_) + 1];
	strcpy(temp, pstr_->pchar_); 
	if (pstr_->refCount_ > 1) {
		--pstr_->refCount_; 
		pstr_ = new RefChar(temp); 
	}

	delete pstr_->pchar_; 
	pstr_->pchar_ = new char[strlen(pstr_->pchar_) + strlen(pchar) + 1]; 
	strcpy(pstr_->pchar_, temp); 
	strcat(pstr_->pchar_, pchar); 

	return *this; 
}

String& String::operator+=(const String& rhs)
{
	char temp[strlen(pstr_->pchar_) + 1];
	strcpy(temp, pstr_->pchar_); 
	if (pstr_->refCount_ > 1) {
		--pstr_->refCount_; 
		pstr_ = new RefChar(temp); 
	}

	delete pstr_->pchar_; 
	pstr_->pchar_ = new char[strlen(pstr_->pchar_) + strlen(rhs.pstr_->pchar_) + 1]; 
	strcpy(pstr_->pchar_, temp); 
	strcat(pstr_->pchar_, rhs.pstr_->pchar_); 

	return *this; 
}

const CharProxy String::operator[](std::size_t index) const
{
	return CharProxy(const_cast<String&>(*this), index); 
}

CharProxy String::operator[](std::size_t index)
{
	return CharProxy(*this, index); 
}

std::size_t String::size() const
{
	return strlen(pstr_->pchar_); 
}

const char* String::c_str() const
{
	return pstr_->pchar_; 
}

bool operator==(const String& lhs, const String& rhs)
{
	if (!strcmp(lhs.pstr_->pchar_, rhs.pstr_->pchar_)) {
		return true; 
	} else {
		return false; 
	}
}

bool operator!=(const String& lhs, const String& rhs)
{
	if (strcmp(lhs.pstr_->pchar_, rhs.pstr_->pchar_)) {
		return true; 
	} else {
		return false; 
	}
}

bool operator<(const String& lhs, const String& rhs)
{
	if (strcmp(lhs.pstr_->pchar_, rhs.pstr_->pchar_) < 0) {
		return true; 
	} else {
		return false; 
	}
}

bool operator>(const String& lhs, const String& rhs)
{
	if (strcmp(lhs.pstr_->pchar_, rhs.pstr_->pchar_) > 0) {
		return true; 
	} else {
		return false; 
	}
}

bool operator<=(const String& lhs, const String& rhs)
{
	if (strcmp(lhs.pstr_->pchar_, rhs.pstr_->pchar_) <= 0) {
		return true; 
	} else {
		return false; 
	}
}

bool operator>=(const String& lhs, const String& rhs)
{
	if (strcmp(lhs.pstr_->pchar_, rhs.pstr_->pchar_) >= 0) {
		return true; 
	} else {
		return false; 
	}
}

std::ostream& operator<<(std::ostream& os, const String& rhs) 
{
	os << rhs.pstr_->pchar_; 
	return os; 
}

/*
std::istream& operator>>(std::istream& is, String s) 
{
	char buf[BUFSIZ] = {0};
	is >> buf; 
	buf[BUFSIZ - 1] = 0; 
	char* temp = new char[strlen(buf) + 1](); 
	strcpy(temp, buf);

	if (s.pstr_->refCount_ > 1) {
		--s.pstr_->refCount_; 
	} else {
		delete s.pstr_; 
	}
	s.pstr_ = new String::RefChar(temp); 

	if (!is) {
		s = String(); 
	}

	return is; 
}
*/

String operator+(const String& lhs, const String& rhs)
{
	String tmp; 
	tmp += lhs; 
	tmp += rhs; 

	return tmp; 
}

String operator+(const String& lhs, const char* rhs)
{
	String tmp; 
	tmp += lhs; 
	tmp += rhs; 

	return tmp; 
}

String operator+(const char* lhs, const String& rhs)
{
	String tmp; 
	tmp += lhs; 
	tmp += rhs; 

	return tmp; 
}
