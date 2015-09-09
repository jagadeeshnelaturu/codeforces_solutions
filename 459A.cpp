#include <iostream>
#include <cmath>

int main() {
  int x1, y1, x2, y2;
  std::cin >> x1 >> y1 >> x2 >> y2;
  if(x1 == x2) {
    int side = std::abs(y1 - y2);
    std::cout << x1 + side << " " << y1 << " " << x2 + side << " " << y2 << '\n';
  }
  else if(y1 == y2) {
    int side = std::abs(x1 - x2);
    std::cout << x1 << " " << y1 + side << " " << x2 << " " << y2 + side << '\n';
  }
  else {
    if(std::abs(x1 - x2) != std::abs(y1 - y2)) {
      std::cout << "-1\n";
    }
    else {
      std::cout << x1 << " " << y2 << " " << x2 << " " << y1 << '\n';
    }
  }
}
