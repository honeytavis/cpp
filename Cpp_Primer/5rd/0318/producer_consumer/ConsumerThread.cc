#include "ConsumerThread.h"
#include "Buffer.h"

#include <unistd.h>
#include <iostream>

ConsumerThread::ConsumerThread(Buffer& buf) : _buf(buf) {}

void ConsumerThread::run()
{
  for (;;) {
    int num = _buf.pop(); 
    std::cout << "Consumer: " << num << '\n'; 
    sleep(2); 
  }
}
