#ifndef MyStack_H
#define MyStack_H

// 模板的接口和实现不可分开

template<typename T, int num>
class Stack {
public:
	Stack() : top_(0) {}

	bool empty(); 
	bool full(); 
	bool push(const T&); 
	bool pop(T&); 

private:
	T arr_[num]; 
	int top_; 
}; 

template<typename T, int num>
bool Stack<T, num>::empty()
{
	return top_ == 0; 
}

template<typename T, int num>
bool Stack<T, num>::full()
{
	return top_ == num; 
}

template<typename T, int num>
bool Stack<T, num>::push(const T& obt)
{
	if (full()) {
		return false; 
	} else {
		arr_[top_++] = obt;
		return true; 
	}
}

template<typename T, int num>
bool Stack<T, num>::pop(T& obt)
{
	if (empty()) {
		return false; 
	} else {
		obt = arr_[--top_]; 
		return true; 
	}
}

#endif
