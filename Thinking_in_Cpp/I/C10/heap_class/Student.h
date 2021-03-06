#ifndef STUDENT_H
#define STUDENT_H
	
// // // // // // // // // // // // // // // // // // // // // // // // // 
//
// new 的实现
//
// 调用 operator new 标准库函数 分配足够大的原始的未类型化的内存
// 调用类的一个构造函数去初始化对象
// 返回指向 由该对象构造函数确定的空间 的指针
// 
// delete 的实现
// 
// 调用类的析构函数 确定对象所占的空间
// 调用 operator delete 标准库函数 释放该对象所占的空间
//
// 只生成堆对象
// 
// 将类的析构函数声明为 private 同时创建类的销毁函数 
//
// // // // // // // // // // // // // // // // // // // // // // // // // 

class Student {

public:
	Student(); 
	//static void* operator new(size_t sz); 
	//static void operator delete(void *p); 
	void Destroy(); 

private:
	~Student(); 

private:
	int m_ID; 
	char m_Name[10]; 
}; 

#endif
