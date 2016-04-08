#ifndef PRODUCER_THREAD_H 
#define PRODUCER_THREAD_H 

#include "Thread.h"

/// forward declaration
class Buffer;

class ProducerThread : public Thread {
public: 
  ProducerThread(Buffer& buf);
	void run();
 
private:
  Buffer& _buf;
}; 

#endif
