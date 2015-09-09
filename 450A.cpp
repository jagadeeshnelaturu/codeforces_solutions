#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;
  int maxIndex, maxQuotient = 0, temp;
  int i;
  for(i = 0; i < n; ++i) {
    std::cin >> temp;
    if((temp - 1) / m >= maxQuotient) {
      maxIndex = i;
      maxQuotient = (temp - 1) / m;
    }
  }
  std::cout << maxIndex + 1 << '\n';
}
