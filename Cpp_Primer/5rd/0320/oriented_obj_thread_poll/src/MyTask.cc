#include "MyTask.h"

#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <iostream>

void MyTask::process()
{
    srand(time(NULL)); 
    for (int i = 0; i < 2; ++i) {
      int num = rand() % 100; 
      //int num = rand(); 
      std::cout << "MyTask: " << num << '\n'; 
      sleep(1); 
    }
}
