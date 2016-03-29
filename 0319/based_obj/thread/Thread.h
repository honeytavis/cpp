#ifndef THREAD_H
#define THREAD_H

#include "Noncopyable.h"
#include <pthread.h>
#include <functional>

class Thread : private Noncopyable {
public:
  typedef std::function<void()> ThreadCallBack;

	Thread(ThreadCallBack cb); 
	~Thread(); 

	void create(); 
	void join(); 
	static void* thread_func(void*); 

private:
	pthread_t _tid; 
	bool _active; 
  ThreadCallBack _cb;
}; 

#endif
