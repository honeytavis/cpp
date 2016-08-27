#include "MutexLock.h"

MutexLock::MutexLock()
: _active(false)
{
  pthread_mutex_init(&_mutex, NULL);
}

MutexLock::~MutexLock()
{
  pthread_mutex_destroy(&_mutex);
}

void MutexLock::lock()
{
  pthread_mutex_lock(&_mutex); 
  _active = true; 
}

void MutexLock::unlock()
{
  pthread_mutex_unlock(&_mutex); 
  _active = false; 
}

pthread_mutex_t* MutexLock::getMutexLockPtr()
{
  return &_mutex; 
}
