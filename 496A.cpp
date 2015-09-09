#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int max1diff, min2diff, prev_val2, prev_val1, current_val;

  std::cin >> prev_val2 >> prev_val1 >> current_val;
  max1diff = std::max(prev_val1 - prev_val2, current_val - prev_val1);
  min2diff = current_val - prev_val2;
  n -= 3;

  while(n--) {
    prev_val2 = prev_val1;
    prev_val1 = current_val;
    std::cin >> current_val;
    max1diff = std::max(max1diff, current_val - prev_val1);
    min2diff = std::min(min2diff, current_val - prev_val2);
  }
  std::cout << std::max(max1diff, min2diff) << '\n';
}
