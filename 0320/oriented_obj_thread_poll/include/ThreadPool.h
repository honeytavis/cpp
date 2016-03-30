#ifndef THREADPOOL_H
#define THREADPOOL_H

#include "Buffer.h"
#include <vector>

class Task; 
class Thread; 

class ThreadPool {
public: 
  ThreadPool(int threadNum, int bufSize); 
  ~ThreadPool(); 

  void start(); 
  void stop(); 

  void addTask(Task* pTask); 
  void threadFunc(); 

private: 
  Task* getTask(); 

private: 
  bool _active; 
  int _threadNum; 
  int _bufSize; 
  Buffer _buf;
  std::vector<Thread*> _vecThreads; 
}; 
#endif
