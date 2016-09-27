#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 
using std::cerr; 

#include <string>
using std::string; 

int main()
{
    string in_string; 

    cout << "Please enter your name: "; 
    cin >> in_string; 
    if (in_string.empty()) { // Ctrl+D
        cerr << "\nerror: input string is empty!\n"; 
    } else {
        cout << "hello, " << in_string << "!\n"; 
    }

    return 0; 
}
