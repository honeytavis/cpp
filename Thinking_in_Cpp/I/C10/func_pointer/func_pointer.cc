#include <iostream>

class Foo {
public: 
  Foo(int i = 0) : _i(i) {}

  void f(void) {
    _i++; 
    std::cout << "void f(void)" << '\n'; 
  }

private: 
  int _i; 
}; 

int main()
{
  Foo foo; 

  //void (Foo::*fp)(void) = &Foo::f; 
  void (Foo::*fp)(void) = NULL;
  fp = &Foo::f; 

  (foo.*fp)(); 

  return 0; 
}
