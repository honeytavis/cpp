#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec; 
	std::cout << "vec.size =  " << vec.size() << std::endl; 
	std::cout << "vec.capacity = " << vec.capacity() << std::endl; 

	vec.push_back(10); //vector 为空时只能这样追加

	for (size_t i = 0; i != vec.size(); ++i) {
		std::cout << vec[i] << " "; 
	}
	std::cout << std::endl; 

	std::vector<int>::iterator it; 
	for (it = vec.begin(); it != vec.end(); ++it) {
		std::cout << *it << " "; 
	}
	std::cout << std::endl; 

	vec.pop_back(); 
	for (auto i : vec) {
		std::cout << i << " "; //vector 为空时任然可以访问
	}
	std::cout << std::endl; 

	return 0; 
}
