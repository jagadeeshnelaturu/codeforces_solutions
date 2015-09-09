#include <iostream>

int main() {
  int n, c;
  std::cin >> n >> c;
  int val, prevVal, maxDiff = 0;
  std::cin >> prevVal;
  --n;
  while(n--) {
    std::cin >> val;
    maxDiff = std::max(prevVal - val, maxDiff);
    prevVal = val;
  }
  std::cout << std::max(maxDiff - c, 0) << '\n';
}
