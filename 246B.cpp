#include <iostream>

int main() {
  int n, sum = 0, temp;
  std::cin >> n;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    sum += temp;
  }
  std::cout << n - ((sum % n) ? 1 : 0) << '\n';
}
