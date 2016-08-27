#include "Thread.h"
#include "SubThread.h"

int main()
{
  SubThread sub; 
  Thread base1(std::bind(&SubThread::run, sub)); 
  Thread base2(std::bind(&SubThread::run, sub)); 

	base1.create(); 
	base2.create(); 
	base1.join(); 
	base2.join(); 

	return 0; 
}

// g++ *.cc -std=c++11 -lpthread
