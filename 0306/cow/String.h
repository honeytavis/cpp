#ifndef STRING_H
#define STRING_H

#include "CharProxy.h"
#include <cstdlib>
#include <iostream>

class String {
friend class CharProxy; 

friend bool operator==(const String&, const String&); 
friend bool operator!=(const String&, const String&); 
friend bool operator<(const String&, const String&); 
friend bool operator>(const String&, const String&); 
friend bool operator<=(const String&, const String&); 
friend bool operator>=(const String&, const String&); 

friend std::ostream& operator<<(std::ostream&, const String&); 
//friend std::istream& operator>>(std::istream&, String&); 

public:
	String(); 
	~String(); 

	int Ref(); 
	std::size_t size() const; 
	const char* c_str() const; 

	String(const String&); 
	String(const char*); 

	String& operator=(const String&); 
	String& operator=(const char*); 
	
	String& operator+=(const String&); 
	String& operator+=(const char*); 

	CharProxy operator[](std::size_t); 
	const CharProxy operator[](std::size_t) const; 

private:
	class RefChar{
	public:
		RefChar(); 
		~RefChar(); 
		RefChar(const char*); 
		// 如果数据成员声明为 private 
		// 那么类外部的函数无法对其操作
		char* pchar_; 
		int refCount_; 
	}; 

	RefChar* pstr_; 
}; 

String operator+(const String&, const String&); 
String operator+(const String&, const char*); 
String operator+(const char*, const String&); 

#endif
