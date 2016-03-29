#ifndef PRODUCER_H 
#define PRODUCER_H 

/// forward declaration
class Buffer;

class Producer {
public: 
  Producer(Buffer& buf);
	void run();
 
private:
  Buffer& _buf;
}; 

#endif
