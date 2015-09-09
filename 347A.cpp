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
  values[0] ^= values[n - 1] ^= values[0] ^= values[n - 1];
  for(int i = 0; i < n; ++i) {
    std::cout << values[i] << ' ';
  }
  std::cout << '\n';
}
