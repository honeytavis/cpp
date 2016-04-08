#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton {
public:
	static Singleton* getSingleton();
  static void Distructor();

private:
	Singleton() {}
  Singleton(const Singleton&); // Prevent copy-construction

private:
	static Singleton* singletonPtr; 
}; 

Singleton* Singleton::singletonPtr = NULL; 

Singleton* Singleton::getSingleton()
{
	if (singletonPtr == NULL) {
		singletonPtr = new Singleton;
	}

	return singletonPtr; 
}

void Singleton::Distructor()
{
  if (singletonPtr == NULL) {
    return; 
  }
  delete singletonPtr; 
  singletonPtr = NULL; 
}

#endif
