#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <list>
using std::list; 

#include <numeric>
using std::accumulate; 

#include <functional>
using std::plus; 

int main()
{
    int ia[] = {1, 2, 3, 4}; 
    list<int> ilist(ia, ia+4); 

    int ia_result = accumulate(&ia[0], &ia[4], 0); 
    int ilist_res = accumulate(ilist.begin(), ilist.end(), 0, plus<int>()); 

    cout << "accumulate()\n\t"
         << "operating on values {1, 2, 3, 4}\n\t"
         << "result with default addition: "
         << ia_result << "\n\t"
         << "result with plus<int> function object: "
         << ilist_res
         << endl; 

    return 0; 
}
