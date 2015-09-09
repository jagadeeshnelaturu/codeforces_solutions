#include <iostream>
#include <vector>
#include <cmath>

bool isComposite(int i, int* primality) {
  if(primality[i - 2] == 0) return true;
  else if(primality[i - 2] == 1) return false;
  else if(primality[i - 2] == -1) {
    for(int j = 2; j <= sqrt(i); ++j) {
      if(!isComposite(j, primality) && (i % j == 0)) {
        primality[i - 2] = 0;
        return true;
      }
    }
    primality[i - 2] = 1;
    return false;
  }
}

int main() {
  int n;
  std::cin >> n;
  int* primality = new int[n - 1]; // from 2 to n, primality[i - 2] is 0 implies i is composite, 1 implies prime
  for(int i = 0; i < n - 1; ++i) {
    primality[i] = -1;
  }
  int i = 2;
  while(true) {
    if(isComposite(i, primality) && isComposite(n - i, primality)) {
      std::cout << i << " " << n - i << '\n';
      return 0;
    }
    ++i;
  }
}
