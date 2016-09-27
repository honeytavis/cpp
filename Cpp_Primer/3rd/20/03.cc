#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

const char* str = "vermeer"; 

int main()
{
    const char* pstr = str; 
    //cout << "The address of pstr is: " << pstr << endl; 
    cout << "The address of pstr is: " << static_cast<void*>(const_cast<char*>(pstr)) << endl; 

    return 0; 
}
