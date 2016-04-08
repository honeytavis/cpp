#include "Thread.h"
#include <iostream>

Thread::Thread(std::_function<void()> cb)
: _tid(0)
, _active(false)
, _cb(cb)
{}

Thread::~Thread()
{
  if (_active) {
    pthread_detach(_tid); 
    _active = false; 
  }
  std::cout << "~Thread()" << '\n'; 
}

void* thread_func(void* arg)
{
  Thread* pThread = static_cast<Thread*>(arg); 
  if (pThread->_cb) {
    pThread->_cb; 
  }

  return NULL; 
}

void Thread::create()
{
  pthread_create(&_tid, NULL, thread_func, this); 
  _active = true; 
}

void Thread::join()
{
  pthread_join(_tid, NULL); 
  _active = false; 
}
