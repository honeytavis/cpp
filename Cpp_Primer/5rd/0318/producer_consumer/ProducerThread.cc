#include "ProducerThread.h"
#include "Buffer.h"

#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <iostream>

ProducerThread::ProducerThread(Buffer& buf) : _buf(buf) {}

void ProducerThread::run()
{
	srand(time(NULL)); 
	for (;;) {
		int num = rand() % 100; 
    _buf.push(num); 
		std::cout << "Producer: " << num << '\n'; 
		sleep(1); 
	}
}
