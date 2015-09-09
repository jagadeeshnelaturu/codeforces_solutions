#include <iostream>

int main() {
  int n, k;
  std::cin >> n >> k;
  int joy, maxjoy, fi, ti;
  std::cin >> fi >> ti;
  maxjoy = fi - ((ti > k) ? (ti - k) : 0);
  --n;
  while(n--) {
    std::cin >> fi >> ti;
    joy = fi - ((ti > k) ? (ti - k) : 0);
    maxjoy = std::max(joy, maxjoy);
  }
  std::cout << maxjoy << '\n';
}
