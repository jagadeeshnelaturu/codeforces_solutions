#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> values(n);
  for(int i = 0; i < n; ++i) {
    std::cin >> values[i];
  }
  std::sort(values.begin(), values.end());
  long long int sum = 0;
  for(int i = 0; i < n; ++i) {
    sum += std::abs(i + 1 - values[i]);
  }
  std::cout << sum << '\n';
}
