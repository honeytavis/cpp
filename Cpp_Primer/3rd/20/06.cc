#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <string>
using std::string; 

#include <vector>
using std::vector; 

#include <iterator>
using std::istream_iterator; 

#include <algorithm>

int main()
{
    istream_iterator<string> in(cin), eos; // eos: end of stream 
    vector<string> text; 

    copy(in, eos, back_inserter(text)); 

    sort(text.begin(), text.end()); 

    vector<string>::iterator iter; 
    iter = unique(text.begin(), text.end()); 
    text.erase(iter, text.end()); 
    text.erase(iter, text.end()); 

    int line_cnt = 1; 
    vector<string>::iterator iter1; 
    for (iter1 = text.begin(); iter1 != text.end(); ++iter1) {
        cout << *iter1 << (++line_cnt % 9 ? ' ' : '\n'); 
    }

    cout << endl; 

    return 0; 
}
