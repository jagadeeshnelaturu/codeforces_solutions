#include <iostream>
#include <vector>
#include <algorithm>

int main () {
  int n, d;
  std::cin >> n >> d;
  std::vector<int> price(n);
  for(int i = 0; i < n; ++i) {
    std::cin >> price[i];
  }
  int m;
  std:: cin >> m;
  std::sort(price.begin(), price.end());
  int sum = 0;
  for(int i = 0; i < std::min(m, n); ++i) {
    sum += price[i];
  }
  std::cout << sum - std::max(0, m - n) * d << '\n';
}
