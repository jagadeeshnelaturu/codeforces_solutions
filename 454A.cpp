#include <iostream>
#include <cmath>

int main() {
  int n;
  std::cin >> n;
  for(int i = 0; i < n; ++i) {
    int d = std::abs((n - 1 - 2 * i) / 2);
    for(int i = 0; i < d; ++i) std::cout << '*';
    for(int i = 0; i < n - 2 * d; ++i) std::cout << 'D';
    for(int i = 0; i < d; ++i) std::cout << '*';
    std::cout << '\n';
  }
}
