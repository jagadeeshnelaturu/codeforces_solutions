#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int temp;
  std::cin >> temp;
  int max = temp, min = temp, count = 0;
  for(int i = 1; i < n; ++i) {
    std::cin >> temp;
    if((temp > max) || (temp < min)) ++count;
    max = std::max(temp, max);
    min = std::min(temp, min);
  }
  std::cout << count << '\n';
}
