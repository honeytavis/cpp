#ifndef LINE_H
#define LINE_H

#include "Point.h"

class Line {
public:
	Line(const int x1, const int y1, const int x2, const int y2); 
	void Draw(); 

private:
	Point pt1_; 
	Point pt2_; 
}; 



Line::Line(const int x1, const int y1, const int x2, const int y2)
	: pt1_(x1, y1),
	  pt2_(x2, y2) //对象成员的初始化一定要放在初始化列表里
{
	//std::cout << "Line(int, int, int, int)" << std::endl; 
}

void Line::Draw()
{	
	pt1_.Print(); 
	std::cout << " to " << std::endl; 
	pt2_.Print(); 
}

#endif
