#include <iostream>

class Foo {
public: 
  Foo(int i = 10) : _i(i) { _j = _i; }

  void add1() {
    _i++; 
    _j++; 
  }

  static void add2() {
    //_i++; 
    _j++; 
  }

  static void f() {
    //add1(); 
    add2(); 
  }

  void print() const {
    std::cout << "i = " << _i << '\n'; 
    std::cout << "j = " << _j << '\n'; 
  }

private: 
  int _i; 
  static int _j; 
}; 

int Foo::_j = 0; 

int main()
{
  Foo f1; 
  f1.f(); 
  f1.print(); 

  Foo f2; 
  f2.f(); 
  Foo::f(); 
  f2.print(); 

  return 0; 
}
