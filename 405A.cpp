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
  for(int i = 0; i < n ; ++i) {
    std::cout << values[i] << " ";
  }
  std::cout << '\n';
}
