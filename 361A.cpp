#include <iostream>

int main() {
  int n, k;
  std::cin >> n >> k;
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < i; ++j) {
      std::cout << 0 << ' ';
    }
    std::cout << k << ' ';
    for(int j = 0; j < n - i - 1; ++j) {
      std::cout << 0 << ' ';
    }
    std::cout << '\n';
  }
}
