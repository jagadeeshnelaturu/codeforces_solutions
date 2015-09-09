#include <iostream>
#include <iomanip>
#include <cmath>

#define SPEED 50

int main() {
  int n, k;
  std::cin >> n >> k;
  double distance = 0;
  int xprev, yprev, x, y;
  std::cin >> xprev >> yprev;
  --n;
  while(n--) {
    std::cin >> x >> y;
    distance += sqrt((x - xprev) * (x - xprev) + (y - yprev) * (y - yprev));
    xprev = x;
    yprev = y;
  }
  std::cout << std::setprecision(12) << distance * k / SPEED << '\n';
}
