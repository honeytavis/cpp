#ifndef STRING_H
#define STRING_H

#include <cstring>

class String {
public:
	String(); 
	String(const char *pstr); 
	String(const String &rhs); 
	String& operator=(const String &rhs); 
	~String(); 
	void Print(); 

private:
	char *pStr_; 
}; 

#endif
