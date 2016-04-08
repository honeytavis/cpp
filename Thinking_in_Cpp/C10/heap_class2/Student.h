#ifndef STUDENT_H
#define STUDENT_H
	
// // // // // // // // // // // // // // // // // // // // // // // // // 
//
// 只生成堆对象
// 
// 将类的默认构造函数声明为 private 同时创建静态的类生成函数 
//
// // // // // // // // // // // // // // // // // // // // // // // // // 

class Student {

public:
	~Student(); 
	//void* operator new(size_t sz); 
	//void operator delete(void *p); 
	static Student *Creat(); 

private:
	Student(); 

private:
	int m_ID; 
	char m_Name[10]; 
}; 

#endif
