#include <iostream>

int main() {
  int n, a, b;
  std::cin >> n >> a >> b;
  std::cout << n - std::max(a + 1, n - b) + 1 << '\n';
}
