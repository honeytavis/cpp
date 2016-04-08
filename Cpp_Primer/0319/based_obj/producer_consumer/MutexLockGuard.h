#ifndef MUTEXLOCKGUARD_H
#define MUTEXLOCKGUARD_H

#include "MutexLock.h"

class MutexLockGuard {
public: 
  MutexLockGuard(MutexLock& mutex);
  ~MutexLockGuard(); 

private: 
  MutexLock& _mutex; 
}; 

#endif
