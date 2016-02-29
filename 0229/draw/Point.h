#ifndef POINT_H
#define POINT_H

class Point {
public:
	//explicit Point(const int ix, const int iy, double &z); 
	explicit Point(const int ix = 0, const int iy = 0); 
	Point(const Point &rhs); 
	void Print(); 
	void SetX(const int x); 

private:
	//const int ix_; //const 成员的初始化必须放在构造函数的初始化列表中
	//const int iy_; 
	int ix_; 
	int iy_; 
	//int &ref1_; 
	//double &ref2_; 
	// 被引用的变量发生变化时 所有引用它的变量均变化
}; 

#if 0
Point::Point(const Point &rhs)
	: ix_(rhs.ix_), 
	  iy_(rhs.iy_), 
	  ref1_(rhs.ref1_),
	  ref2_(rhs.ref2_) 
{
	std::cout << "Point(const Point &)" << std::endl; 
}

Point::Point(const int ix, const int iy, double &z) 
	: ix_(ix), 
	  iy_(iy), 
	  ref1_(ix_),
	  ref2_(z) 
{
	//ix_ = ix; //这里是赋值语句 不是初始化
	//iy_ = iy; 
	//ref1_(ix),
	//ref2_(z) 
}

void Point::Print()
{
	std::cout << "(" << ix_
			  << "," << iy_
			  << ")" << "--" 
			  << "ref1 = " << ref1_
			  << ", ref2 = " << ref2_ << std::endl; 
}
#endif 

Point::Point(const int ix, const int iy) 
	: ix_(ix), iy_(iy) {}

Point::Point(const Point &rhs)
	: ix_(rhs.ix_), 
	  iy_(rhs.iy_)
{
	std::cout << "Point(const Point &)" << std::endl; 
}

void Point::Print()
{
	std::cout << "(" << ix_
			  << "," << iy_
			  << ")" << std::endl; 
}

void Point::SetX(const int x)
{
	ix_ = x; 
}

#endif
