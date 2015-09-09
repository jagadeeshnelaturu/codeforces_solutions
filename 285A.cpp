#include <iostream>

int main() {
  int n, k;
  std::cin >> n >> k;
  for(int i = 1; i <= n - k - 1; ++i) {
    std::cout << i << " ";
  }
  for(int i = n; i >= n - k; --i) {
    std::cout << i << " ";
  }
  std::cout << '\n';
}
