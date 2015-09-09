#include <iostream>
#include <vector>
#include <algorithm>

#define MONTHS 12

int main() {
  int k;
  std::cin >> k;
  std::vector<int> values(MONTHS);
  for(int i = 0 ; i < MONTHS; ++i) {
    std::cin >> values[i];
  }
  std::sort(values.begin(), values.end());
  int sum = 0;
  if(k == 0) {
    std::cout << "0\n";
    return 0;
  }
  for(int i = MONTHS - 1; i >= 0; --i) {
    sum += values[i];
    if(sum >= k) {
      std::cout << MONTHS - i << '\n';
      return 0;
    }
  }
  std::cout << "-1\n";
}
