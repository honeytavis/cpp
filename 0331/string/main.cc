#include <iostream>
#include "String.h"

int main()
{
	String s1;
	s1.Print(); 

	String s2("hello world"); 
	s2.Print(); 

	String s3 = "wangdao"; 
	s3.Print(); 

	String s4 = s3; 
	s4.Print(); 

	s4 = s2; 
	s4.Print(); 

	return 0; 
}
