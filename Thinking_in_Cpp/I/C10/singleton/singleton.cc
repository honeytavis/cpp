#include <iostream>
#include "Singleton.h"

int main()
{
	Singleton* s1 = Singleton::getSingleton(); 
	Singleton* s2 = Singleton::getSingleton(); 

	std::cout << "addr s1: " << static_cast<void *>(s1) << std::endl; 
	std::cout << "addr s2: " << static_cast<void *>(s2) << std::endl; 

	//Singleton s3(*Singleton::getSingleton()); 
	//std::cout << "addr s3: " << &s3 << std::endl; 

  s1->Distructor(); 
  //s2->Distructor();
  //s3.Distructor(); 

	return 0; 
}
