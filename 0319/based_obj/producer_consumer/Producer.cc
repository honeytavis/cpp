#include "Producer.h"
#include "Buffer.h"

#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <iostream>

Producer::Producer(Buffer& buf) : _buf(buf) {}

void Producer::run()
{
	srand(time(NULL)); 
	for (;;) {
		int num = rand() % 100; 
    _buf.push(num); 
		std::cout << "Producer: " << num << '\n'; 
		sleep(1); 
	}
}
