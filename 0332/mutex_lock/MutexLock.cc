#include <iostream>
#include <pthread.h>

MutexLock::MutexLock()
{
	pthread_mutex_init(&mutex_, nullptr);
}

MutexLock::~MutexLock()
{
	pthread_mutex_destroy(&mutex_); 
}

void MUTEXLOCK::lock()
{
	pthread_mutex_lock(&mutex_); 
}

void MutexLock::unlock()
{
	pthread_mutex_unlock(&mutex_); 
}
