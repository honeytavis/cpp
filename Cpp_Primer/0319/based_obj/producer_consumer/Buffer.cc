#include "Buffer.h"
#include "MutexLockGuard.h"

Buffer::Buffer(int size)
: _mutex()
, _notfull(_mutex)
, _notempty(_mutex)
, _size(size)
{}

bool Buffer::empty()
{
  return (_que.size() == 0); 
}

bool Buffer::full()
{
  return (_que.size() == _size); 
}

void Buffer::push(int num)
{
  MutexLockGuard guard(_mutex); 
  while(full()) {
    _notfull.wait(); 
  }

  _que.push(num); 
  _notempty.notify();
}

int Buffer::pop()
{
  MutexLockGuard guard(_mutex); 
  while(empty()) {
    _notempty.wait();
  }

  int num = _que.front(); 
  _que.pop();
  _notfull.notify(); 

  return num; 
}
