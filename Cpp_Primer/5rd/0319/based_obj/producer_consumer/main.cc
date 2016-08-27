#include "Buffer.h"
#include "Producer.h"
#include "Consumer.h"
#include "Thread.h"

int main()
{
  Buffer buffer(10); 

  Producer producer(buffer); 
  Consumer consumer(buffer); 

	Thread* pProducer = new Thread(std::bind(&Producer::run, producer)); 
	Thread* pConsumer = new Thread(std::bind(&Consumer::run, consumer)); 

	pProducer->create(); 
	pConsumer->create(); 

	pProducer->join(); 
	pConsumer->join(); 

	return 0; 
}

// clang++ *.cc -std=c++11 -lpthread
