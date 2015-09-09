#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int* values = new int[n - 1];
  for(int i = 0; i < n - 1; ++i) {
    std::cin >> values[i];
  }
  int first, last, sum = 0;
  std::cin >> first >> last;
  for(int i = first - 1; i < last - 1; ++i) {
    sum += values[i];
  }
  std::cout << sum << '\n';
}
