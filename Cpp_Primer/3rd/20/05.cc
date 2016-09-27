#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <string>
using std::string; 

#include <vector>
using std::vector; 

#include <algorithm>

int main()
{
    vector<int> ivec; 
    int ival, N; 
    
    cin >> N; 
    for (int i = 0; i < N; ++i) {
        if (cin >> ival) {
            ivec.push_back(ival); 
        }
    }
    
    sort(ivec.begin(), ivec.end()); 
    vector<int>::iterator iter; 
    for (iter = ivec.begin(); iter != ivec.end(); ++iter) {
        cout << *iter << ' '; 
    }
    cout << endl; 

    return 0; 
}
