#ifndef WORKTHREAD_H
#define WORKTHREAD_H

#include "Thread.h"
#include <iostream>

class ThreadPool; 
class WordThread : public Thread {
public: 
  WordThread(ThreadPool& threadpool); 
  void run(); 

private: 
  ThreadPool& _threadpool; 
}; 
#endif
