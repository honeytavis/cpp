#include <iostream>
#include "Student.h"

int main()
{
	Student *p2 = Student::Creat(); 
	std::cout << "addr p2: " << p2 << std::endl; 

	Student *p3 = Student::Creat(); 
	std::cout << "addr p3: " << p3 << std::endl; 

	delete p2; 	
	delete p3; 	

	return 0; 
}
