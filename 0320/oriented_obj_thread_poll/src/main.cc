#include "ThreadPool.h"
#include "MyTask.h"

#include <unistd.h>

int main()
{
  Task* pTask = new MyTask; 

  ThreadPool threadpool(3, 6); 
  threadpool.start(); 

  for (int i = 0; i < 6; ++i) {
    threadpool.addTask(pTask); 
  }

  threadpool.stop(); 

  return 0; 
}
