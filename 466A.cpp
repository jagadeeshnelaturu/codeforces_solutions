#include <iostream>

int main() {
  int n, m, a, b;
  std::cin >> n >> m >> a >> b;
  if(m * a <= b) {
    std::cout << n * a << '\n';
  }
  else {
    int count1 = (n / m) * b + (n % m) * a, count2 = ((n / m) + 1) * b;
    std::cout << std::min(count1, count2) << '\n';
  }
}
