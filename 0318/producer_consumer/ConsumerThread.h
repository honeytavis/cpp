#ifndef CONSUMER_THREAD_H
#define CONSUMER_THREAD_H

#include "Thread.h"

class Buffer; 

class ConsumerThread: public Thread {
public: 
  ConsumerThread(Buffer& buf); 
  void run();

private:
  Buffer& _buff;
}; 
#endif
