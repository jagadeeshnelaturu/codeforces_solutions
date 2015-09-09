#include <iostream>
#include <set>
#include <cmath>

int gcd(int x, int y) {
  int temp;
  while(y != 0) {
    temp = x % y;
    x = y;
    y = temp;
  }
  return x;
}

int main() {
  int n, x0, y0;
  std::cin >> n >> x0 >> y0;
  std::set< std::pair<int, int> > angles;
  int x, y, xdiff, ydiff, g;
  while(n--) {
    std::cin >> x >> y;
    xdiff = std::abs(x - x0);
    ydiff = std::abs(y - y0);
    g = gcd(xdiff, ydiff);
    if(xdiff && ydiff) {
      if((x - x0) * (y - y0) > 0) angles.insert(std::make_pair(xdiff / g, ydiff / g));
      else angles.insert(std::make_pair(-xdiff / g, ydiff / g));
    }
    else {
      angles.insert(std::make_pair(xdiff / g, ydiff / g));
    }
  }
  std::cout << angles.size() << '\n';
}
