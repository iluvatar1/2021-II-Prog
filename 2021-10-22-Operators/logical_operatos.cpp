#include <iostream>

int main(void)
{
  std::cout << ((5==5) && (3>6)) << std::endl;
  std::cout << ((5==5) || (3>6)) << std::endl;

  int flag = (5<4) ? -1 : 32;
  std::cout << flag << std::endl;

  int m = 3, n = 17, k = 0;
  k = m & n;
  std::cout << k << std::endl;
  k = m | n;
  std::cout << k << std::endl;
  k = m << 2;
  std::cout << k << std::endl;
  k = m >> 2;
  std::cout << k << std::endl;
  //  4 = 0100, 8 = 1000
  // 4&8 = 0100&1000 = 0000 = 0
  // 4|8 = 0100&1000 = 1100 = 12
  // 00010 & 10001 = 00000
  // 00010 | 10001 = 10011 = 1+2+16 = 19
  
  return 0;
}
