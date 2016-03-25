#include "Thread.h"
#include "SubThread.h"

int main()
{
	Thread* pthread = new SubThread; 
	pthread->create(); 
	pthread->join(); 

	return 0; 
}

// g++ *.cc -lpthread
