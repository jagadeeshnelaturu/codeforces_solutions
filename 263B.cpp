#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int n, k;
  std::cin >> n >> k;
  if(k > n) {
    std::cout << "-1\n";
    return 0;
  }
  std::vector<int> vals(n);
  for(int i = 0; i < n; ++i) {
    std::cin >> vals[i];
  }
  std::sort(vals.begin(), vals.end());
  std::cout << vals[n - k] << " " << vals[n - k] << '\n';
}
