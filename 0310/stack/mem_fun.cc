#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

class NumVal {
public:
	NumVal() : val_(0) {}
	NumVal(int j) : val_(j) {}
	bool print(); 
	bool isEven(); 
	bool isPrime(); 

private:
	int val_; 
}; 

bool NumVal::print()
{
	std::cout << "val_ = " << val_ << '\n'; 
}

bool NumVal::isEven()
{
	return static_cast<bool>(!(val_ % 2)); 
}

bool NumVal::isPrime()
{
	for (int i = 2; i <= (val_/2); ++i) {
		if (0 == (val_ % i)) {
			return false; 
		}
	}
	return true; 
}

int main()
{
	std::vector<NumVal> myVec; 
	for (int i = 0; i < 14; ++i) {
		myVec.push_back(NumVal(i+1));
	}
	std::cout << "myVec" << '\n'; 
	for_each(myVec.begin(), 
	         myVec.end(), 
			 std::mem_fun_ref(&NumVal::print)); 
	std::cout << '\n'; 
	
	std::vector<NumVal>::iterator iter; 
	myVec.erase(remove_if(myVec.begin(), 
				     	  myVec.end(), 
					 	  std::mem_fun_ref(&NumVal::isPrime)),
				myVec.end()); 
	std::cout << "new myVec" << '\n'; 
	for_each(myVec.begin(), 
	         myVec.end(), 
			 std::mem_fun_ref(&NumVal::print)); 
	std::cout << '\n'; 

	return 0; 
}
