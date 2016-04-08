#include <iostream>

void func_a() {
  std::cout << "func_a is called..." << '\n'; 
}

void func_b() {
  std::cout << "func_b is called..." << '\n'; 
}

void func_c() {
  std::cout << "func_c is called..." << '\n'; 
}

void func_d() {
  std::cout << "func_d is called..." << '\n'; 
}

void func_e() {
  std::cout << "func_e is called..." << '\n'; 
}

void func_f() {
  std::cout << "func_f is called..." << '\n'; 
}

void func_g() {
  std::cout << "func_g is called..." << '\n'; 
}

int main()
{
  void (*func_table[])() = {func_a, func_b, func_c, func_d, func_e, func_f, func_g}; 

  for (;;) {
    std::cout << "Press a key from 'a' to 'g' or 'q' to quit" << '\n'; 
    char c , cr; 
    std::cin.get(c); 
    std::cin.get(cr); 
    if (c <= 'g' && c >= 'a') {
      (*func_table[c - 'a'])(); 
    } else if (c == 'q') {
      break; 
    } else {
      continue; 
    }
  }

  return 0; 
}
