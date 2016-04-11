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
  extern Foo a; 
  std::cout << "f()" << '\n'; 
}

void g() {
  static Foo b('b'); 
}

int main()
{
  std::cout << "inside main()" << '\n'; 
  f(); 
  g(); 
  std::cout << "leaving main()" << '\n'; 
}
