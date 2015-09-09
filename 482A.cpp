#include <iostream>

int main() {
  int n, k;
  std::cin >> n >> k;
  for(int i = 1; i <= n - k; ++i) {
    std::cout << i << " ";
  }
  std::cout << n << " ";
  int count = n - k + 1, diff = k - 1, mult = -1, temp = n;
  while(count != n) {
    temp += mult * diff;
    mult = -mult;
    --diff;
    ++count;
    std::cout << temp << " ";
  }
  std::cout << '\n';
}
