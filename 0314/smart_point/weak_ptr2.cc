#include <iostream>
#include <memory>

class X {
public:
	X()
	{
		std::cout << "X()" << '\n'; 
	}

	~X()
	{
		std::cout << "~X()" << '\n'; 
	}

	void fun()
	{
		std::cout << "fun()" << '\n'; 
	}
}; 

int main()
{
	std::weak_ptr<X> p; 

	{
		std::shared_ptr<X> p2(new X); 
		std::cout << "p2's use_count = " << p2.use_count() << '\n'; 
		p = p2; 
		std::cout << "after p = p2" << '\n'; 
		std::cout << "p2's use_count = " << p2.use_count() << '\n'; 

		std::shared_ptr<X> p3 = p.lock(); // weak_ptr --> shared_ptr
		if (!p3) {
			std::cout << "object is destroyed" << '\n'; 
		} else {
			p3->fun(); 
			std::cout << "p3's use_count = " << p3.use_count() << '\n'; 
		}
	}

	std::shared_ptr<X> p4 = p.lock(); // weak_ptr -X-> shared_ptr
	if (!p4) {
		std::cout << "object is destroyed" << '\n'; 
	} else {
		p4->fun(); 
	}

	return 0; 
}
