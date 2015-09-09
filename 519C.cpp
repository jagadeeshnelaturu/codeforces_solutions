#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;
  if(n * m == 0) {
    std::cout << "0\n";
    return 0;
  }
  double ratio = (double) n / m;
  if(ratio > 2) {
    std::cout << m << '\n';
  }
  else if(ratio < 0.5) {
    std::cout << n << '\n';
  }
  else if((ratio >= 0.5) && (ratio <= 2)) {
    std::cout << (int) ((m + n) / 3) << '\n';
  }
}
