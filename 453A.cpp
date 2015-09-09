#include <iostream>
#include <cmath>

int main() {
  int m, n;
  std::cin >> m >> n;
  double sum = 0;
  for(int i = 1; i < m; ++i) {
    sum += pow((double) i / m, n);
  }
  std::cout <<  m - sum << '\n';
}
