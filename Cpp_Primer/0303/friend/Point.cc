#include <cmath>
#include <iostream>
#include "Point.h"

Point::Point() : ix_(0), iy_(0) {}

Point::Point(const int ix, const int iy) : ix_(ix), iy_(iy) {}

void Point::Print()
{
	std::cout << "(" << ix_
			  << "," << iy_
			  << ")" << std::endl; 
}

/*
double dis(const Point &lhs, const Point &rhs)
{
	double distance = sqrt((lhs.ix_ - rhs.ix_) * (lhs.ix_ - rhs.ix_)
							+ (lhs.iy_ - rhs.iy_) * (lhs.iy_ - rhs.iy_)); 
	return distance; 
}
*/
