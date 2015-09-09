#include <iostream>

int main() {
  int x, y;
  std::cin >> x >> y;
  if(x > 0) {
    if(y > 0) {
      std::cout << "0 " << x + y << " " << x + y << " 0\n";
    }
    else {
      std::cout << "0 " << y - x << " " << x - y << " 0\n";
    }
  }
  else {
    if(y > 0) {
      std::cout << x - y << " 0 0 " << y - x << '\n';
    }
    else {
      std::cout << x + y << " 0 0 " << x + y << '\n';
    }
  }
}
