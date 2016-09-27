#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 
using std::cerr; 

#include <fstream>
using std::ifstream; 
using std::ofstream; 

#include <string>
using std::string;

#include <vector>
using std::vector; 

#include <algorithm>

int main()
{
    string file_name1; 
    cout << "Please enter file to sort: "; 
    cin >> file_name1; 

    ifstream in_file(file_name1.c_str()); 
    if (!in_file) {
        cerr << "error: unable to open input file: "
             << file_name1 << endl; 
        return -1; 
    }

    string file_name2 = file_name1 + ".sort"; 
    ofstream out_file(file_name2.c_str()); 
    if (!out_file) {
        cerr << "error: unable to open output file: "
             << file_name2 << endl;  
        return -2; 
    }
    
    string buffer; 
    vector<string> text; 
    int cnt = 1; 
    while (in_file >> buffer) {
        text.push_back(buffer); 
        cout << buffer << (++cnt % 8 ? " " : "\n"); 
    }

    sort(text.begin(), text.end()); 

    vector<string>::iterator iter = text.begin(); 
    for (cnt = 1; iter != text.end(); ++iter) {
        out_file << *iter
                 << (++cnt % 8 ? " " : "\n"); 
    }

    return 0; 
}
