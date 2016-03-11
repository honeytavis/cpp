#ifndef STRING_H
#define STRING_H

#include <cstddef>
#include <iostream>

class String {
public:
	String(); 
	~String(); 
	void Print(); 

	String(const char*); 
	String(const String&); 
	
	String& operator=(const String&); 
	String& operator=(const char*); 

	String& operator+=(const String&); 
	String& operator+=(const char*); 
	
	char& operator[](std::size_t); 
	const char& operator[](std::size_t) const; 
	
	std::size_t size() const; 
	const char* c_str() const; 

	friend bool operator==(const String&, const String&); 
	friend bool operator!=(const String&, const String&); 
	friend bool operator<(const String&, const String&); 
	friend bool operator>(const String&, const String&); 
	friend bool operator<=(const String&, const String&); 
	friend bool operator>=(const String&, const String&); 

	friend std::ostream& operator<<(std::ostream&, const String&); 
	friend std::istream& operator>>(std::istream&, String&); 

private:
	char *pstr_; 
}; 

String operator+(const String&, const String&); 
String operator+(const String&, const char*); 
String operator+(const char*, const String&); 

#endif
