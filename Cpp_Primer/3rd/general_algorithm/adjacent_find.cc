#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <vector>
using std::vector; 

#include <algorithm>
using std::adjacent_find; 

#include <cassert>

class TwiceOver {
public: 
    bool operator() (int v1, int v2) {
        //return v1 == v2 ? true : false; 
        return v1 == v2/2 ? true : false; 
    }
}; 

int main()
{
    int ia[] = {1, 4, 4, 12, 6, 12}; 
    vector<int> vec(ia, ia+4); 

    vector<int>::iterator iter; 
    iter = adjacent_find(vec.begin(), vec.end()); 
    cout << "*iter = " << *iter << endl;

    iter = adjacent_find(vec.begin(), vec.end(), TwiceOver()); 
    cout << "*iter = " << *iter << endl;

    return 0; 
}
