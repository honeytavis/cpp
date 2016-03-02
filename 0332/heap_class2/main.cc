#include <iostream>
#include "Student.h"

int main()
{
	//Student p1; 
	Student *p2 = nullptr;  
	p2 = Student::Creat(p2); 
	std::cout << "addr p2: " << p2 << std::endl; 
	delete p2; 	

	Student *p3 = nullptr;  
	p3 = Student::Creat(p3); 
	std::cout << "addr p3: " << p3 << std::endl; 
	delete p3; 	

	return 0; 
}
