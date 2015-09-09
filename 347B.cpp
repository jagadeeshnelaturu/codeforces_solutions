#include <iostream>

bool doubleswap(int *values, int n) {
  for(int i = 0; i < n; ++i) {
    if(values[i] == i) continue;
    if(values[values[i]] == i) return true;
  }
  return false;
}

int main() {
  int n;
  std::cin >> n;
  int *values = new int[n], count = 0;
  for(int i = 0; i < n; ++i) {
    std::cin >> values[i];
    if(values[i] == i) ++count;
  }
  if((count == n) || (count == n - 1)) {
    std::cout << count << '\n';
  }
  else if(doubleswap(values, n)) {
    std::cout << count + 2 << '\n';
  }
  else {
    std::cout << count + 1 << '\n';
  }
}
