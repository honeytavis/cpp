#include "ThreadPool.h"
#include <unistd.h>

int main()
{
  std::function<void()> task = new MyTask; 

  ThreadPool threadpool(3, 6); 
  threadpool.start(); 

  for (int i = 0; i < 6; ++i) {
    threadpool.addTask(task); 
  }

  threadpool.stop(); 

  return 0; 
}
