#ifndef _POINT_H
#define _POINT_H

#include "Line.h" 

class Point {
	//申明为类的友元函数
	//friend double dis(const Point &lhs, const Point &rhs); 
	friend double Line::dis(const Point &lhs, const Point &rhs); 

public:
	Point(); 
	Point(const int ix, const int iy); 
	void Print(); 

private:
	int ix_; 
	int iy_; 
}; 

#endif
