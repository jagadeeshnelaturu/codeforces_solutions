#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int n, x;
  std::cin >> n >> x;
  std::vector<int> values(n);
  for(int i = 0; i < n; ++i) {
    std::cin >> values[i];
  }
  std::sort(values.begin(), values.end());
  long long int sum = 0;
  for(int i = 0; i < n; ++i) {
    sum += (long long int) values[i] * x;
    if(x > 1) --x;
  }
  std::cout << sum << '\n';
}

