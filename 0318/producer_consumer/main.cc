#include "ProducerThread.h"
#include "ConsumerThread.h"
#include "Buffer.h"
#include <iostream>

int main()
{
  Buffer buffer(10); 
	Thread* pProducer = new ProducerThread(buffer); 
	Thread* pConsumer = new ConsumerThread(buffer); 

	pProducer->create(); 
	pConsumer->create(); 

	pProducer->join(); 
	pConsumer->join(); 

	return 0; 
}

// g++ *.cc -lpthread
