#ifndef PRODUCER_THREAD_H 
#define PRODUCER_THREAD_H 

#include "Thread.h"

class Buffer; // 前向声明

class ProducerThread : public Thread {
public: 
  ProducerThread(Buffer& buff);
	void run();
 
private:
  Buffer& _buff;
}; 

#endif
