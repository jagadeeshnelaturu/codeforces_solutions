#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int currentPos = 1, distance = 1;
  for(int i = 0; i < n - 1; ++i) {
    currentPos = ((currentPos + distance - 1) % n) + 1;
    std::cout << currentPos << ' ';
    ++distance;
  }
  std::cout << '\n';
}
