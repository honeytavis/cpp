#ifndef CONDITION_H
#define CONDITION_H

#include "Noncopyable.h"
#include <pthread.h>

class MutexLock; 

class Condition : public Noncopyable {
public: 
  Condition(MutexLock& mutes); 
  ~Condition(); 

  void wait(); 
  void notify(); 
  void notifyall(); 

private: 
  pthread_cond_t _cond;
  MutexLock& _mutex;
}; 
#endif
