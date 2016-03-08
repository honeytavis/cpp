#include <iostream>
#include <cstdlib>
#include "Student.h" 

Student::Student()
{
	std::cout << "Student()" << std::endl; 
}

Student::~Student()
{
	std::cout << "~Student()" << std::endl; 
}

void Student::Destroy()
{
	//this->~Student(); //自动调用
	delete this; 
}

/*
void *Student::operator new(size_t sz)
{
	std::cout << "operator new" << std::endl; 
	void *p = malloc(sz); 
	return p; 
}

void Student::operator delete(void *p)
{
	std::cout << "operator delete" << std::endl; 
	free (p); 
}
*/
