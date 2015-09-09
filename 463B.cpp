#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int maxHeight = 0, temp;
  while(n--) {
    std::cin >> temp;
    maxHeight = std::max(temp, maxHeight);
  }
  std::cout << maxHeight << '\n';
}
