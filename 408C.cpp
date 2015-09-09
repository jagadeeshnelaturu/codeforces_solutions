#include <iostream>
#include <cmath>
#include <vector>

struct point {
  int _x, _y;
  point() {
  }
  point(int x, int y) {
    _x = x;
    _y = y;
  }
};

std::vector<point> findTriplet(int n) {
  std::vector<point> solutions;
  double diff;
  for(int i = 1; i <= n; ++i) {
    diff = sqrt(n * n - i * i);
    if(diff == (int) diff) {
      point p(i, diff);
      solutions.push_back(p);
    }
  }
  return solutions;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::vector<point> x1 = findTriplet(a), x2 = findTriplet(b);
  if((x1.begin() == x1.end()) || (x2.begin() == x2.end())) {
    std::cout << "NO\n";
    return 0;
  }
  for(std::vector<point>::iterator it1 = x1.begin(); it1 != x1.end(); ++it1) {
    for(std::vector<point>::iterator it2 = x2.begin(); it2 != x2.end(); ++it2) {
      if((it1->_y != it2->_y) && (it1->_x * it2->_x == it1->_y * it2->_y)) {
        std::cout << "YES\n0 0\n" << it1->_x << ' ' << it1->_y << '\n' << -it2->_x << ' ' << it2->_y << '\n';
        return 0;
      }
    }
  }
  std::cout << "NO\n";
}
