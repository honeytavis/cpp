#ifndef NULL_POINT_H
#define NULL_POINT_H
class NullPointCall {
public:
	static void test1(); 
	void test2(); 
	void test3(int iTest); 
	void test4(); 

private:
	static int iStatic_; 
	int iTest_; 
}; 

int NullPointCall::iStatic_ = 0; 

void NullPointCall::test1()
{
	std::cout << "iStatic_ = " << iStatic_ << std::endl; 
}

void NullPointCall::test2()
{
	std::cout << "Very cool!" << std::endl; 
}

void NullPointCall::test3(int iTest)
{
	std::cout << "iTest = " << iTest << std::endl; 
}

void NullPointCall::test4()
{
	std::cout << "iTest = " << iTest_ << std::endl; 
}
#endif
