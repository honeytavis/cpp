#include "ConsumerThread.h"
#include "Buffer.h"

#include <unistd.h>
#include <iostream>

ConsumerThread::ConsumerThread(Buffer& buff) : _buff(buff) {}

void ConsumerThread::run()
{
  for (;;) {
    int num = _buff.pop(); 
    std::cout << num << '\n'; 
    sleep(2); 
  }
}
