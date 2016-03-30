#ifndef THREAD_H
#define THREAD_H

#include "Noncopyable.h"
#include <pthread.h>

class Thread : private Noncopyable {
friend void* thread_func(void*); 

public:
	Thread(); 
	~Thread(); 

	void create(); 
	void join(); 

private:
	virtual void run() = 0; 

private:
	pthread_t _tid; 
	bool _active; 
}; 

#endif
