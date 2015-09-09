#include <iostream>

int main() {
  int y, k, n;
  std::cin >> y >> k >> n;
  if((y + 1 > n) || (((y + 1) / k == n / k) && ((y + 1) % k))) {
    std::cout << "-1\n";
    return 0;
  }
  for(int i = y / k + 1; i <= n / k; ++i) {
    std::cout << i * k - y << " ";
  }
  std::cout << '\n';
}
