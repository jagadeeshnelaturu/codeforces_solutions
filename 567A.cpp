#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int* values = new int[n];
  for(int i = 0; i < n; ++i) {
    std::cin >> values[i];
  }
  std::cout << values[1] - values[0] << " " << values[n - 1] - values[0] << '\n';
  for(int i = 1; i < n - 1; ++i) {
    std::cout << std::min(values[i] - values[i - 1], values[i + 1] - values[i]) << " " << std::max(values[i] - values[0], values[n - 1] - values[i]) << '\n';
  }
  std::cout << values[n - 1] - values[n - 2] << " " << values[n - 1] - values[0] << '\n';
}
