#ifndef BUFFER_H
#define BUFFER_H

#include "MutexLock.h"
#include "Condition.h"
#include <queue>

class Buffer {
public: 
  Buffer(int size); 
  void push(int num); 
  int pop(); 

  bool empty(); 
  bool full(); 

private: 
  MutexLock _mutex; 
  Condition _notfull; 
  Condition _notempty; 
  int _size; 
  std::queue<int> _que; 
};

#endif
