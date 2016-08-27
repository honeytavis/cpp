#include <iostream>
#include "Student.h"

Student::Student() 
{
	std::cout << "Student()" << std::endl; 
}

Student::~Student() 
{
	std::cout << "~Student()" << std::endl; 
}
