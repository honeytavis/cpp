#ifndef BUFFER_H
#define BUFFER_H

#include "MutexLock.h"
#include "Condition.h"

#include <queue>
#include <functional>

class Buffer {
public: 
  Buffer(int size); 

  void push(std::function<void()> task); 
  std::function<void()> pop(); 

  bool full(); 
  bool empty(); 
  void wakeup_empty();

private: 
  bool _active;
  int _size; 
  std::queue<std::function<void()>> _que; 
  MutexLock _mutex; 
  Condition _notFull; 
  Condition _notEmpty; 
}; 

#endif
