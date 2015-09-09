#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int n, m;
  std::cin >> n >> m;
  std::vector<int> values(m);
  for(int i = 0; i < m; ++i) {
    std::cin >> values[i];
  }
  std::sort(values.begin(), values.end());
  int diff = values[n - 1] - values[0];
  for(int i = 1; i <= m - n; ++i) {
    diff = std::min(diff, values[n + i - 1] - values[i]);
  }
  std::cout << diff << '\n';
}
