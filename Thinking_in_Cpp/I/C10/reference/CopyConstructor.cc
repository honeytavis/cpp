#include <iostream>

class Foo {
public: 
  Foo(int count = 0) : _count(count) {
    _count++; 
    std::cout << "Foo() "
              << "_count = " << _count << '\n'; 
  }
  
  ~Foo() {
    _count--; 
    std::cout << "~Foo() " 
              << "_count = " << _count << '\n'; 
  }

  Foo (const Foo& rhs) : _count(rhs._count) {
    std::cout << "Foo(const Foo&)" << '\n'; 
  }
  
private: 
  int _count; 
}; 


//Foo f(const Foo e) {
Foo f(const Foo& e) {
  std::cout << "f()" << '\n'; 
  return e; 
}

int main()
{
  Foo a; 
  Foo b = f(a); 

  return 0;
}
