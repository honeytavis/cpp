#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>

class Singleton {
public: 
  static Singleton* getSingleton(); 

  ~Singleton() {
    std::cout << "~Singleton()" << '\n'; 
  }

private: 
  Singleton(int i = 0) : _i(i) {}
  Singleton(const Singleton&); 

private: 
  static Singleton sin; 
  int _i; 
}; 

Singleton Singleton::sin;

Singleton* Singleton::getSingleton() {
  return &sin; 
}

#endif
