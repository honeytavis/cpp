#include <iostream>

class Foo {
public: 
  Foo() {
    count++; 
    std::cout << "Foo() "
              << "count = " << count << '\n'; 
  }
  
  ~Foo() {
    count--; 
    std::cout << "~Foo() " 
              << "count = " << count << '\n'; 
  }

private: 
  static int count; 
}; 

int Foo::count = 0; 

Foo f(const Foo e) {
//Foo f(const Foo& e) {
  std::cout << "f()" << '\n'; 
  return e; 
}

int main()
{
  Foo a; 
  Foo b = f(a); 

  return 0;
}
