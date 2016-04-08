#include "Consumer.h"
#include "Buffer.h"

#include <unistd.h>
#include <iostream>

Consumer::Consumer(Buffer& buf) : _buf(buf) {}

void Consumer::run()
{
  for (;;) {
    int num = _buf.pop(); 
    std::cout << "Consumer: " << num << '\n'; 
    sleep(2); 
  }
}
