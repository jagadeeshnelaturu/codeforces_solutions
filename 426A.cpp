#include <iostream>

int main() {
  int n, s;
  std::cin >> n >> s;
  int sum = 0, max = 0, temp;
  while(n--) {
    std::cin >> temp;
    sum += temp;
    max = std::max(max, temp);
  }
  std::cout << ((sum - max <= s) ? "YES" : "NO") << '\n';
}
