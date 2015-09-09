#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int n, k;
  std::cin >> n >> k;
  std::vector<int> floors(n);
  for(int i = 0; i < n; ++i) {
    std::cin >> floors[i];
  }
  std::sort(floors.begin(), floors.end());
  int i = n - 1, sum = 0;
  while(i >= 0) {
    sum += 2 * (floors[i] - 1);
    i -= k;
  }
  std::cout << sum << '\n';
}
