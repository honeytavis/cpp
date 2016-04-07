#include <iostream>

class Rectangle {
public: 
  Rectangle(int wide = 0, int high = 0)
  : _wide(wide)
  , _high(high) 
  {}

  int width() const // Read
  {
    return _wide;
  }

  void width(int wide) // Set
  {
    _wide = wide; 
  }

  int height() const // Read
  {
    return _high; 
  }

  void height(int high) // Set
  {
    _high = high; 
  }

private: 
  int _wide; 
  int _high; 
}; 

int main()
{
  Rectangle r(19, 47); 

  r.height(2 * r.width()); 
  r.width(2 * r.height()); 

  std::cout << "heignt: " << r.height() << '\n'
            << "width: " << r.width() << '\n'; 

  return 0; 
}
