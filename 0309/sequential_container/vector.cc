#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::vector<std::string> vec_str; 
	vec_str.push_back("this is A"); 
	//for (auto i = vec_str.begin(); i != vec_str.end(); ++i) {
	vec_str.reserve(10);
	for (size_t i = 0; i < 20; ++i) {
		std::cout << "vec_str's size = " << vec_str.size() << ' '
				  << "vec_str's capacity = " << vec_str.capacity() 
				  << std::endl; 

		vec_str.push_back("this is B"); 
	}
	
	return 0; 
}

//
// capacity 内存分配策略
// 只有在迫不得已时才重新分配内存
// 每次重新分配内存时将当前容量翻倍
//
// reserve 可以让我们手动指定 capacity 的大小
// 当然 capacity 容量不够用时 仍然会自动翻倍
//
