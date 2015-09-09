#include <iostream>
#include <climits>

int main() {
  int n, k;
  std::cin >> n >> k;
  int *values = new int[n], min = INT_MAX, max = INT_MIN;
  for(int i = 0; i < n; ++i) {
    std::cin >> values[i];
    min = std::min(min, values[i]);
    max = std::max(max, values[i]);
  }
  int temp;
  if(max - min > k) {
    std::cout << "NO\n";
  }
  else {
    std::cout << "YES\n";
    for(int i = 0; i < n; ++i) {
      temp = 1;
      for(int j = 0; j < min; ++j) {
        std::cout << temp << ' ';
      }
      for(int j = min; j < values[i]; ++j) {
        std::cout << temp << ' ';
        ++temp;
      }
      std::cout << '\n';
    }
  }
}
