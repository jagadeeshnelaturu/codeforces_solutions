#include <iostream>
#include <climits>

int main() {
  int n;
  std::cin >> n;
  int* values = new int[n];
  for(int i = 0; i < n; ++i) {
    std::cin >> values[i];
  }
  int maxsum = INT_MIN, tempsum;
  for(int i = 1; i <= (n >> 1); ++i) {
    if(n % i) continue;
    if(n / i < 3) break;
    for(int j = 0; j < i; ++j) {
      tempsum = 0;
      for(int k = j; k < n; k += i) {
        tempsum +=values[k];
      }
      maxsum = std::max(maxsum, tempsum);
    }
  }
  std::cout << maxsum << '\n';
}
