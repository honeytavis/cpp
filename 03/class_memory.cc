#include <iostream>

class X {
public:
	X(double& tmp) : _j(tmp) {}

private: // 按double对齐
	int _a;
	int _b;
	short _c;
	double _d;
	char _e;
	char _f;
	double _h;
	static int _i;
	double& _j; // 不占用对象的内存空间
};

// 为了区分创建的对象 空类会占用一个字节
class Y {}; 

int main()
{
	double tmp = 5.0;

	X x(tmp);
	std::cout << "sizeof(x) = " << sizeof(x) << std::endl;

  Y y; 
	std::cout << "sizeof(y) = " << sizeof(y) << std::endl;

	return 0;
}
