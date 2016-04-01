#ifndef THREAD_H
#define THREAD_H

#include "Noncopyable.h"
#include <pthread.h>
#include <functional>

class Thread : private Noncopyable {
friend void* thread_func(void*); 

public: 
  Thread(std::function(void<>) cb); 
  ~Thread(); 

  void create();
  void join(); 

private: 
  pthread_t _tid; 
  bool _active; 
  std::function<void()> _cb;
}; 

#endif
