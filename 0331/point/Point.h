#ifndef POINT_H
#define POINT_H

class Point {
public:
	explicit Point(const int ix = 0, const int iy = 0); 
	~Point(); 
	void SetX(const int x); 
	void SetY(const int y); 
	void Print() const;  
	void Print(); 

private:
	int ix_; 
	int iy_; 
}; 


Point::Point(const int ix, const int iy)
	: ix_(ix), iy_(iy) {}

Point::~Point()
{
	std::cout << "Point::~Point()" << std::endl; 
	ix_ -= 1; 
	iy_ -= 1; 
}

void Point::SetX(const int x)
{
	ix_ = x; 
}

void Point::SetY(const int y)
{
	iy_ = y; 
}

void Point::Print() const
{
	//const成员函数只能读取类数据成员 不能对其修改
	//ix_ = 10; 

	//const成员函数只能调用const成员函数 不能调用非const成员函数
	//SetX(ix_); 
	std::cout << "Point::Print() const" << std::endl; 
	std::cout << "(" << ix_
			  << "," << iy_
			  << ")" << std::endl; 
}

void Point::Print() 
{
	std::cout << "Point::Print()" << std::endl; 
	std::cout << "(" << ix_
			  << "," << iy_
			  << ")" << std::endl; 
}

#endif
