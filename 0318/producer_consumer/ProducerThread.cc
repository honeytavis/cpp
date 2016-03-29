#include "ProducerThread.h"
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <iostream>

ProducerThread::ProducerThread(Buffer& buff) : _buff(buff) {}

void ProducerThread::run()
{
	srand(time(NULL)); 
	for (int i = 0; i < 10; ++i) {
		int num = rand() % 100; 
		std::cout << "num = " << num << '\n'; 
		sleep(1); 
	}
}
