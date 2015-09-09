#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> values(n);
  for(int i = 0; i < n; ++i) {
    std::cin >> values[i];
  }
  std::sort(values.begin(), values.end());
  int timeTillNow = 0, disappointedCount = 0;
  for(std::vector<int>::iterator it = values.begin(); it != values.end(); ++it) {
    if(*it < timeTillNow) ++disappointedCount;
    else timeTillNow += *it;
  }
  std::cout << n - disappointedCount << '\n';
}
