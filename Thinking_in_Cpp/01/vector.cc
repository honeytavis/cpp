#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
  std::ifstream ifs("vector.cc"); 
  std::string line; 
  std::vector<std::string> file; 

  while(getline(ifs, line)) {
    file.push_back(line); 
  }

  for (int i = 0; i < file.size(); ++i) {
    std::cout << file[i] << '\n'; 
  }

  return 0; 
}
