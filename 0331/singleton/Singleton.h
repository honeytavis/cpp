#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton {
public:
	
	static Singleton *GetInstance()
	{
		if (pInstance == nullptr) {
			pInstance = new Singleton;
		}
		return pInstance; 
	}

private:
	static Singleton *pInstance; 
}; 

Singleton *Singleton::pInstance = nullptr; 

#endif
