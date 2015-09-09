#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  long long int n;
  std::cin >> n;
  std::vector<long long int> values(n);
  for(int i = 0; i < n; ++i) {
    std::cin >> values[i];
  }
  std::sort(values.begin(), values.end());
  long long int sum = 0;
  for(int i = 0; i <= n - 2; ++i) {
    sum += (i + 2) * values[i];
  }
  sum += n * values[n - 1];
  std::cout << sum << '\n';
}
