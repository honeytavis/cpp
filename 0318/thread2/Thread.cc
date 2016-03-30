#include "Thread.h"
#include <iostream>

Thread::Thread() : _tid(0), _active(false) {}

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
	pThread->run(); 

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
