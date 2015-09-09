#include <iostream>
#include <cmath>

int main() {
  long long int r, x1, y1, x2, y2;
  std::cin >> r >> x1 >> y1 >> x2 >> y2;
  long double distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
  long long int numberOfMoves = std::ceil(distance / (2 * r));
  std::cout << numberOfMoves << '\n';
}
