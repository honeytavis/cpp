#include "Buffer.h"
#include "Task.h"
#include "MutexLockGuard.h"

Buffer::Buffer(int size)
: _active(true)
, _size(size)
, _mutex()
, _notFull(_mutex)
, _notEmpty(_mutex)
{}

bool Buffer::full()
{
  return _size == _que.size(); 
}

void Buffer::wakeup_empty()
{
  _active = false;
  _notEmpty.notifyall();
}

bool Buffer::empty()
{
  return 0 == _que.size(); 
}

void Buffer::push(Task* pTask)
{
  MutexLockGuard mlg(_mutex);
  while (full()) {
    _notFull.wait(); 
  }

  _que.push(pTask);
  _notEmpty.notify(); 
}

Task* Buffer::pop()
{
  if (!_active) {
    return NULL;
  }

  MutexLockGuard mlg(_mutex); 
  while (empty()) {
    _notEmpty.wait(); 
  }

  Task* pTask = _que.front(); 
  _que.pop(); 
  _notFull.notify(); 
  
  return pTask; 
}
