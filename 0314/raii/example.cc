#include "RAII.h"
#include <iostream>

class SomeResource {
public:
	SomeResource() {}
	SomeResource(SomeResource*) {}
}; 

class Example {
public:
	Example ()
	: p1_(new SomeResource())
	, p2_(new SomeResource())
	{
		std::cout << "Example()" << '\n'; 
	}

	Example(const Example& rhs)
	: p1_(new SomeResource(rhs.p1_.get()))
	, p2_(new SomeResource(rhs.p2_.get()))
	{
		std::cout << "Example(const Example&)" << '\n'; 
	}

	Example& operator=(const Example& rhs)
	{
		if (this != &rhs) {
			p1_.reset(rhs.p1_.get());
			p2_.reset(rhs.p2_.get());
		}

		return *this; 
	}

private:
	RAII<SomeResource> p1_; 
	RAII<SomeResource> p2_; 
}; 

int main()
{
	Example e1; 
	return 0; 
}
