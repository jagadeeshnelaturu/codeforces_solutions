#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  int n;
  std::cin >> n;
  int *prefixSums = new int[n], temp;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    prefixSums[i] = temp + (i ? prefixSums[i - 1] : 0);
  }
  int total = prefixSums[n - 1], x, y;
  std::cin >> x >> y;
  for(int i = 0; i < n; ++i) {
    if((prefixSums[i] >= std::max(x, total - y)) &&
       (prefixSums[i] <= std::min(total - x, y))) {
      std::cout << i + 2 << '\n';
      return 0;
    }
  }
  std::cout << 0 << '\n';
}
