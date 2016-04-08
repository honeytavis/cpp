#include <iostream>
using std::cout; 
using std::endl; 

#include <queue>
using std::queue; 

int main()
{
	queue<int> myQueue; 
	for (int i = 0; i < 10; ++i) {
		myQueue.push(i); 
		cout << "myQueue.back() = " << myQueue.back() << '\n'; 
	}
	cout << "myQueue.size() = " << myQueue.size() << '\n'; 

	//for (int i = 0; i < myQueue.size(); ++i) {
	int max = myQueue.size(); 
	for (int i = 0; i < max; ++i) {
		cout << myQueue.front() << ' '; 
		myQueue.pop();
	}
	cout << endl;

	return 0;
}
