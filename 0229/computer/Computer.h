#ifndef COMPUTER_H
#define COMPUTER_H

#include <cstring>

//class的默认访问权限是private
class Computer {
public: //访问说明符
	Computer(); 
	//explicit Computer(const char *pBrand, const float fPrice = 0); 
	Computer(const char *pBrand, const float fPrice = 0); 
	Computer(const Computer &rhs);  
	Computer& operator=(const Computer &rhs); 
	~Computer(); 
	void Print(); 

private:
	char *pBrand_; 
	float fPrice_; 
}; 

Computer::Computer() 
	: fPrice_(0) 
{
	pBrand_ = new char[sizeof("0")]; 
	strcpy(pBrand_, "0"); 
}

//有参构造函数一旦提供 默认构造函数便不再生成
Computer::Computer(const char *pBrand, const float fPrice)
	: fPrice_(fPrice)
{
	pBrand_ = new char[strlen(pBrand)+1]; 
	strcpy(pBrand_, pBrand); 
}

//复制构造函数
Computer::Computer(const Computer &rhs) //初始化非引用类类型
	: fPrice_(rhs.fPrice_)
{
	pBrand_ = new char[strlen(rhs.pBrand_)+1]; 
	strcpy(pBrand_, rhs.pBrand_); 
}

//赋值运算符
Computer& Computer::operator=(const Computer &rhs) //使用 & 节省开销
{
	if (this == &rhs)
		return *this; //避免自身复制 提高程序的性能

	delete [] pBrand_; //原空间可能不够用
	pBrand_ = new char[strlen(rhs.pBrand_)+1]; 
	strcpy(pBrand_, rhs.pBrand_); //深拷贝
	fPrice_ = rhs.fPrice_; 

	return *this; //不可更改
}
//需要 复制构造函数 的类也需要 赋值运算符 反之亦然

//对象被销毁时自动调用析构函数
//无参数 无返回值 唯一 
//不要显示调用析构函数 避免重复释放内存
Computer::~Computer() 
{
	//std::cout << "~Computer()" << std::endl; 
	delete [] pBrand_; 
	pBrand_ = nullptr; 
}
//需要 析构函数 的类也需要 复制构造函数 和 赋值运算符

//构造函数无返回值

void Computer::Print()
{
	std::cout << "Brand: " << pBrand_ << std::endl; 
	std::cout << "Price: " << fPrice_ << std::endl; 
}

#endif

// strlen(empty class) = 1

// 编译器自动创建的构造函数:
// 默认构造函数
// 复制构造函数
// 赋值运算符
// 析构函数
//
