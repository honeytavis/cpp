#include "SubThread.h"
#include <iostream>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

void SubThread::run()
{
	srand(time(NULL)); 
	for (int i = 0; i < 10; ++i) {
		int num = rand() % 100; 
		std::cout << "num = " << num << '\n'; 
		sleep(1); 
	}
}
