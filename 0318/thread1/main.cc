#include "Thread.h"
#include "SubThread.h"

int main()
{
	Thread* pthread = new SubThread; 
	pthread->create(); 
	pthread->create(); 
	pthread->join(); 
	pthread->join(); 

	return 0; 
}

// g++ *.cc -lpthread
