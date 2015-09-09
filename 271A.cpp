#include <iostream>

bool distinct(int y) { // 1001 < y <= 9012
  int a = y / 1000;
  int b = (y / 100) - (10 * a);
  int c = (y / 10) - (100 * a) - (10 * b);
  int d = y - (1000 * a) - (100 * b) - (10 * c);
  return ((a != b) && (a != c) && (a != d) && (b != c) && (b != d) && (c != d));
}

int main() {
  int y;
  std::cin >> y;
  while(true) {
    ++y;
    if(distinct(y)) {
      std::cout << y << '\n';
      return 0;
    }
  }
}
