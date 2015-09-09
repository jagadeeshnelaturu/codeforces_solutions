#include <iostream>

int main() {
  int n, k;
  std::cin >> n >> k;
  int *values = new int[n];
  for(int i = 0; i < n; ++i) {
    std::cin >> values[i];
  }
  int *sums = new int[n - k + 1];
  sums[0] = 0;
  for(int i = 0; i < k; ++i) {
    sums[0] += values[i];
  }
  for(int i = 1; i <= n - k; ++i) {
    sums[i] = sums[i - 1] - values[i - 1] + values[i - 1 + k];
  }
  int min = 0;
  for(int i = 1; i <= n - k; ++i) {
    if(sums[i] < sums[min]) min = i;
  }
  std::cout << min + 1 << '\n';
}
