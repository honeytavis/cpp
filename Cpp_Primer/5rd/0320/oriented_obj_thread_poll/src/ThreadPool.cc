#include "ThreadPool.h"
#include "WorkThread.h"
#include "Task.h"

#include <unistd.h>
#include <stdlib.h>

ThreadPool::ThreadPool(int threadNum, int bufSize)
: _active(true)
, _threadNum(threadNum)
, _bufSize(bufSize)
, _buf(_bufSize)
{
  _vecThreads.reserve(_threadNum); 
}

ThreadPool::~ThreadPool()
{
  if (_active)
  {
    stop(); 
  }
}

void ThreadPool::start()
{
  for (int idx = 0; idx < _threadNum; ++idx) {
    Thread* pThread = new WordThread(*this); 
    _vecThreads.push_back(pThread); 
  }

  std::vector<Thread*>::iterator it; 
  for (it = _vecThreads.begin(); it != _vecThreads.end(); ++it) {
    (*it)->create(); 
  }
}

void ThreadPool::stop()
{
  if (_active) {
    while (!_buf.empty()) {
      sleep(1); 
    }
    _active = false; 
    _buf.wakeup_empty();
    std::vector<Thread*>::iterator it; 
    for (it = _vecThreads.begin(); it != _vecThreads.end(); ++it) {
      (*it)->join(); 
      delete (*it); 
    }
    _vecThreads.clear(); 
  }
}

void ThreadPool::addTask(Task* pTask)
{
  _buf.push(pTask); 
}

Task* ThreadPool::getTask()
{
  return _buf.pop(); 
}

void ThreadPool::threadFunc()
{
  while(_active) {
    Task* pTask = getTask(); 
    if (pTask) {
      pTask->process(); 
    }
  }
}
