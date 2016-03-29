#include "Buffer.h"

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
  _mutex.lock(); 
  while(full()) {
    _notfull.wait(); 
  }

  _que.push(num); 
  _mutex.unlock(); 
  _notempty.notify();
}

int Buffer::pop()
{
  _mutex.lock(); 
  while(empty()) {
    _notempty.wait();
  }

  int num = _que.front(); 
  _que.pop();
  _mutex.unlock(); 
  _notfull.notify(); 
  return num; 
}
