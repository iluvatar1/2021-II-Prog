#include <iostream>
#include <cmath>

bool isprime (long long n); // declaration
long long largestprimedivisor(long long n);
long long sumprimefactors(long long n);

int main(void)
{
    const long long N = 600851475147;
  //const long long N = 105;
    std::cout << largestprimedivisor(N) << std::endl;
    std::cout << sumprimefactors(N) << std::endl;
    
    return 0;
}

// implementation
long long largestprimedivisor(long long n)
{
    long long result = n;
    for (long long ii = 2 ; ii <= n/2 ; ii++) {
        if (n%ii == 0) {
            long long largedivisor = n/ii;
            if (isprime(largedivisor) == true) {
                result = largedivisor;
                break;
            }
        }
    }
    return result;
}


bool isprime (long long n)
{
    bool isprime = true;
    for(long long jj = 2; jj <= std::sqrt(n); jj++) {
        if (n%jj == 0) {
            isprime = false;
            break;
        }
    }
    return isprime;
}

long long sumprimefactors(long long n)
{
  long long suma = 0;
  for (long long ii = 2 ; ii <= n; ii++) {
    if (n%ii == 0 && isprime(ii)) {
      suma += ii;
      n /= ii;
    }
  }
  return suma;
}
