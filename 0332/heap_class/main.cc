#include <iostream>
#include "Student.h"

int main()
{
	//Student p1; 
	Student *p2 = new Student; 
	std::cout << "addr p2: " << p2 << std::endl; 
	p2->Destroy(); 
	p2 = nullptr; 

	return 0; 
}
