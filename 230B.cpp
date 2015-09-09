#include <iostream>
#include <cmath>

typedef long long int ll;

int main() {
  int n;
  std::cin >> n;
  ll *inputs = new ll[n], max = 0;
  for(int i = 0; i < n; ++i) {
    std::cin >> inputs[i];
    max = std::max(max, inputs[i]);
  }
  ll p = sqrt(max);
  bool *primes = new bool[p + 1];
  primes[1] = false;
  for(int i = 2; i <= p; ++i) {
    primes[i] = true;
  }
  int prime = 2, multiplier;
  while(prime <= p) {
    multiplier = 2;
    if(primes[prime]) {
      while(prime * multiplier <= p) {
        primes[prime * multiplier] = false;
        ++multiplier;
      }
    }
    ++prime;
  }
  ll temp;
  for(int i = 0; i < n; ++i) {
    temp = sqrt(inputs[i]);
    if((temp * temp != inputs[i]) || !primes[temp]) std::cout << "NO\n";
    else if(primes[temp]) std::cout << "YES\n";
  }
}
