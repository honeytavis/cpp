#include <iostream>
#include <algorithm>
#include <vector>

void print(std::vector<int>::value_type v) 
{
	std::cout << v << ' '; 
}

int main()
{
	std::vector<int> myVec{1, 2, 3, 4, 5, 6}; 
	std::less<int> lt; 
	//replace_if(myVec.begin(), myVec.end(), std::bind2nd(lt, 3), 7); 
	replace_if(myVec.begin(), myVec.end(), std::bind1st(lt, 3), 7); 
	for_each(myVec.begin(), myVec.end(), print); 

	return 0; 
}
