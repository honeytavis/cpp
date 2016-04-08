#ifndef BUFFER_H
#define BUFFER_H

#include "MutexLock.h"
#include "Condition.h"

#include <queue>

class Task; 

class Buffer {
public: 
  Buffer(int size); 

  void push(Task* pTask); 
  Task* pop(); 

  bool full(); 
  bool empty(); 
  void wakeup_empty();

private: 
  bool _active;
  int _size; 
  std::queue<Task*> _que; 
  MutexLock _mutex; 
  Condition _notFull; 
  Condition _notEmpty; 
}; 

#endif
