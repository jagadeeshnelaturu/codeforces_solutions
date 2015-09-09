#include <iostream>
#include <cmath>

bool isPrime(int n) {
  int s = sqrt(n);
  for(int i = 2; i <= s; ++i) {
    if(!(n % i)) return false;
  }
  return true;
}

int main() {
  int n, m;
  std::cin >> n >> m;
  if(isPrime(m)) {
    int i;
    for(i = n + 1; i < m; ++i) {
      if(isPrime(i)) {
        std::cout << "NO\n";
        return 0;
      }
    }
    std::cout << "YES\n";
  }
  else {
    std::cout << "NO\n";
  }
}
