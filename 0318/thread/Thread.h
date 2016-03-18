#ifndef THREAD_H
#define THREAD_H

#include <pthread.h>

class Thread {
public:
	Thread(); 
	~Thread(); 
	void create(); 
	void join(); 
	virtual void run() = 0; 
	static void* thread_func(void*); 

private:
	pthread_t tid_; 
	bool work_; 
}; 

#endif
