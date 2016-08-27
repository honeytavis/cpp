#ifndef THREAD_H
#define THREAD_H

#include "Noncopyable.h"
#include <pthread.h>

class Thread : private Noncopyable {
public:
	Thread(); 
	~Thread(); 

	void create(); 
	void join(); 

private:
	static void* thread_func(void*); 
	virtual void run() = 0; 

private:
	pthread_t _tid; 
	bool _active; 
}; 

#endif
