#include <iostream>
#include "String.h"

int main()
{
	String s1; 
	s1.PrintRef(); 
	s1.Print(); 
	String s2(s1); 
	s1.PrintRef(); 
	s2.PrintRef(); 

	return 0; 
}
