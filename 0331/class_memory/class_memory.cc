#include <iostream>

//为了区分创建的对象 空类会占用一个字节
class X {
public:
	X(double &dval) : ref_(dval) {}

private: // 按double对齐
	int ia_;
	int ib_;
	short se_;
	double df_;
	char cc_;
	char cd_;
	double d1_;
	static int sig_;
	double &ref_;
};

int main()
{
	double dval = 5.0;

	X x(dval);
	std::cout << "sizeof(x) = " << sizeof(x) << std::endl;

	return 0;
}
