#include <iostream>
#include <cmath>

int main() {
  int n;
  std::cin >> n;
  int x = sqrt(8 * n + 1);
  std::cout << ((x * x == 8 * n + 1) ? "YES" : "NO") << '\n';
}
