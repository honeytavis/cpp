#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<std::string> svec(10, "null"); 
	std::cout << svec[0] << " " << svec[1] << std::endl; 

	std::vector<int> vec1(10, 42); 
	std::cout << vec1[0] << " " << vec1[1] << std::endl; 

	std::vector<int> vec2{10, 42};
	std::cout << vec2[0] << " " << vec2[1] << std::endl; 

	std::vector<int> vec3; 
	int tmp; 
	for (int i = 0; i != 5; i++) {
		std::cin >> tmp; 
		//vec3[i] = tmp;  //Segmentation fault
		vec3.push_back(tmp); 
	}

	for (decltype(vec3.size()) index = 0; 
		!vec3.empty() && index < vec3.size(); index++) {
		std::cout << vec3[index] << " "; 
	}
	std::cout << std::endl;  

	for (auto index = vec3.begin(); index != vec3.end(); ++index) {
		std::cout << *index << " "; 
	}
	std::cout << std::endl;  

	for (auto index = vec3.cbegin(); index != vec3.cend(); ++index) {
		std::cout << *index << " "; 
	}
	std::cout << std::endl;  

	return 0; 
}
