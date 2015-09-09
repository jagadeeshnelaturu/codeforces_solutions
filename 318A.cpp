#include <iostream>
#include <set>

int main() {
  long long int n, k;
  std::cin >> n >> k;
  if(k <= ((n + 1) / 2)) {
    std::cout << 2 * k - 1 << '\n';
  }
  else {
    std::cout << 2 * k - n - ((n % 2 == 0) ? 0 : 1) << '\n';
  }
}
