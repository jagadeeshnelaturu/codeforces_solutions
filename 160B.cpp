#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int n;
  std::cin >> n;
  std::vector<char> left(n), right(n);
  for(int i = 0; i < n; ++i) {
    std::cin >> left[i];
  }
  for(int i = 0; i < n; ++i) {
    std::cin >> right[i];
  }
  std::sort(left.begin(), left.end());
  std::sort(right.begin(), right.end());
  if(left[0] == right[0]) {
    std::cout << "NO\n";
    return 0;
  }
  bool lessThan = (left[0] < right[0]);
  for(int i = 1; i < n; ++i) {
    if((left[i] == right[i]) || ((left[i] < right[i]) != lessThan)) {
      std::cout << "NO\n";
      return 0;
    }
  }
  std::cout << "YES\n";
}
