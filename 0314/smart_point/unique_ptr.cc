#include <iostream>
#include <memory>
#include <vector>

std::unique_ptr<int> getval()
{
	std::unique_ptr<int> up(new int(88)); 
	return up; 
}

int main()
{
	std::unique_ptr<int> api(new int(88)); 
	//std::cout << "api = " << api << '\n'; // error
	//std::unique_ptr<int> one(api); // error

	std::cout << "*api = " << *api << '\n'; 
	std::cout << "api.get() = " << api.get() << '\n'; 
	//std::unique_ptr<int> one(api.get()); // error

#if 0
	std::unique_ptr<int> uptr = getval(); 
	std::cout << "*uptr = " << *uptr << '\n'; 
#endif
	std::unique_ptr<int> up(new int(66)); 
	std::unique_ptr<int> uptr2 = std::move(up); 
	std::cout << "*uptr2 = " << *uptr2 << '\n'; 

	std::cout << '\n'; 
	std::unique_ptr<int> sp(new int(88));
	std::vector<std::unique_ptr<int>> vec; 
	//vec.push_back(sp); // error
	vec.push_back(std::move(sp));
	//std::cout << "*sp = " << *sp << '\n'; // error

	return 0; 
}
