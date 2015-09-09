#include <iostream>
#include <vector>
#include <algorithm>

struct instrument {
  int index, count;
};

bool operator<(const instrument& a, const instrument& b) {
  return a.count < b.count;
}

int main() {
  int n, k;
  std::cin >> n >> k;
  std::vector<instrument> values(n);
  for(int i = 0; i < n; ++i) {
    values[i].index = i;
    std::cin >> values[i].count;
  }
  std:sort(values.begin(), values.end());
  int sum = 0, i;
  for(i = 0; i < n; ++i) {
    sum += values[i].count;
    if(sum > k) {
      break;
    }
  }
  if(i == 0) std::cout << "0\n";
  else {
    std::cout << i << '\n';
    for(int j = 0; j < i; ++j) {
      std::cout << values[j].index + 1 << ((j == i - 1) ? "\n" : " ");
    }
  }
}
