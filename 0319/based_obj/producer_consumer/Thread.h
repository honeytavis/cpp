#ifndef THREAD_H
#define THREAD_H

#include "Noncopyable.h"
#include <pthread.h>
#include <functional>

class Thread : private Noncopyable {
public:
	Thread(std::function<void()> func); 
	~Thread(); 
	void create(); 
	void join(); 

private:
	static void* thread_func(void*); 

private:
	pthread_t _tid; 
	bool _active; 
  std::function<void()> _func; 
}; 

#endif
