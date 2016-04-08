#include <iostream>
#include <fstream>
#include <string>

int main()
{
  std::ifstream ifs("fstream.cc"); 
  std::ofstream ofs("tmp"); 
  std::string line, file; 
  
  while(getline(ifs, line)) {
    ofs << line << '\n'; 
    file += line + '\n'; 
  }
  std::cout << file; 

  return 0; 
}
