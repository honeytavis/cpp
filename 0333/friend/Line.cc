#include "Line.h" //必须把自己放在放在第一行
#include "Point.h" 
#include <cmath>

double Line::dis(const Point &lhs, const Point &rhs)
{
	double distance = sqrt((lhs.ix_ - rhs.ix_) * (lhs.ix_ - rhs.ix_)
						   + (lhs.iy_ - rhs.iy_) * (lhs.iy_ - rhs.iy_)); 
	return distance; 
}
