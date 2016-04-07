#include <iostream>

class Foo {
public: 
  Foo(char c) : _c(c) {
    std::cout << "Foo(char) for " << _c << '\n';
  }

  ~Foo() {
    std::cout << "~Foo() for " << _c << '\n'; 
  }

private: 
  char _c; // Identifier
}; 

Foo a('a'); // static storage

void f() {
  static Foo b('b'); 
  std::cout << "f()" << '\n'; 
}

void g() {
  extern Foo b; 
  std::cout << "g()" << '\n'; 
}

int main()
{
  std::cout << "inside main()" << '\n'; 
  f(); 
  g(); 
  std::cout << "leaving main()" << '\n'; 
}
