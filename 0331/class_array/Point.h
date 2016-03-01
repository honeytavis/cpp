#ifndef POINT_H
#define POINT_H

class Point {
public:
	Point() : ix_(0), iy_(0) {}
	explicit Point(const int ix, const int iy); 
	~Point(); 
	void SetX(const int x); 
	void SetY(const int y); 
	void Print(); 

private:
	int ix_; 
	int iy_; 
}; 


Point::Point(const int ix, const int iy) : ix_(ix), iy_(iy) {}

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

void Point::Print() 
{
	std::cout << "(" << ix_
			  << "," << iy_
			  << ")" << std::endl; 
}

#endif
