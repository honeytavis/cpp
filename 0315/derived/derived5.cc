#include <cstring>
#include <iostream>

class Base {
public:
	Base()
	: pstr_(new char[1]())
	{
		std::cout << "Base()" << '\n'; 
	}

	Base(const char* pstr)
	: pstr_(new char[strlen(pstr) + 1])
	{
		std::cout << "Base(const char*)" << '\n'; 
		strcpy(pstr_, pstr); 
	}

	Base(const Base& rhs)
	: pstr_(new char[strlen(rhs.pstr_) + 1])
	{
		std::cout << "Base(const Base&)" << '\n'; 
		strcpy(pstr_, rhs.pstr_); 
	}

	Base& operator=(const Base& rhs)
	{
		std::cout << "Base& operator=(const Base&)" << '\n'; 
		if (this != &rhs) {
			delete [] pstr_; 
			pstr_ = new char[strlen(rhs.pstr_) + 1]; 
			strcpy(pstr_, rhs.pstr_); 
		}
		return *this; 
	}

	~Base()
	{
		std::cout << "~Base()" << '\n'; 
		delete [] pstr_; 
	}

	void print()
	{
		std::cout << pstr_;  
	}

private:
	char* pstr_;
}; 

class Derived : public Base {
public:
	Derived()
	: pstr2_(new char[1]())
	{
		std::cout << "Derived()" << '\n'; 
	}

	Derived(const char* pstr1, const char* pstr2)
	: Base(pstr1)
	, pstr2_(new char[strlen(pstr2) + 1])
	{
		std::cout << "Derived(const char*, const char*)" << '\n'; 
		strcpy(pstr2_, pstr2); 
	}

	Derived(const Derived& rhs)
	: Base(rhs)
	, pstr2_(new char[strlen(rhs.pstr2_) + 1])
	{
		std::cout << "Derived(const Derived&)" << '\n'; 
		strcpy(pstr2_, rhs.pstr2_); 
	}

	Derived& operator=(const Derived& rhs)
	{
		std::cout << "Derived& operator=(const Derived&)" << '\n';
		if (this != &rhs) {
			Base::operator=(rhs); // essential
			delete [] pstr2_; 
			pstr2_ = new char[strlen(rhs.pstr2_) + 1]; 
			strcpy(pstr2_, rhs.pstr2_); 
		}

		return *this; 
	}

	~Derived()
	{
		std::cout << "~Derived()" << '\n'; 
		delete [] pstr2_; 
	}

	void print()
	{
		Base::print(); 
		std::cout << pstr2_; 
	}

private:
	char* pstr2_; 
}; 

int main()
{
	Derived d1("Hello", " world!");
	d1.print(); 
	std::cout << '\n'; 

	Derived d2(d1); 
	d2.print(); 
	std::cout << '\n'; 

	return 0; 
}
