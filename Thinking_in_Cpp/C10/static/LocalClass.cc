#include <iostream>

class Foo {
private: 
  static int _i; 
}; 

int Foo::_i = 1; 

void f() {
  Foo a; 
}

void g() {
  class LocalFoo {
  private: 
    //static int _i; 
    int _i; 
  }; 
}

int main()
{
  f(); 
  g(); 

  return 0; 
}
