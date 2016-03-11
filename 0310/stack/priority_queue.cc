#include <iostream>
#include <queue>

int main()
{
	int arr[10] = {9, 1, 3, 2, 5, 6, 0, 8, 7, 4}; 
	//std::priority_queue<int> pque; 
	std::priority_queue<int, std::vector<int>, std::greater<int> > pque; 

	for (int i = 0; i < 10; ++i) {
		pque.push(arr[i]); 
		std::cout << "pque.top() = " << pque.top() << '\n'; 
	}
	std::cout << "pque.size() = " << pque.size() << '\n'; 

	int max = pque.size(); 
	for (int i = 0; i < max; ++i) {
		std::cout << "pque.top() = " << pque.top() << '\n'; 
		pque.pop(); 
	}

	return 0;
}
