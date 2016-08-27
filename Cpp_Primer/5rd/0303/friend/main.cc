#include <iostream>

#include "Point.h"
#include "Line.h"

int main()
{
	Point p1(1, 2), p2(3, 4); 
	p1.Print(); 
	p2.Print(); 
	Line line; 
	std::cout << "distance = " << line.dis(p1, p2) << std::endl; 

	return 0; 
}
