#include <iostream>
#include <memory>

class Point : public std::enable_shared_from_this<Point> {
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

	std::shared_ptr<Point> add(const Point* rhs)
	{
		ix_ += rhs->ix_; 
		iy_ += rhs->iy_; 
		//return static_cast<std::shared_ptr<Point>>(this); 
		return shared_from_this(); 
	}

private:
	int ix_; 
	int iy_; 
}; 

int main()
{
	std::shared_ptr<Point> p1(new Point(1, 2)); 
	std::shared_ptr<Point> p2(new Point(3, 4)); 

	std::shared_ptr<Point> p3 = p1->add(p2.get()); 
	std::cout << "p1's use count = " << p1.use_count() << '\n'; 
	std::cout << "p3's use count = " << p3.use_count() << '\n'; 

	return 0; 
}
