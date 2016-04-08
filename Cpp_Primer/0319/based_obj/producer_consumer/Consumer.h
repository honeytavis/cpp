#ifndef CONSUMER_H
#define CONSUMER_H

class Buffer; 

class Consumer {
public: 
  Consumer(Buffer& buf); 
  void run();

private:
  Buffer& _buf;
}; 
#endif
