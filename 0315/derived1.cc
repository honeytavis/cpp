#include <iostream>

/// 
/// 派生
/// 默认权限 private
/// 子类对象 --> public 继承 访问 public 成员
/// 子类内部 --> 父类私有成员均不可访问 其他的均可访问
/// 

class Base {
public:
#if 1
	Base() 
	{
		std::cout << "Base()" << std::endl; 
	}
#endif

private:
	int _ix; 
}; 

class Derived : public Base {
public:
#if 1 
	Derived()
	{
		std::cout << "Derived()" << std::endl; 
	}
#endif

}; 

int main()
{
	Derived der; 
	return 0; 
}
