#include <iostream>
#include <cmath>

int main() {
  int n, x;
  std::cin >> n >> x;
  int sum = 0, temp;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    sum += temp;
  }
  std::cout << ceil(std::abs(sum) / x) << '\n';
}
