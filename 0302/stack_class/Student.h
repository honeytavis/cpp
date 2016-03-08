#ifndef STUDENT_H
#define STUDENT_H

// // // // // // // // // // // // // // // // 
// 
// 只生成栈对象
// 
// 将 operator new 声明成 private
//
// // // // // // // // // // // // // // // // 

class Student {
public:
	Student(); 
	~Student(); 

private:
	void * operator new(size_t); 

private:
	int m_ID; 
	char m_Name[10]; 
}; 

#endif
