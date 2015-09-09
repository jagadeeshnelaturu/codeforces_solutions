#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int x1, y1, x2, y2, score = 0;
  while(n--) {
    std::cin >> x1 >> y1 >> x2 >> y2;
    score += (x2 - x1 + 1) * (y2 - y1 + 1);
  }
  std::cout << score << '\n';
}
