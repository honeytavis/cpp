#ifndef _STRING_H_
#define _STRING_H_

#include <cstring> 

#include <iostream>
using std::istream; 
using std::ostream; 

#include <iomanip>
using std::setw; 

namespace user {
class String; 

class String {
public: 
    String(); // String str1; 
    String(const char*); // String str2("literal"); 
    String(const String&); // String str3(str1); 

    ~String(); 

    String& operator= (const String&); // str1 = str2; 
    String& operator= (const char*);  // str1 = "a string literal"; 

    inline bool operator== (const String&); // str1 == str2; 
    inline bool operator== (const char*);  // str1 == "a string literal"; 

    char& operator[] (int); // str1[0] = str2[0]; 

    int size() {
        return _size; 
    }

    char* c_str() {
        return _string; 
    }

private: 
    int _size; 
    char* _string; 
}; 

inline String::String() 
: _size(0)
, _string(nullptr)
{}

inline String::String(const char* str)
: _size(0)
, _string(nullptr) 
{
    if (str) {
        _size = strlen(str); 
        _string = new char[_size + 1]; 
        strcpy(_string, str); 
    }
}

inline String::String(const String& rhs) 
: _size(rhs._size)
, _string(nullptr) 
{
    if (_size) {
        _string = new char[_size + 1]; 
        strcpy(_string, rhs._string); 
    }
}

inline String::~String() {
    delete [] _string; 
    _string = nullptr; 
    _size = 0; 
}

// strlen(nullptr) -> Segementation fault
inline String& String::operator=(const char* str) {
    if (str) {
        _size = strlen(str); 
        if (_string) {
            delete [] _string; 
        } 
        _string = new char[_size + 1]; 
        strcpy(_string, str); 
    } else {
        if (_string) {
            delete [] _string; 
            _string = nullptr;  
            _size = 0; 
        } 
    }

    return *this; 
}

inline String& String::operator=(const String& rhs) {
    if (this != &rhs) {
        if (rhs._string) {
            _size = rhs._size; 
            if (_string) {
                delete [] _string; 
            } 
            _string = new char[_size + 1]; 
            strcpy(_string, rhs._string); 
        } else {
            if (_string) {
                delete [] _string; 
                _string = nullptr; 
                _size = 0; 
            }
        }
    }

    return *this; 
}

inline bool String::operator== (const String& rhs) {
    if (_size != rhs._size) {
        return false; 
    } else {
        return !strcmp(_string, rhs._string); 
    }
}

inline bool String::operator== (const char* str) {
    return !strcmp(str, _string); 
}

inline char& String::operator[] (int pos) {
    if (pos > 0 && pos < _size) {
        return _string[pos]; 
    }
}

inline istream& operator>> (istream& io, String& rhs) {
    const int limit_string_size = 4096; 
    char buf[limit_string_size]; 

    io >> setw(limit_string_size) >> buf; 
    rhs = buf; // !!!
    return io; 
}

inline ostream& operator<< (ostream& os, String& rhs) {
    os << rhs.c_str(); 
    return os; 
}

}
#endif
