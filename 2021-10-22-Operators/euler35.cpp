#include <iostream>

int main(void)
{
  int suma = 0;
  int m = 0;
  const int MMAX = 10;

  for(m = 1 ; m < MMAX; m = m+1) {
    if ((m%3 == 0) || (m%5 == 0)) {
      suma += m; // suma = suma + m;
    }
  }
    
  std::cout << suma << "\n";
  
  return 0; 
}
