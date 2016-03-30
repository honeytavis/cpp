#include "WorkThread.h"
#include "ThreadPool.h"

WordThread::WordThread(ThreadPool& threadpool)
: _threadpool(threadpool) {}

void WordThread::run()
{
  _threadpool.threadFunc(); 
}
