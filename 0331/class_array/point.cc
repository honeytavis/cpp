#include <iostream>
#include "Point.h"

int main()
{
	Point arr2[5] = {Point(1, 2), Point(3, 4)}; 
	arr2[0].Print(); 
	arr2[1].Print(); 

	return 0; 
}
