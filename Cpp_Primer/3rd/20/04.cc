#include <iostream>
using std::cin; 
using std::cout; 
using std::cerr; 
using std::endl; 

#include <vector>
using std::vector; 

#include <string>
using std::string; 

#include <iterator>
using std::ostream_iterator; 

#include <algorithm>

int main()
{
    string animals[] = {
        "Tigger", "Piglet", "Eeyore", "Rabbit"
    }; 

    vector<string> S(animals, animals+4); 
    vector<string>::iterator iter; 
    for (iter = S.begin(); iter != S.end(); ++iter) {
        cout << *iter << " "; 
    }
    cout << endl; 

    ostream_iterator<string> output(cout, " "); 
    copy(S.begin(), S.end(), output); 
    cout << endl; 

    return 0; 
}
