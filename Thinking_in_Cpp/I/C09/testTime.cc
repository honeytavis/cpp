#include "Time.h"
#include <iostream>
#include <unistd.h>

int main()
{
  Time begin; 
  begin.localtime(); 
  begin.strftime(); 
  std::cout << begin.get() << '\n'; 

  sleep(2); 

  Time end; 
  end.localtime(); 
  end.strftime(); 
  std::cout << end.get() << '\n'; 
  std::cout << "delta time: " << end.delta(begin) << '\n'; 

  Time utc; 
  utc.gmtime(); 
  utc.strftime(); 
  std::cout << "UTC: " << utc.get() << '\n'; 

  return 0; 
}
