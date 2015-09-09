#include <iostream>

int main() {
  int n, s;
  std::cin >> n >> s;
  int maxChocolates = 0, dollars, cents;
  bool possible = false;
  while(n--) {
    std::cin >> dollars >> cents;
    if((dollars < s) || ((dollars == s) && (cents == 0))) {
      possible = true;
      if(cents != 0) {
        maxChocolates = std::max(maxChocolates, 100 - cents);
      }
    }
  }
  std::cout << (possible ? maxChocolates : -1) << '\n';
}
