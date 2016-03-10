//
// 创建序列式容器的五种方式: 
// 创建空容器
// 创建固定大小的容器
// 创建固定大小且被初始化的容器
// 用已知的同类型的容器初始化新容器 (复制构造函数)
// 用一对迭代器(标识元素区间) 初始化新容器
//

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <array>

int main()
{
	std::vector<int> vec; 
	std::cout << "vec.size() = " << vec.size() << std::endl; 

	//double darr[5] = {1, 2, 3, 4, 5}; 
	//std::deque<double> deq(darr, darr + 5); 
	std::array<double, 5> darr = {1, 2, 3, 4, 5}; 
	std::deque<double> deq(darr.begin(), darr.end()); 
	for (size_t idx = 0; idx != deq.size(); ++idx) {
		std::cout << deq[idx] << ' '; 
	}
	std::cout << std::endl; 

	std::deque<double>::iterator it = deq.begin(); 
	//std::deque<double>::const_iterator it = deq.begin(); 
	for (; it != deq.end(); ++it) {
		std::cout << *it << ' '; 
		//std::cin >> *it; 
	}
	std::cout << std::endl; 

	std::list<float> myList(3, 5); 
	//std::cout << list[0]; // list不支持下标访问运算符
	for (auto i : myList) {
		std::cout << i << ' '; 
	}
	std::cout << std::endl; 

	//for (auto i = myList.begin(); i != myList.end(); ++i) {
	for (auto i = myList.cbegin(); i != myList.cend(); ++i) {
		std::cout << *i << ' '; 
	}
	std::cout << std::endl; 
	
	std::list<float> myList2(4, 9);
	std::cout << "before swap element" << std::endl; 
	std::cout << "myList2.size() = " << myList2.size() << std::endl; 
	for (auto i = myList2.begin(); i != myList2.end(); ++i) {
		std::cout << *i << ' '; 
	}
	std::cout << std::endl; 

	myList.swap(myList2); 
	std::cout << "after swap element" << std::endl; 
	std::cout << "myList2.size() = " << myList2.size() << std::endl; 
	for (auto i = myList2.begin(); i != myList2.end(); ++i) {
		std::cout << *i << ' '; 
	}
	std::cout << std::endl; 

	return 0; 
}
