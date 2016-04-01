#include "Buffer.h"
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

void Buffer::push(std::function<void()> task)
{
  MutexLockGuard mlg(_mutex);
  while (full()) {
    _notFull.wait(); 
  }

  _que.push(task);
  _notEmpty.notify(); 
}

std::function<void()> Buffer::pop()
{
  if (!_active) {
    return NULL;
  }

  MutexLockGuard mlg(_mutex); 
  while (empty()) {
    _notEmpty.wait(); 
  }

  std::function<void()> task = _que.front(); 
  _que.pop(); 
  _notFull.notify(); 
  
  return task; 
}
