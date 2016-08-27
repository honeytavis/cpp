#include <iostream>
#include "Null_Point.h"

int main()
{
	NullPointCall *p = NULL; 
	p->test1(); 
	p->test2(); 
	p->test3(3); 
	p->test4(); //访问空指针 Segmentation fault

	return 0; 
}
