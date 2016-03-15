#include <iostream>
#include <memory>

class Point {
public:
	Point() : ix_(0), iy_(0) {}

	Point(int ix, int iy) : ix_(ix), iy_(iy)
	{
		std::cout << "Point(int, int)" << '\n'; 
	}

	~Point()
	{
		std::cout << "~Point()" << '\n'; 
	}

private:
	int ix_; 
	int iy_; 
}; 

int main()
{
	Point *pt = new Point(1, 2); 

	std::shared_ptr<Point> p1(pt); 
	std::cout << "p1's use count = " << p1.use_count() << '\n'; 

	//std::shared_ptr<Point> p2(pt); 
	std::shared_ptr<Point> p2(p1); 
	std::cout << "p2's use count = " << p2.use_count() << '\n'; 

	return 0; 
}
