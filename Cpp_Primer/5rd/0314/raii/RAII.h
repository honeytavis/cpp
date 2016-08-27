#include <iostream>

template<typename T>
class RAII {
public:
	explicit RAII(T* p) 
	: p_(p)
	{
		std::cout << "RAII(T*)" << '\n'; 
	}

	~RAII()
	{
		std::cout << "~RAII()" << '\n'; 
		delete p_; 
	}

	T* get() const 
	{
		return p_; 
	}

	T* get()
	{
		return p_; 
	}

	T& operator*()
	{
		return *p_; 
	}

	void reset(T* p)
	{
		delete p_; 
		p_ = p; 
	}

private:
	RAII(const RAII& rhs); 
	RAII& operator=(const RAII& rhs); 

private:
	T* p_; 
}; 
