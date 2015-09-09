#include <iostream>

int main() {
  int a1, a2, a3, a4, a5, a6;
  std::cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6;
  // a5 == a1 + a2 - a4, a6 == a3 + a4 - a1
  std::cout << a1 * (a2 + a6) + a4 * (a3 + a5) + a2 * a6 + a3 * a5 << '\n';
}
