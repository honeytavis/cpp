#ifndef MUTEXLOCK_H
#define MUTEXLOCK_H

#include "Noncopyable.h"
#include <pthread.h>

class MutexLock : private Noncopyable {
public: 
  MutexLock(); 
  ~MutexLock(); 

  void lock(); 
  void unlock(); 

  pthread_mutex_t* getMutexLockPtr(); 
  
private: 
  pthread_mutex_t _mutex; 
  bool  _active; 
}; 
#endif
