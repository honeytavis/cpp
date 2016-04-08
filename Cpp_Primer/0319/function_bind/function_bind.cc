#include <iostream>
#include <functional>

class Foo {
public: 
  Foo(int num) : _num(num) {}

  int print_add(int i) const
  {
    std::cout << "Foo::print_add() -> " << _num + i << '\n'; 
  } 

public: 
  int _num;
}; 

void print_num(int i)
{
  std::cout << "print_num(int) -> " << i << '\n'; 
}

class PrintNum
{
public: 
  void operator()(int i) const
  {
    std::cout << "PrintNum::operator() -> " << i << '\n'; 
  }
}; 

int main()
{
  //std::function<void(int)> f_display = print_num; 
  auto f_display = print_num; 
  f_display(-9); 
  std::cout << std::endl; 

  std::function<void(const Foo&, int)> f_add_display = &Foo::print_add; 
  const Foo foo(314159); 
  f_add_display(foo, 1); 
  std::cout << std::endl; 

  std::function<void(int)> f_display_obj = PrintNum(); 
  f_display_obj(18); 
  std::cout << std::endl; 

  std::function<void()> f_display_31337 = std::bind(print_num , 31337); 
  f_display_31337(); 

  std::function<void(int)> f_add_display2 = \
    std::bind(&Foo::print_add, foo, std::placeholders::_1); 
  f_add_display2(2); 

  return 0; 
}
