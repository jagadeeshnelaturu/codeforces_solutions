#include <iostream>

#define MAX_PARTICIPATION 5

int main() {
  int n, k;
  std::cin >> n >> k;
  int counts[MAX_PARTICIPATION + 1] = {0};
  int temp;
  while(n--) {
    std::cin >> temp;
    ++counts[temp];
  }
  int sum = 0;
  for(int i = 0; i <= MAX_PARTICIPATION - k; ++i) {
    sum += counts[i];
  }
  std::cout << sum / 3 << '\n';
}
