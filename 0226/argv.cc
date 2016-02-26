#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string; 

int main(int argc, char **argv)
{
		if (argc != 3) {
			cout << "error args!" << endl; 
			exit(0); 
		}
		string s1 = argv[1]; 
		string s2 = argv[2]; 
		s1 += " "; 
		s1 += s2; 

		cout << s1 << endl; 
		return 0; 
}
