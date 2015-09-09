#include <iostream>

int main() {
  int k, l;
  std::cin >> k >> l;
  int count = 0;
  while(true) {
    if(l == k) break;
    if(l % k) {
      std::cout << "NO\n";
      return 0;
    }
    l /= k;
    ++count;
  }
  std::cout << "YES\n" << count << '\n';
}
