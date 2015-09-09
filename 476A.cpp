#include <iostream>
#include <cmath>

int main() {
  int n, m;
  std::cin >> n >> m;
  float x1 = (float) n / m, x2 = (float) n / (2 * m);
  int t = ceil(x2);
  if(t <= x1) {
    std::cout << t * m << '\n';
  }
  else {
    std::cout << "-1\n";
  }
}
