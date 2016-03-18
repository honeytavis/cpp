#include "Thread.h"

Thread::Thread() : tid_(0), work_(false) {}

Thread::~Thread()
{
	if (work_) {
		pthread_detach(tid_); 
		work_ = false; 
	}
}

void Thread::create()
{
	pthread_create(&tid_, NULL, thread_func, this); 
	work_ = true; 
}

void Thread::join()
{
	pthread_join(tid_, NULL); 
	work_ = false;
}

void* Thread::thread_func(void* arg)
{
	Thread* pThread = static_cast<Thread*>(arg); 
	pThread->run(); 

	return NULL; 
}
