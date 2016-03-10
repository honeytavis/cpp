#ifndef CHARPROXY_H
#define CHARPROXY_H

class String; 

class CharProxy {
public:
	CharProxy(String& str, unsigned index); 

	//CharProxy& operator=(const CharProxy& rhs); // a[x] = b[y]; 
	CharProxy& operator=(char c); // a[x] = 'c'; 

	operator char() const; // std::cout << a[x]; 

private:
	String& str_; // high effective
	unsigned index_; 
}; 

#endif
