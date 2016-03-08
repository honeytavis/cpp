#ifndef _STRING_H
#define _STRING_H

class String {
public:
	String(); 
	~String(); 

	void Print(); 
	void PrintRef(); 

	String(const char*); 
	String(const String&); 

private:
	class RefChar{
	public:
		RefChar(); 
		~RefChar(); 
		// 如果数据成员声明为 private 
		// 那么类外部的函数无法对其操作
		char* pchar_; 
		int refCount_; 
	}; 
	
	RefChar* pstr_; 
}; 

#endif
