#ifndef MUTEXLOCK_H 
#define MUTEXLOCK_H 

class MutexLock {
public:
	MutexLock(); 
	~MutexLock(); 
	void lock(); 
	void unlock(); 
	
private:
	pthread_mutex_t mutex_; 
}; 

#endif
