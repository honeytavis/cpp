// Inline evaluation order

class Foo {
public: 
  Foo() : i(0) {}

  int f() const {
    return g() + 1; 
  }

  int g() const {
    return i; 
  }

private: 
  int i; 
}; 

int main()
{
  Foo foo; 
  foo.f(); 
}
