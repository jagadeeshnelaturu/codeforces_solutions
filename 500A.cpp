#include <iostream>

int main() {
  int n, t;
  std::cin >> n >> t;
  int target = 0, temp;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    if(i == target) {
      target += temp;
      if(target == t - 1) {
        std::cout << "YES\n";
        return 0;
      }
      else if(target > t - 1) {
        std::cout << "NO\n";
        return 0;
      }
    }
  }
}
