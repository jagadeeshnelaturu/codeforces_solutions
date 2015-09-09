#include <iostream>

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;
  int val1 = a + b + c, val2 = a + b * c, val3 = (a + b) * c,
      val4 = a * b + c, val5 = a * (b + c), val6 = a * b * c;
  int m = std::max(std::max(val1, val2), std::max(std::max(val3, val4), std::max(val5, val6)));
  std::cout << m << '\n';
}
