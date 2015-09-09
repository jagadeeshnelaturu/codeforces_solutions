#include <iostream>

int main() {
  int n, top;
  std::cin >> n >> top;
  if(top > 3) top = 7 - top;
  int left, right;
  while(n--) {
    std::cin >> left >> right;
    if(left > 3) left = 7 - left;
    if(right > 3) right = 7 - right;
    if(left + right != 6 - top) {
      std::cout << "NO\n";
      return 0;
    }
  }
  std::cout << "YES\n";
}
