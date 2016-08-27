#include "Thread.h"

Thread::Thread(std::function<void()> func) 
: _tid(0)
, _active(false) 
, _func(func)
{}

Thread::~Thread()
{
	if (_active) {
		pthread_detach(_tid); 
		_active = false; 
	}
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

void* Thread::thread_func(void* arg)
{
	Thread* pThread = static_cast<Thread*>(arg); 
	pThread->_func(); 

	return NULL; 
}
