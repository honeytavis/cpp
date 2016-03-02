#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton {
public:
	//不需要再创建类 可直接调用
	//只能使用静态数据成员
	static Singleton *GetInstance(); 

private:
	Singleton()
	{
		std::cout << "Singleton()" << std::endl; 
	}

	static Singleton *pInstance; 
}; 

Singleton *Singleton::pInstance = nullptr; 

Singleton *Singleton::GetInstance()
{
	if (pInstance == nullptr) {
		pInstance = new Singleton;
	}
	return pInstance; 
}

#endif
