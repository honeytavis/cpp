#include <iostream>

char gs1[] = "123456789"; 
char *gs2 = "123456789";
const char gs3[] = "123456789"; 
const char *gs4 = "123456789"; 

int main(int argc, char* argv[])
{
  char s1[] = "123456789"; 
  static char s2[] = "123456789"; 
  static char *s3 = "123456789"; 
  
  const static char s4[] = "123456789"; 
  const static char *s5 = "123456789"; 

// local variables
  std::cout << "addr &s1:" << &s1 << '\n'; 
  std::cout << "addr  s1:" << static_cast<const void *>(s1) << '\n'; 
  std::cout << "addr &s2:" << &s2 << '\n'; 
  std::cout << "addr  s2:" << static_cast<const void *>(s2) << '\n'; 
  std::cout << "addr &s3:" << &s3 << '\n'; 
  std::cout << "addr  s3:" << static_cast<const void *>(s3) << '\n'; 
  std::cout << "addr &s4:" << &s4 << '\n'; 
  std::cout << "addr  s4:" << static_cast<const void *>(s4) << '\n'; 
  std::cout << "addr &s5:" << &s5 << '\n'; 
  std::cout << "addr  s5:" << static_cast<const void *>(s5) << '\n'; 
  std::cout << '\n'; 

// global variables
  std::cout << "addr &gs1:" << &gs1 << '\n'; 
  std::cout << "addr  gs1:" << static_cast<const void *>(gs1) << '\n'; 
  std::cout << "addr &gs2:" << &gs2 << '\n'; 
  std::cout << "addr  gs2:" << static_cast<const void *>(gs2) << '\n'; 
  std::cout << "addr &gs3:" << &gs3 << '\n'; 
  std::cout << "addr  gs3:" << static_cast<const void *>(gs3) << '\n'; 
  std::cout << "addr &gs4:" << &gs4 << '\n'; 
  std::cout << "addr  gs4:" << static_cast<const void *>(gs4) << '\n'; 

  return 0;  
}

/*
addr &s1:0x7ffe706e9790
addr  s1:0x7ffe706e9790
addr &s2:0x602088
addr  s2:0x602088
addr &s3:0x602098
addr  s3:0x400cf1
addr &s4:0x400dc1
addr  s4:0x400dc1
addr &s5:0x6020a0
addr  s5:0x400cf1

addr &gs1:0x602068
addr  gs1:0x602068
addr &gs2:0x602078
addr  gs2:0x400cf1
addr &gs3:0x400db7
addr  gs3:0x400db7
addr &gs4:0x602080
addr  gs4:0x400cf1
*/

// Q: main函数返回前内存中总共有多少个"123456789"?
// 6个, 其中文字常量区3个,全局区2个,stack区1个
