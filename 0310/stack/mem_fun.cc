#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

class NumVal {
public:
	NumVal() : ival(0) {}
	NumVal(int j) : ival(j) {}
	bool print(); 
	bool isEven(); 
	bool isPrime(); 

private:
	int val_; 
}; 

bool NumVal::print()
{
	std::cout << "ival_ = " << ival_ << '\n'; 
}

bool NumVal::isEven()
{
	return static_cast<bool>(!(ival_ % 2)); 
}

bool NumVal::isPrime()
{
	for (int i = 2; i <= (ival/2); ++i) {
		if ((ival_ % i) == 0) {
			return false; 
		}
	}
	return true; 
}

int main()
{
	std::vector<NumVal> myVec; 
	for (int i = 0; i != 13; ++i) {
		myVec[i] = NumVal(i+1); 
	}
	std::cout << "myVec" << '\n'; 
	for_each(vec.begin(), 
	         vec.end(), 
			 mem_fun_ref(&NumVal::print())); 

	std::cout << '\n'; 

	return 0; 
}
