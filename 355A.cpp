#include <iostream>

int main() {
  int k, d;
  std::cin >> k >> d;
  if((d == 0) && (k != 1)) {
    std::cout << "No solution\n";
    return 0;
  }
  std::cout << d;
  for(int i = 0; i < k - 1; ++i) {
    std::cout << 0;
  }
  std::cout << '\n';
}
