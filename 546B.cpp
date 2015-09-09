#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int* counts = new int[n];
  for(int i = 0; i < n; ++i) {
    counts[i] = 0;
  }
  int temp;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    ++counts[temp - 1];
  }
  int result = 0;
  for(int i = 0; i < n - 1; ++i) {
    if(counts[i] != 0) {
      result += counts[i] - 1;
      counts[i + 1] += counts[i] - 1;
    }
  }
  result += (counts[n - 1] * (counts[n - 1] - 1)) / 2;
  std::cout << result << '\n';
}
