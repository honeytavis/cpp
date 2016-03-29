#include "SubThread.h"
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <iostream>

void SubThread::run()
{
	srand(time(NULL)); 
	for (int i = 0; i < 10; ++i) {
		int num = rand() % 100; 
		std::cout << "num = " << num << '\n'; 
		sleep(1); 
	}
}
