#include <iostream>

const int a = 8;

int main(void)
{
  int a = 9;
  std::cout << a << "\n";
  std::cout << &a << "\n";
  std::cout << ::a << "\n";
  std::cout << &::a << "\n";
  int b = -1;
  a = a + b;

  {
    int a = 10;
    std::cout << a << "\n";
    std::cout << &a << "\n";
  }
  
  std::cout << a << "\n";
  std::cout << &a << "\n";
  
  return 0; 
}
