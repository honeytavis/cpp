#include <iostream>
#include "computer.h"

//函数的返回值是一个对象 
Computer getComputer()
{
	Computer pc("huashuo", 3000); 
	//函数调用完成返回时会调用复制构造函数
	return pc; 
}

int main()
{

	Computer pc0; 
	pc0.Print(); 

	{
		Computer pc1("Dell", 1000); 
		pc1.Print(); 
	}

	Computer *pc2 = new Computer("Mac", 2000); 
	pc2->Print(); 
	delete pc2; //调用pc的析构函数
	pc2 = nullptr; 

	//未显示定义复制构造函数时 调用编译器生成的默认复制构造函数
	pc2 = new Computer("lenovo", 3000); 
	Computer pc3 = *pc2;
	pc3.Print(); 
	
	//getComputer(); 

	Computer pc4("Dell", 3000); 
	pc4.Print(); 
	pc4 = *pc2; 
	pc4.Print(); 

	delete pc2; 
	pc2 = nullptr; 
	
	return 0; 
}
